/****************************************************************************
** Meta object code from reading C++ file 'winusbdriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../winusbdriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winusbdriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_winUsbDriver_t {
    QByteArrayData data[28];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_winUsbDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_winUsbDriver_t qt_meta_stringdata_winUsbDriver = {
    {
QT_MOC_LITERAL(0, 0, 12), // "winUsbDriver"
QT_MOC_LITERAL(1, 13, 15), // "sendClearBuffer"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "ch3751"
QT_MOC_LITERAL(4, 37, 6), // "ch3752"
QT_MOC_LITERAL(5, 44, 5), // "ch750"
QT_MOC_LITERAL(6, 50, 14), // "setVisible_CH2"
QT_MOC_LITERAL(7, 65, 7), // "visible"
QT_MOC_LITERAL(8, 73, 11), // "gainBuffers"
QT_MOC_LITERAL(9, 85, 10), // "multiplier"
QT_MOC_LITERAL(10, 96, 13), // "disableWindow"
QT_MOC_LITERAL(11, 110, 7), // "enabled"
QT_MOC_LITERAL(12, 118, 13), // "enableMMTimer"
QT_MOC_LITERAL(13, 132, 7), // "checkXY"
QT_MOC_LITERAL(14, 140, 6), // "setPsu"
QT_MOC_LITERAL(15, 147, 7), // "voltage"
QT_MOC_LITERAL(16, 155, 14), // "setFunctionGen"
QT_MOC_LITERAL(17, 170, 7), // "channel"
QT_MOC_LITERAL(18, 178, 19), // "functionGenControl*"
QT_MOC_LITERAL(19, 198, 11), // "fGenControl"
QT_MOC_LITERAL(20, 210, 13), // "setDeviceMode"
QT_MOC_LITERAL(21, 224, 4), // "mode"
QT_MOC_LITERAL(22, 229, 6), // "newDig"
QT_MOC_LITERAL(23, 236, 8), // "digState"
QT_MOC_LITERAL(24, 245, 7), // "psuTick"
QT_MOC_LITERAL(25, 253, 7), // "setGain"
QT_MOC_LITERAL(26, 261, 7), // "newGain"
QT_MOC_LITERAL(27, 269, 8) // "avrDebug"

    },
    "winUsbDriver\0sendClearBuffer\0\0ch3751\0"
    "ch3752\0ch750\0setVisible_CH2\0visible\0"
    "gainBuffers\0multiplier\0disableWindow\0"
    "enabled\0enableMMTimer\0checkXY\0setPsu\0"
    "voltage\0setFunctionGen\0channel\0"
    "functionGenControl*\0fGenControl\0"
    "setDeviceMode\0mode\0newDig\0digState\0"
    "psuTick\0setGain\0newGain\0avrDebug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_winUsbDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,
      10,    1,   92,    2, 0x06 /* Public */,
      12,    0,   95,    2, 0x06 /* Public */,
      13,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   99,    2, 0x0a /* Public */,
      16,    2,  102,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,
      22,    1,  110,    2, 0x0a /* Public */,
      24,    0,  113,    2, 0x0a /* Public */,
      25,    1,  114,    2, 0x0a /* Public */,
      27,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void,

       0        // eod
};

void winUsbDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        winUsbDriver *_t = static_cast<winUsbDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendClearBuffer((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->setVisible_CH2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->gainBuffers((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->disableWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableMMTimer(); break;
        case 5: _t->checkXY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setPsu((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setFunctionGen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< functionGenControl*(*)>(_a[2]))); break;
        case 8: _t->setDeviceMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->newDig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->psuTick(); break;
        case 11: _t->setGain((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->avrDebug(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< functionGenControl* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (winUsbDriver::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::sendClearBuffer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (winUsbDriver::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::setVisible_CH2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (winUsbDriver::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::gainBuffers)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (winUsbDriver::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::disableWindow)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (winUsbDriver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::enableMMTimer)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (winUsbDriver::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&winUsbDriver::checkXY)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject winUsbDriver::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_winUsbDriver.data,
      qt_meta_data_winUsbDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *winUsbDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *winUsbDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_winUsbDriver.stringdata0))
        return static_cast<void*>(const_cast< winUsbDriver*>(this));
    return QLabel::qt_metacast(_clname);
}

int winUsbDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void winUsbDriver::sendClearBuffer(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void winUsbDriver::setVisible_CH2(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void winUsbDriver::gainBuffers(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void winUsbDriver::disableWindow(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void winUsbDriver::enableMMTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void winUsbDriver::checkXY(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
