/****************************************************************************
** Meta object code from reading C++ file 'receivefilethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../api/receivefilethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receivefilethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransmitFileThread_t {
    QByteArrayData data[14];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransmitFileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransmitFileThread_t qt_meta_stringdata_TransmitFileThread = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransmitFileThread"
QT_MOC_LITERAL(1, 19, 15), // "receiveFileName"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "name"
QT_MOC_LITERAL(4, 41, 15), // "receiveFileSize"
QT_MOC_LITERAL(5, 57, 4), // "size"
QT_MOC_LITERAL(6, 62, 7), // "message"
QT_MOC_LITERAL(7, 70, 3), // "msg"
QT_MOC_LITERAL(8, 74, 11), // "receiveData"
QT_MOC_LITERAL(9, 86, 15), // "receiveFinished"
QT_MOC_LITERAL(10, 102, 11), // "ReceiveData"
QT_MOC_LITERAL(11, 114, 10), // "DisConnect"
QT_MOC_LITERAL(12, 125, 18), // "displaySocketError"
QT_MOC_LITERAL(13, 144, 28) // "QAbstractSocket::SocketError"

    },
    "TransmitFileThread\0receiveFileName\0\0"
    "name\0receiveFileSize\0size\0message\0msg\0"
    "receiveData\0receiveFinished\0ReceiveData\0"
    "DisConnect\0displaySocketError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransmitFileThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void TransmitFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransmitFileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveFileSize((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->receiveData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->receiveFinished(); break;
        case 5: _t->ReceiveData(); break;
        case 6: _t->DisConnect(); break;
        case 7: _t->displaySocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransmitFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFileName)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFileSize)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::message)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransmitFileThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_TransmitFileThread.data,
    qt_meta_data_TransmitFileThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransmitFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransmitFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransmitFileThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int TransmitFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TransmitFileThread::receiveFileName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransmitFileThread::receiveFileSize(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransmitFileThread::message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TransmitFileThread::receiveData(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TransmitFileThread::receiveFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
