/********************************************************************************
** Form generated from reading UI file 'frmserver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSERVER_H
#define UI_FRMSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmServer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Title;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSelect;
    QPushButton *btnSend;
    QLabel *labSendStatus;
    QLabel *txtTransmitStatus;
    QLabel *labSendFile;
    QLabel *labReceiveFile;
    QProgressBar *pbTransmitProgress;
    QLabel *labelTransmitProgress;
    QLabel *txtSendFile;
    QLabel *txtReceiveFile;
    QLabel *txtTransmitStatus_1;
    QPushButton *btnExit;

    void setupUi(QDialog *frmServer)
    {
        if (frmServer->objectName().isEmpty())
            frmServer->setObjectName(QString::fromUtf8("frmServer"));
        frmServer->resize(640, 480);
        frmServer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(frmServer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widget_title = new QWidget(frmServer);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(0, 30));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy1);
        lab_Title->setStyleSheet(QString::fromUtf8(""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmServer);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(widget_main);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSelect = new QPushButton(frame_2);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSelect->sizePolicy().hasHeightForWidth());
        btnSelect->setSizePolicy(sizePolicy2);
        btnSelect->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(btnSelect);

        btnSend = new QPushButton(frame_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        sizePolicy2.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy2);
        btnSend->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(btnSend);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);

        labSendStatus = new QLabel(frame_2);
        labSendStatus->setObjectName(QString::fromUtf8("labSendStatus"));

        formLayout->setWidget(15, QFormLayout::LabelRole, labSendStatus);

        txtTransmitStatus = new QLabel(frame_2);
        txtTransmitStatus->setObjectName(QString::fromUtf8("txtTransmitStatus"));
        sizePolicy1.setHeightForWidth(txtTransmitStatus->sizePolicy().hasHeightForWidth());
        txtTransmitStatus->setSizePolicy(sizePolicy1);

        formLayout->setWidget(15, QFormLayout::FieldRole, txtTransmitStatus);

        labSendFile = new QLabel(frame_2);
        labSendFile->setObjectName(QString::fromUtf8("labSendFile"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labSendFile);

        labReceiveFile = new QLabel(frame_2);
        labReceiveFile->setObjectName(QString::fromUtf8("labReceiveFile"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labReceiveFile);

        pbTransmitProgress = new QProgressBar(frame_2);
        pbTransmitProgress->setObjectName(QString::fromUtf8("pbTransmitProgress"));
        pbTransmitProgress->setMaximumSize(QSize(16777215, 18));
        pbTransmitProgress->setValue(0);

        formLayout->setWidget(11, QFormLayout::FieldRole, pbTransmitProgress);

        labelTransmitProgress = new QLabel(frame_2);
        labelTransmitProgress->setObjectName(QString::fromUtf8("labelTransmitProgress"));

        formLayout->setWidget(11, QFormLayout::LabelRole, labelTransmitProgress);

        txtSendFile = new QLabel(frame_2);
        txtSendFile->setObjectName(QString::fromUtf8("txtSendFile"));
        sizePolicy1.setHeightForWidth(txtSendFile->sizePolicy().hasHeightForWidth());
        txtSendFile->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtSendFile);

        txtReceiveFile = new QLabel(frame_2);
        txtReceiveFile->setObjectName(QString::fromUtf8("txtReceiveFile"));
        sizePolicy1.setHeightForWidth(txtReceiveFile->sizePolicy().hasHeightForWidth());
        txtReceiveFile->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, txtReceiveFile);

        txtTransmitStatus_1 = new QLabel(frame_2);
        txtTransmitStatus_1->setObjectName(QString::fromUtf8("txtTransmitStatus_1"));
        sizePolicy1.setHeightForWidth(txtTransmitStatus_1->sizePolicy().hasHeightForWidth());
        txtTransmitStatus_1->setSizePolicy(sizePolicy1);

        formLayout->setWidget(16, QFormLayout::FieldRole, txtTransmitStatus_1);


        verticalLayout_2->addWidget(frame_2);

        btnExit = new QPushButton(widget_main);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        verticalLayout_2->addWidget(btnExit);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(widget_main);


        retranslateUi(frmServer);

        QMetaObject::connectSlotsByName(frmServer);
    } // setupUi

    void retranslateUi(QDialog *frmServer)
    {
        lab_Title->setText(QApplication::translate("frmServer", "TCP\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
        btnSelect->setText(QApplication::translate("frmServer", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnSend->setText(QApplication::translate("frmServer", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        labSendStatus->setText(QApplication::translate("frmServer", "\344\274\240\350\276\223\347\212\266\346\200\201:", nullptr));
        txtTransmitStatus->setText(QApplication::translate("frmServer", "txtTransmitStatus", nullptr));
        labSendFile->setText(QApplication::translate("frmServer", "\345\217\221\351\200\201\346\226\207\344\273\266:", nullptr));
        labReceiveFile->setText(QApplication::translate("frmServer", "\346\216\245\346\224\266\346\226\207\344\273\266:", nullptr));
        labelTransmitProgress->setText(QApplication::translate("frmServer", "\344\274\240\350\276\223\350\277\233\345\272\246:", nullptr));
        txtSendFile->setText(QApplication::translate("frmServer", "txtSendFile", nullptr));
        txtReceiveFile->setText(QApplication::translate("frmServer", "txtReceiveFile", nullptr));
        txtTransmitStatus_1->setText(QApplication::translate("frmServer", "txtTransmitStatus_1", nullptr));
        btnExit->setText(QApplication::translate("frmServer", "\351\200\200\345\207\272", nullptr));
        Q_UNUSED(frmServer);
    } // retranslateUi

};

namespace Ui {
    class frmServer: public Ui_frmServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSERVER_H
