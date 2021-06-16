#ifndef TCPTRANSMITSERVER_H
#define TCPTRANSMITSERVER_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

#include <QTcpServer>

#include "transmitFileThread.h"

class TCPTransmitServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit TCPTransmitServer(QObject *parent = nullptr);
    ~TCPTransmitServer();

    bool startServer(int port);
    void stopServer();

    void SendFile(QString fileName);

signals:
    void connectedSignal(QString ip, quint16 port);
    void receiveFileNameSignal(QString name);
    void receiveFileSizeSignal(qint64 size);
    void receiveFinishedSignal();
    void receiveMessageSignal(QString msg);
    void receiveDataSignal(qint64 size);

    void sendFileSizeSignal(qint64 size);
    void sendMessageSignal(QString msg);
    void sendFinishedSignal();
    void bytesWrittenSignal(qint64 size);

protected:
    virtual void incomingConnection(qintptr socketDescriptor);

private:
    TransmitFileThread *transmitFile;
};

#endif    // TCPTRANSMITSERVER_H
