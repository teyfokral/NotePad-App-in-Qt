/****************************************************************************
** Meta object code from reading C++ file 'logined.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NotePadApplication/logined.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logined.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Logined_t {
    QByteArrayData data[15];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Logined_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Logined_t qt_meta_stringdata_Logined = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Logined"
QT_MOC_LITERAL(1, 8, 19), // "on_saveBttn_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 23), // "on_savePassword_clicked"
QT_MOC_LITERAL(4, 53, 22), // "on_pushAddBttn_clicked"
QT_MOC_LITERAL(5, 76, 23), // "on_pushShowBttn_clicked"
QT_MOC_LITERAL(6, 100, 25), // "on_pushDeleteBttn_clicked"
QT_MOC_LITERAL(7, 126, 23), // "on_pushOpenBttn_clicked"
QT_MOC_LITERAL(8, 150, 25), // "on_pushSearchBttn_clicked"
QT_MOC_LITERAL(9, 176, 31), // "on_pushOpenSearchedBttn_clicked"
QT_MOC_LITERAL(10, 208, 33), // "on_comboBoxSearchDelete_activ..."
QT_MOC_LITERAL(11, 242, 4), // "arg1"
QT_MOC_LITERAL(12, 247, 24), // "deleteSearchedNotesTable"
QT_MOC_LITERAL(13, 272, 33), // "on_pushDeleteSearchedBttn_cli..."
QT_MOC_LITERAL(14, 306, 28) // "on_pushShowDatesBttn_clicked"

    },
    "Logined\0on_saveBttn_clicked\0\0"
    "on_savePassword_clicked\0on_pushAddBttn_clicked\0"
    "on_pushShowBttn_clicked\0"
    "on_pushDeleteBttn_clicked\0"
    "on_pushOpenBttn_clicked\0"
    "on_pushSearchBttn_clicked\0"
    "on_pushOpenSearchedBttn_clicked\0"
    "on_comboBoxSearchDelete_activated\0"
    "arg1\0deleteSearchedNotesTable\0"
    "on_pushDeleteSearchedBttn_clicked\0"
    "on_pushShowDatesBttn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Logined[] = {

 // content:
       7,       // revision
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
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Logined::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Logined *_t = static_cast<Logined *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_saveBttn_clicked(); break;
        case 1: _t->on_savePassword_clicked(); break;
        case 2: _t->on_pushAddBttn_clicked(); break;
        case 3: _t->on_pushShowBttn_clicked(); break;
        case 4: _t->on_pushDeleteBttn_clicked(); break;
        case 5: _t->on_pushOpenBttn_clicked(); break;
        case 6: _t->on_pushSearchBttn_clicked(); break;
        case 7: _t->on_pushOpenSearchedBttn_clicked(); break;
        case 8: _t->on_comboBoxSearchDelete_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->deleteSearchedNotesTable(); break;
        case 10: _t->on_pushDeleteSearchedBttn_clicked(); break;
        case 11: _t->on_pushShowDatesBttn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Logined::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Logined.data,
      qt_meta_data_Logined,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Logined::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Logined::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Logined.stringdata0))
        return static_cast<void*>(const_cast< Logined*>(this));
    return QDialog::qt_metacast(_clname);
}

int Logined::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
