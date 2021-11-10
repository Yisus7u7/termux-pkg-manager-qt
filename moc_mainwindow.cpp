/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_SearchButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "on_InfoButton_clicked"
QT_MOC_LITERAL(4, 58, 26), // "on_UninstallButton_clicked"
QT_MOC_LITERAL(5, 85, 24), // "on_InstallButton_clicked"
QT_MOC_LITERAL(6, 110, 31), // "on_actionclear_output_triggered"
QT_MOC_LITERAL(7, 142, 34), // "on_actionUpdate_packages_trig..."
QT_MOC_LITERAL(8, 177, 31), // "on_actionupgrade_pkgs_triggered"
QT_MOC_LITERAL(9, 209, 28), // "on_actionpkgs_list_triggered"
QT_MOC_LITERAL(10, 238, 38), // "on_actionPkgs_list_installed_..."
QT_MOC_LITERAL(11, 277, 35), // "on_actionClean_pkgs_cache_tri..."
QT_MOC_LITERAL(12, 313, 40), // "on_actionAutoremove_pkgs_cach..."
QT_MOC_LITERAL(13, 354, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(14, 378, 27), // "on_actionAbout_Qt_triggered"
QT_MOC_LITERAL(15, 406, 28) // "on_actionAbout_app_triggered"

    },
    "MainWindow\0on_SearchButton_clicked\0\0"
    "on_InfoButton_clicked\0on_UninstallButton_clicked\0"
    "on_InstallButton_clicked\0"
    "on_actionclear_output_triggered\0"
    "on_actionUpdate_packages_triggered\0"
    "on_actionupgrade_pkgs_triggered\0"
    "on_actionpkgs_list_triggered\0"
    "on_actionPkgs_list_installed_triggered\0"
    "on_actionClean_pkgs_cache_triggered\0"
    "on_actionAutoremove_pkgs_cache_triggered\0"
    "on_actionQuit_triggered\0"
    "on_actionAbout_Qt_triggered\0"
    "on_actionAbout_app_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_SearchButton_clicked(); break;
        case 1: _t->on_InfoButton_clicked(); break;
        case 2: _t->on_UninstallButton_clicked(); break;
        case 3: _t->on_InstallButton_clicked(); break;
        case 4: _t->on_actionclear_output_triggered(); break;
        case 5: _t->on_actionUpdate_packages_triggered(); break;
        case 6: _t->on_actionupgrade_pkgs_triggered(); break;
        case 7: _t->on_actionpkgs_list_triggered(); break;
        case 8: _t->on_actionPkgs_list_installed_triggered(); break;
        case 9: _t->on_actionClean_pkgs_cache_triggered(); break;
        case 10: _t->on_actionAutoremove_pkgs_cache_triggered(); break;
        case 11: _t->on_actionQuit_triggered(); break;
        case 12: _t->on_actionAbout_Qt_triggered(); break;
        case 13: _t->on_actionAbout_app_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
