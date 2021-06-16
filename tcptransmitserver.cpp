#include "tcptransmitserver.h"

TCPTransmitServer::TCPTransmitServer(QObject *parent)
    : QTcpServer(parent)
{
}

TCPTransmitServer::~TCPTransmitServer()
{
}

bool TCPTransmitServer::startServer(int port)
{
#if(QT_VERSION > QT_VERSION_CHECK(5, 0, 0))
    return listen(QHostAddress::AnyIPv4, port);
#else
    return listen(QHostAddress::Any, port);
#endif
}

void TCPTransmitServer::stopServer()
{
    close();
}

void TCPTransmitServer::incomingConnection(qintptr socketDescriptor)
{
    transmitFile = new TransmitFileThread(socketDescriptor, this);

    QString ip   = transmitFile->tcpSocket->peerAddress().toString();
    quint16 port = transmitFile->tcpSocket->peerPort();

    emit connectedSignal(ip, port);

    connect(transmitFile, &TransmitFileThread::receiveMessageSignal, this, &TCPTransmitServer::receiveMessageSignal);
    connect(transmitFile, &TransmitFileThread::receiveFileNameSignal, this, &TCPTransmitServer::receiveFileNameSignal);
    connect(transmitFile, &TransmitFileThread::receiveFileSizeSignal, this, &TCPTransmitServer::receiveFileSizeSignal);
    connect(transmitFile, &TransmitFileThread::receiveDataSignal, this, &TCPTransmitServer::receiveDataSignal);
    connect(transmitFile, &TransmitFileThread::receiveFinishedSignal, this, &TCPTransmitServer::receiveFinishedSignal);
    connect(transmitFile, &QThread::finished, this, &TCPTransmitServer::receiveFinishedSignal);

    connect(transmitFile, &TransmitFileThread::sendFileSizeSignal, this, &TCPTransmitServer::sendFileSizeSignal);
    connect(transmitFile->tcpSocket, &QIODevice::bytesWritten, this, &TCPTransmitServer::bytesWrittenSignal);
    connect(transmitFile, &TransmitFileThread::sendMessageSignal, this, &TCPTransmitServer::sendMessageSignal);
    connect(transmitFile, &TransmitFileThread::sendFinishedSignal, this, &TCPTransmitServer::sendFinishedSignal);

    connect(transmitFile, &QThread::finished, transmitFile, &QObject::deleteLater);

    transmitFile->start();
}

void TCPTransmitServer::SendFile(QString fileName)
{
    transmitFile->SendFile(fileName);
}
