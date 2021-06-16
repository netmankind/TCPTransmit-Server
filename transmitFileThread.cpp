#include "transmitFileThread.h"

TransmitFileThread::TransmitFileThread(int socketDescriptor, QObject *parent)
    : QThread(parent)
{
    blockSize   = 0;
    blockNumber = 0;
    tcpSocket   = new QTcpSocket(this);
    tcpSocket->setSocketDescriptor(socketDescriptor);

    connect(tcpSocket, &QIODevice::readyRead, this, &TransmitFileThread::ReceiveData);
    //connect(tcpSocket, &QAbstractSocket::disconnected, this, &TransmitFileThread::DisConnect);

    connect(tcpSocket, QOverload< QAbstractSocket::SocketError >::of(&QAbstractSocket::error), this, &TransmitFileThread::displaySocketError);
}

TransmitFileThread::~TransmitFileThread()
{
}

void TransmitFileThread::run()
{
    emit receiveMessageSignal(tr("收到新连接请求:[%1:%2]")
                                  .arg(tcpSocket->peerAddress().toString())
                                  .arg(tcpSocket->peerPort()));
    exec();
}

void TransmitFileThread::DisConnect()
{
    emit receiveMessageSignal(tr("断开连接"));
    deleteLater();
}

void TransmitFileThread::SendFile(QString fileName)
{
    emit sendMessageSignal(tr("连接成功connect succesful"));
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly))
    {
        emit sendMessageSignal(tr("文件不能打开进行读取file don't open"));
        return;
    }
    else
    {
        emit sendFileSizeSignal(file.size());
    }

    qint64 size;
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_DefaultCompiledVersion);
    QFileInfo fileInfo(fileName);
    QString name = fileInfo.fileName();    //获取文件名,含扩展名

    //写入开始符及文件名称
    emit sendMessageSignal(tr("发送开始符及文件名称send start signal and file name"));
    block.clear();
    out.device()->seek(0);
    out << 0x01 << name.toUtf8();
    size = block.size();
    tcpSocket->write((char *)&size, sizeof(qint64));
    tcpSocket->write(block.data(), size);

    if(!tcpSocket->waitForBytesWritten(-1))
    {
        emit sendMessageSignal(tr("发送开始符数据发生错误:%1").arg(tcpSocket->errorString()));
        return;
    }

    //写入文件大小
    emit sendMessageSignal(tr("发送文件大小file size:%1").arg(file.size()));
    block.clear();
    out.device()->seek(0);
    out << 0x02 << QString::number(file.size()).toUtf8();
    size = block.size();
    tcpSocket->write((char *)&size, sizeof(qint64));
    tcpSocket->write(block.data(), size);

    if(!tcpSocket->waitForBytesWritten(-1))
    {
        emit sendMessageSignal(tr("发送文件大小数据发生错误:%1").arg(tcpSocket->errorString()));
        return;
    }

    //循环写入文件数据
    do
    {
        block.clear();
        out.device()->seek(0);
        //每次最多读取0xFFFF 即65535个字节发送,对于大文件如果一次性读取完内存不一定吃得消
        //每次发送的文件数据都带上一个0x03标识符
        out << 0x03 << file.read(0xFFFF);
        size = block.size();
        emit sendMessageSignal(tr("当前发送数据大小current send size:%1字节").arg(size));
        tcpSocket->write((char *)&size, sizeof(qint64));
        tcpSocket->write(block.data(), size);
        if(!tcpSocket->waitForBytesWritten(-1))
        {
            emit sendMessageSignal(tr("发送文件数据发生错误:%1").arg(tcpSocket->errorString()));
            return;
        }
    } while(!file.atEnd());

    //写入结束符及文件名称
    emit sendMessageSignal(tr("发送结束符及文件名称send end signal and filename"));
    block.clear();
    out.device()->seek(0);
    out << 0x04 << name.toUtf8();
    size = block.size();
    tcpSocket->write((char *)&size, sizeof(qint64));
    tcpSocket->write(block.data(), size);

    if(!tcpSocket->waitForBytesWritten(-1))
    {
        emit sendMessageSignal(tr("发送结束符数据发生错误:%1").arg(tcpSocket->errorString()));
        return;
    }
    file.close();

    emit sendFinishedSignal();
    emit sendMessageSignal(tr("发送文件完毕send finish"));
}

void TransmitFileThread::ReceiveData()
{
    while(tcpSocket->bytesAvailable() >= sizeof(quint64))
    {
        if(blockSize == 0)
        {
            if(tcpSocket->bytesAvailable() < sizeof(qint64))
            {
                return;
            }
            tcpSocket->read((char *)&blockSize, sizeof(qint64));
        }
        if(tcpSocket->bytesAvailable() < blockSize)
        {
            return;
        }
        emit receiveDataSignal(blockSize + sizeof(qint64));
        QByteArray data = tcpSocket->read(blockSize);
        proccessData(data);
        blockSize = 0;
    }
}

void TransmitFileThread::proccessData(QByteArray &array)
{
    QDataStream in(&array, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_DefaultCompiledVersion);

    int key;
    QByteArray data;
    in >> key >> data;
    blockNumber++;

    emit receiveMessageSignal(tr("已接收数据包:%1个").arg(blockNumber));
    emit receiveMessageSignal(tr("收到标识符:%1 当前数据包大小:%2字节").arg(key).arg(data.size()));

    switch(key)
    {
        case 0x01:
            fileName = fileName.fromUtf8(data.data(), data.size());
            file.setFileName(qApp->applicationDirPath() + "/" + fileName);
            emit receiveFileNameSignal(file.fileName());
            if(file.exists())
            {
                file.remove();
            }
            if(!file.open(QIODevice::WriteOnly))
            {
                emit receiveMessageSignal(tr("不能打开文件进行写入"));
                break;
            }
            break;
        case 0x02:
        {
            QString size = QString::fromUtf8(data.data(), data.size());
            emit receiveFileSizeSignal(size.toUInt());
            break;
        }
        case 0x03:
            file.write(data.data(), data.size());
            file.flush();
            break;
        case 0x04:
            file.close();
            blockSize   = 0;
            blockNumber = 0;
            emit receiveFinishedSignal();
            emit receiveMessageSignal(tr("接收文件完毕receive finish"));
            break;
    }
}

void TransmitFileThread::displaySocketError(QAbstractSocket::SocketError)
{
    emit receiveMessageSignal(tr("Socket错误:%1[%2]").arg(tcpSocket->errorString()));
    //QMessageBox::information(0, tr("提示"), tr("Socket错误:") + tcpSocket->errorString());

    if(file.isOpen())
    {
        emit receiveMessageSignal(tr("正在移除文件:%1").arg(file.fileName()));
        file.close();
    }
    else
    {
        return;
    }
    if(!file.fileName().isEmpty())
    {
        emit receiveMessageSignal(tr("正在移除文件:%1").arg(fileName));
        file.remove(fileName);
    }
    else
    {
        return;
    }
}
