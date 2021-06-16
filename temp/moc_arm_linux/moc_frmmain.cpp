/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmMain_t {
    QByteArrayData data[24];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmMain_t qt_meta_stringdata_frmMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "frmMain"
QT_MOC_LITERAL(1, 8, 9), // "InitStyle"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "ChangeStyle"
QT_MOC_LITERAL(4, 31, 8), // "InitForm"
QT_MOC_LITERAL(5, 40, 10), // "InitConfig"
QT_MOC_LITERAL(6, 51, 10), // "SaveConfig"
QT_MOC_LITERAL(7, 62, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(8, 85, 16), // "acceptConnection"
QT_MOC_LITERAL(9, 102, 2), // "ip"
QT_MOC_LITERAL(10, 105, 4), // "port"
QT_MOC_LITERAL(11, 110, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(12, 129, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(13, 150, 22), // "updateTransmitProgress"
QT_MOC_LITERAL(14, 173, 4), // "size"
QT_MOC_LITERAL(15, 178, 20), // "updateTransmitStatus"
QT_MOC_LITERAL(16, 199, 3), // "msg"
QT_MOC_LITERAL(17, 203, 19), // "setTransmitProgress"
QT_MOC_LITERAL(18, 223, 15), // "transmitFinshed"
QT_MOC_LITERAL(19, 239, 21), // "updateReceiveFileName"
QT_MOC_LITERAL(20, 261, 4), // "name"
QT_MOC_LITERAL(21, 266, 19), // "updateConnectStatus"
QT_MOC_LITERAL(22, 286, 8), // "SendData"
QT_MOC_LITERAL(23, 295, 8) // "fileName"

    },
    "frmMain\0InitStyle\0\0ChangeStyle\0InitForm\0"
    "InitConfig\0SaveConfig\0on_btnMenu_Max_clicked\0"
    "acceptConnection\0ip\0port\0on_btnSend_clicked\0"
    "on_btnSelect_clicked\0updateTransmitProgress\0"
    "size\0updateTransmitStatus\0msg\0"
    "setTransmitProgress\0transmitFinshed\0"
    "updateReceiveFileName\0name\0"
    "updateConnectStatus\0SendData\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    2,  100,    2, 0x08 /* Private */,
      11,    0,  105,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      17,    1,  113,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    1,  117,    2, 0x08 /* Private */,
      21,    2,  120,    2, 0x08 /* Private */,
      22,    1,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    9,   10,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitStyle(); break;
        case 1: _t->ChangeStyle(); break;
        case 2: _t->InitForm(); break;
        case 3: _t->InitConfig(); break;
        case 4: _t->SaveConfig(); break;
        case 5: _t->on_btnMenu_Max_clicked(); break;
        case 6: _t->acceptConnection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 7: _t->on_btnSend_clicked(); break;
        case 8: _t->on_btnSelect_clicked(); break;
        case 9: _t->updateTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->updateTransmitStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->transmitFinshed(); break;
        case 13: _t->updateReceiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->updateConnectStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 15: _t->SendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmMain::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_frmMain.data,
    qt_meta_data_frmMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
