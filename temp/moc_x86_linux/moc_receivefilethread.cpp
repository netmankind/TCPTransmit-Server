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
struct qt_meta_stringdata_ReceiveFileThread_t {
    QByteArrayData data[18];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiveFileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiveFileThread_t qt_meta_stringdata_ReceiveFileThread = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ReceiveFileThread"
QT_MOC_LITERAL(1, 18, 15), // "receiveFileName"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "name"
QT_MOC_LITERAL(4, 40, 15), // "receiveFileSize"
QT_MOC_LITERAL(5, 56, 4), // "size"
QT_MOC_LITERAL(6, 61, 7), // "message"
QT_MOC_LITERAL(7, 69, 3), // "msg"
QT_MOC_LITERAL(8, 73, 11), // "receiveData"
QT_MOC_LITERAL(9, 85, 21), // "receiveFileNameSignal"
QT_MOC_LITERAL(10, 107, 21), // "receiveFileSizeSignal"
QT_MOC_LITERAL(11, 129, 21), // "receiveFinishedSignal"
QT_MOC_LITERAL(12, 151, 20), // "receiveMessageSignal"
QT_MOC_LITERAL(13, 172, 17), // "receiveDataSignal"
QT_MOC_LITERAL(14, 190, 11), // "ReceiveData"
QT_MOC_LITERAL(15, 202, 10), // "DisConnect"
QT_MOC_LITERAL(16, 213, 18), // "displaySocketError"
QT_MOC_LITERAL(17, 232, 28) // "QAbstractSocket::SocketError"

    },
    "ReceiveFileThread\0receiveFileName\0\0"
    "name\0receiveFileSize\0size\0message\0msg\0"
    "receiveData\0receiveFileNameSignal\0"
    "receiveFileSizeSignal\0receiveFinishedSignal\0"
    "receiveMessageSignal\0receiveDataSignal\0"
    "ReceiveData\0DisConnect\0displaySocketError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveFileThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,
      10,    1,   89,    2, 0x06 /* Public */,
      11,    0,   92,    2, 0x06 /* Public */,
      12,    1,   93,    2, 0x06 /* Public */,
      13,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,

       0        // eod
};

void ReceiveFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiveFileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveFileSize((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->receiveData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->receiveFileNameSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->receiveFinishedSignal(); break;
        case 7: _t->receiveMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveDataSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->ReceiveData(); break;
        case 10: _t->DisConnect(); break;
        case 11: _t->displaySocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
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
            using _t = void (ReceiveFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveFileName)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveFileSize)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::message)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveFileNameSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveFileSizeSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveFinishedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveMessageSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ReceiveFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveFileThread::receiveDataSignal)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReceiveFileThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ReceiveFileThread.data,
    qt_meta_data_ReceiveFileThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiveFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveFileThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ReceiveFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ReceiveFileThread::receiveFileName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiveFileThread::receiveFileSize(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReceiveFileThread::message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReceiveFileThread::receiveData(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ReceiveFileThread::receiveFileNameSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ReceiveFileThread::receiveFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ReceiveFileThread::receiveFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ReceiveFileThread::receiveMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ReceiveFileThread::receiveDataSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
