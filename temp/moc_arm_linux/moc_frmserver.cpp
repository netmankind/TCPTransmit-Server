/****************************************************************************
** Meta object code from reading C++ file 'frmserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmServer_t {
    QByteArrayData data[17];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmServer_t qt_meta_stringdata_frmServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "frmServer"
QT_MOC_LITERAL(1, 10, 8), // "InitForm"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "clientConnected"
QT_MOC_LITERAL(4, 36, 2), // "ip"
QT_MOC_LITERAL(5, 39, 4), // "port"
QT_MOC_LITERAL(6, 44, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(7, 63, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(8, 84, 22), // "updateTransmitProgress"
QT_MOC_LITERAL(9, 107, 4), // "size"
QT_MOC_LITERAL(10, 112, 20), // "updateTransmitStatus"
QT_MOC_LITERAL(11, 133, 3), // "msg"
QT_MOC_LITERAL(12, 137, 19), // "setTransmitProgress"
QT_MOC_LITERAL(13, 157, 15), // "transmitFinshed"
QT_MOC_LITERAL(14, 173, 21), // "updateReceiveFileName"
QT_MOC_LITERAL(15, 195, 4), // "name"
QT_MOC_LITERAL(16, 200, 19) // "updateConnectStatus"

    },
    "frmServer\0InitForm\0\0clientConnected\0"
    "ip\0port\0on_btnSend_clicked\0"
    "on_btnSelect_clicked\0updateTransmitProgress\0"
    "size\0updateTransmitStatus\0msg\0"
    "setTransmitProgress\0transmitFinshed\0"
    "updateReceiveFileName\0name\0"
    "updateConnectStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    2,   65,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      16,    2,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,

       0        // eod
};

void frmServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitForm(); break;
        case 1: _t->clientConnected((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 2: _t->on_btnSend_clicked(); break;
        case 3: _t->on_btnSelect_clicked(); break;
        case 4: _t->updateTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->updateTransmitStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->transmitFinshed(); break;
        case 8: _t->updateReceiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->updateConnectStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmServer::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_frmServer.data,
    qt_meta_data_frmServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmServer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
