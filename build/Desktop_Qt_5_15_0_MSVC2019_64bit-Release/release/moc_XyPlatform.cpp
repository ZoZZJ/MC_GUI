/****************************************************************************
** Meta object code from reading C++ file 'XyPlatform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../XyPlatform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XyPlatform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XyPlatform_t {
    QByteArrayData data[21];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XyPlatform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XyPlatform_t qt_meta_stringdata_XyPlatform = {
    {
QT_MOC_LITERAL(0, 0, 10), // "XyPlatform"
QT_MOC_LITERAL(1, 11, 27), // "ChangePlatformEnabledStatus"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "handleMoveX"
QT_MOC_LITERAL(4, 52, 12), // "movePositive"
QT_MOC_LITERAL(5, 65, 11), // "handleMoveY"
QT_MOC_LITERAL(6, 77, 10), // "handleStop"
QT_MOC_LITERAL(7, 88, 6), // "axisId"
QT_MOC_LITERAL(8, 95, 21), // "onAxisPositionUpdated"
QT_MOC_LITERAL(9, 117, 8), // "position"
QT_MOC_LITERAL(10, 126, 21), // "onAxisVelocityUpdated"
QT_MOC_LITERAL(11, 148, 8), // "velocity"
QT_MOC_LITERAL(12, 157, 25), // "onAxisAccelerationUpdated"
QT_MOC_LITERAL(13, 183, 12), // "acceleration"
QT_MOC_LITERAL(14, 196, 12), // "updateStatus"
QT_MOC_LITERAL(15, 209, 23), // "on_EnableButton_clicked"
QT_MOC_LITERAL(16, 233, 23), // "on_CommutButton_clicked"
QT_MOC_LITERAL(17, 257, 20), // "onRadioButtonClicked"
QT_MOC_LITERAL(18, 278, 16), // "QAbstractButton*"
QT_MOC_LITERAL(19, 295, 6), // "button"
QT_MOC_LITERAL(20, 302, 29) // "on_VelocityPushButton_clicked"

    },
    "XyPlatform\0ChangePlatformEnabledStatus\0"
    "\0handleMoveX\0movePositive\0handleMoveY\0"
    "handleStop\0axisId\0onAxisPositionUpdated\0"
    "position\0onAxisVelocityUpdated\0velocity\0"
    "onAxisAccelerationUpdated\0acceleration\0"
    "updateStatus\0on_EnableButton_clicked\0"
    "on_CommutButton_clicked\0onRadioButtonClicked\0"
    "QAbstractButton*\0button\0"
    "on_VelocityPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XyPlatform[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       5,    1,   78,    2, 0x08 /* Private */,
       6,    1,   81,    2, 0x08 /* Private */,
       8,    2,   84,    2, 0x08 /* Private */,
      10,    2,   89,    2, 0x08 /* Private */,
      12,    2,   94,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,

       0        // eod
};

void XyPlatform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XyPlatform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangePlatformEnabledStatus(); break;
        case 1: _t->handleMoveX((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->handleMoveY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handleStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onAxisPositionUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->onAxisVelocityUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->onAxisAccelerationUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->updateStatus(); break;
        case 8: _t->on_EnableButton_clicked(); break;
        case 9: _t->on_CommutButton_clicked(); break;
        case 10: _t->onRadioButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: _t->on_VelocityPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XyPlatform::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_XyPlatform.data,
    qt_meta_data_XyPlatform,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XyPlatform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XyPlatform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XyPlatform.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XyPlatform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
