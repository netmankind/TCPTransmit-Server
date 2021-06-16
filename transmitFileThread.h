#ifndef TRANSMITFILETHREAD_H
#define TRANSMITFILETHREAD_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

#include <QFile>
#include <QFileInfo>
#include <QMessageBox>
#include <QTcpSocket>
#include <QThread>
#include <QtCore>
#include <QtNetwork>

class TransmitFileThread : public QThread
{
    Q_OBJECT
public:
    explicit TransmitFileThread(int socketDescriptor, QObject *parent = nullptr);
    ~TransmitFileThread();

    void SendFile(QString fileName);

    QTcpSocket *tcpSocket;

protected:
    void run();

signals:
    void receiveFileNameSignal(QString name);
    void receiveFileSizeSignal(qint64 size);
    void receiveMessageSignal(QString msg);
    void receiveDataSignal(qint64 size);
    void receiveFinishedSignal();

    void sendFileSizeSignal(qint64 size);
    void sendMessageSignal(QString msg);
    void sendFinishedSignal();

private slots:
    void ReceiveData();
    void proccessData(QByteArray &array);
    void DisConnect();
    void displaySocketError(QAbstractSocket::SocketError);

private:
    QFile file;
    QString fileName;

    qint64 blockSize;
    qint64 blockNumber;
};

#endif    // TRANSMITFILETHREAD_H
