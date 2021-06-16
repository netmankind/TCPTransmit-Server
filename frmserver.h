#ifndef FRMSERVER_H
#define FRMSERVER_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QDialog>
#include <QDirModel>
#include <QFileDialog>
#include <QItemSelectionModel>

#include "tcptransmitserver.h"

namespace Ui
{
    class frmServer;
}

class frmServer : public QDialog
{
    Q_OBJECT

public:
    explicit frmServer(QWidget *parent = nullptr);
    ~frmServer();

private:
    Ui::frmServer *ui;
    bool max;          //是否处于最大化状态
    QRect location;    //鼠标移动窗体后的坐标位置

    int transmitBytes;
    qint64 transmitBlockNumber;
    qint64 transmitMaxBytes;

    TCPTransmitServer *server;

    QFile file;

private slots:
    void InitForm();

    void clientConnected(QString ip, quint16 port);

    void on_btnSend_clicked();
    void on_btnSelect_clicked();

    void updateTransmitProgress(qint64 size);
    void updateTransmitStatus(QString msg);
    void setTransmitProgress(qint64 size);
    void transmitFinshed();

    void updateReceiveFileName(QString name);
    void updateConnectStatus(QString ip, quint16 port);
};

#endif    // FRMSERVER_H
