/****************************************************************************
** Meta object code from reading C++ file 'deformwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deformwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deformwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeformWin_t {
    QByteArrayData data[12];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeformWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeformWin_t qt_meta_stringdata_DeformWin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DeformWin"
QT_MOC_LITERAL(1, 10, 13), // "updateEditImg"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 25), // "on_actExportPic_triggered"
QT_MOC_LITERAL(4, 51, 26), // "on_actSaveProjAs_triggered"
QT_MOC_LITERAL(5, 78, 24), // "on_actSaveProj_triggered"
QT_MOC_LITERAL(6, 103, 24), // "on_actOpenProj_triggered"
QT_MOC_LITERAL(7, 128, 23), // "on_actNewProj_triggered"
QT_MOC_LITERAL(8, 152, 26), // "on_actClearAllPt_triggered"
QT_MOC_LITERAL(9, 179, 28), // "on_actCpSrcPtToDst_triggered"
QT_MOC_LITERAL(10, 208, 20), // "on_actExit_triggered"
QT_MOC_LITERAL(11, 229, 21) // "on_pushButton_clicked"

    },
    "DeformWin\0updateEditImg\0\0"
    "on_actExportPic_triggered\0"
    "on_actSaveProjAs_triggered\0"
    "on_actSaveProj_triggered\0"
    "on_actOpenProj_triggered\0"
    "on_actNewProj_triggered\0"
    "on_actClearAllPt_triggered\0"
    "on_actCpSrcPtToDst_triggered\0"
    "on_actExit_triggered\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeformWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeformWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeformWin *_t = static_cast<DeformWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEditImg(); break;
        case 1: _t->on_actExportPic_triggered(); break;
        case 2: _t->on_actSaveProjAs_triggered(); break;
        case 3: _t->on_actSaveProj_triggered(); break;
        case 4: _t->on_actOpenProj_triggered(); break;
        case 5: _t->on_actNewProj_triggered(); break;
        case 6: _t->on_actClearAllPt_triggered(); break;
        case 7: _t->on_actCpSrcPtToDst_triggered(); break;
        case 8: _t->on_actExit_triggered(); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DeformWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DeformWin.data,
      qt_meta_data_DeformWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeformWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeformWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeformWin.stringdata0))
        return static_cast<void*>(const_cast< DeformWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DeformWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
