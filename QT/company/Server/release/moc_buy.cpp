/****************************************************************************
** Meta object code from reading C++ file 'buy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../buy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Buy_t {
    QByteArrayData data[7];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Buy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Buy_t qt_meta_stringdata_Buy = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 22),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 25),
QT_MOC_LITERAL(4, 54, 4),
QT_MOC_LITERAL(5, 59, 19),
QT_MOC_LITERAL(6, 79, 18)
    },
    "Buy\0on_return_main_clicked\0\0"
    "on_goods_num_valueChanged\0arg1\0"
    "on_import_2_clicked\0on_history_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Buy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Buy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buy *_t = static_cast<Buy *>(_o);
        switch (_id) {
        case 0: _t->on_return_main_clicked(); break;
        case 1: _t->on_goods_num_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_import_2_clicked(); break;
        case 3: _t->on_history_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Buy::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Buy.data,
      qt_meta_data_Buy,  qt_static_metacall, 0, 0}
};


const QMetaObject *Buy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Buy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Buy.stringdata))
        return static_cast<void*>(const_cast< Buy*>(this));
    return QWidget::qt_metacast(_clname);
}

int Buy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
