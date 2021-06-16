#include "frmserver.h"

#include "ui_frmserver.h"

frmServer::frmServer(QWidget *parent)
    : QDialog(parent),
      ui(new Ui::frmServer)
{
    ui->setupUi(this);

    this->setWindowTitle(ui->lab_Title->text());

    this->InitForm();

    server = new TCPTransmitServer(this);
    server->startServer(8888);

    //如果与客户端成功连接，会触发QTcpServer::newConnection()信号
    //connect(server, &QTcpServer::newConnection, this, &frmMain::acceptConnection);
    connect(server, &TCPTransmitServer::connectedSignal, this, &frmServer::clientConnected);

    connect(server, &TCPTransmitServer::receiveFinishedSignal, this, &frmServer::transmitFinshed);
    connect(server, &TCPTransmitServer::receiveMessageSignal, this, &frmServer::updateTransmitStatus);
    connect(server, &TCPTransmitServer::receiveFileNameSignal, this, &frmServer::updateReceiveFileName);
    connect(server, &TCPTransmitServer::receiveFileSizeSignal, this, &frmServer::setTransmitProgress);
    connect(server, &TCPTransmitServer::receiveDataSignal, this, &frmServer::updateTransmitProgress);

    connect(server, &TCPTransmitServer::sendFileSizeSignal, this, &frmServer::setTransmitProgress);
    connect(server, &TCPTransmitServer::bytesWrittenSignal, this, &frmServer::updateTransmitProgress);
    connect(server, &TCPTransmitServer::sendMessageSignal, this, &frmServer::updateTransmitStatus);
    connect(server, &TCPTransmitServer::sendFinishedSignal, this, &frmServer::transmitFinshed);

    connect(ui->btnExit, &QPushButton::clicked, this, &frmServer::close);
}

frmServer::~frmServer()
{
    delete ui;

    server->deleteLater();
}

void frmServer::InitForm()
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = 0;

    ui->txtSendFile->setText(tr("请选择文件"));
    ui->txtReceiveFile->setText(tr("等待接收文件"));
    ui->txtTransmitStatus->setText((tr("等待连接")));
    ui->txtTransmitStatus_1->setText((tr("尚未连接")));

    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(0);
    ui->btnSelect->setEnabled(false);
    ui->btnSend->setEnabled(false);
}

void frmServer::clientConnected(QString ip, quint16 port)
{
    updateConnectStatus(ip, port);

    ui->pbTransmitProgress->setValue(0);
    ui->btnSelect->setEnabled(true);
}

void frmServer::on_btnSelect_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), QCoreApplication::applicationDirPath(), tr("所有文件 (*.*)"));

    file.setFileName(filePath);

    ui->txtSendFile->setText(file.fileName());

    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(0);
    ui->btnSend->setEnabled(true);
}

void frmServer::on_btnSend_clicked()
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = 0;

    server->SendFile(file.fileName());
}

void frmServer::updateTransmitProgress(qint64 size)
{
    transmitBlockNumber++;
    transmitBytes += size;
    ui->pbTransmitProgress->setValue(transmitBytes);
    QString msg = tr("已传输数据包:%1个 当前数据包大小:%2字节 已传输字节:%3 总共字节:%4")
                      .arg(transmitBlockNumber)
                      .arg(size)
                      .arg(transmitBytes)
                      .arg(transmitMaxBytes);
    ui->txtTransmitStatus->setText(msg);
    qApp->processEvents();    //及时刷新界面
}

void frmServer::updateTransmitStatus(QString msg)
{
    qDebug() << tr("服务器端Server:") << msg;
    ui->txtTransmitStatus_1->setText(msg);
}

void frmServer::setTransmitProgress(qint64 size)
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = size;
    ui->pbTransmitProgress->setRange(0, size - 1);
    ui->pbTransmitProgress->setValue(0);
}

void frmServer::transmitFinshed()
{
    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(100);
    ui->txtTransmitStatus_1->setText(tr("文件传输完成"));
}

void frmServer::updateReceiveFileName(QString name)
{
    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(100);
    ui->txtReceiveFile->setText(name);
}

void frmServer::updateConnectStatus(QString ip, quint16 port)
{
    ui->txtTransmitStatus->setText(QString(tr("与客户端[%1:%2]成功连接")).arg(ip).arg(port));
}
