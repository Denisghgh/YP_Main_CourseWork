/****************************************************************************
** Meta object code from reading C++ file 'games.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../games.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'games.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_games_t {
    QByteArrayData data[15];
    char stringdata[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_games_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_games_t qt_meta_stringdata_games = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 15),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 15),
QT_MOC_LITERAL(4, 39, 5),
QT_MOC_LITERAL(5, 45, 5),
QT_MOC_LITERAL(6, 51, 4),
QT_MOC_LITERAL(7, 56, 5),
QT_MOC_LITERAL(8, 62, 18),
QT_MOC_LITERAL(9, 81, 11),
QT_MOC_LITERAL(10, 93, 21),
QT_MOC_LITERAL(11, 115, 23),
QT_MOC_LITERAL(12, 139, 23),
QT_MOC_LITERAL(13, 163, 23),
QT_MOC_LITERAL(14, 187, 23)
    },
    "games\0LeadersFormOpen\0\0CheckGameResult\0"
    "login\0Games\0game\0score\0SavePlayerNickname\0"
    "loginPlayer\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_games[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    3,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x0a,
      10,    0,   65,    2, 0x08,
      11,    0,   66,    2, 0x08,
      12,    0,   67,    2, 0x08,
      13,    0,   68,    2, 0x08,
      14,    0,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void games::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        games *_t = static_cast<games *>(_o);
        switch (_id) {
        case 0: _t->LeadersFormOpen(); break;
        case 1: _t->CheckGameResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Games(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->SavePlayerNickname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (games::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&games::LeadersFormOpen)) {
                *result = 0;
            }
        }
        {
            typedef void (games::*_t)(QString , Games , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&games::CheckGameResult)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject games::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_games.data,
      qt_meta_data_games,  qt_static_metacall, 0, 0}
};


const QMetaObject *games::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *games::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_games.stringdata))
        return static_cast<void*>(const_cast< games*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int games::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void games::LeadersFormOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void games::CheckGameResult(QString _t1, Games _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
