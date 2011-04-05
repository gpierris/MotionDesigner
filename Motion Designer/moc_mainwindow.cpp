/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Apr 3 08:55:59 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      46,   11,   42,   11, 0x08,
      58,   11,   11,   11, 0x08,
      70,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     129,   11,   11,   11, 0x08,
     147,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     194,   11,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     225,   11,   11,   11, 0x08,
     240,   11,   11,   11, 0x08,
     257,   11,   11,   11, 0x08,
     270,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     322,   11,   11,   11, 0x08,
     335,   11,   11,   11, 0x08,
     348,   11,   11,   11, 0x08,
     365,   11,   11,   11, 0x08,
     382,   11,   11,   11, 0x08,
     401,   11,   11,   11, 0x08,
     417,   11,   11,   11, 0x08,
     434,   11,   11,   11, 0x08,
     450,   11,   11,   11, 0x08,
     461,   11,   11,   11, 0x08,
     492,   11,  484,   11, 0x08,
     512,   11,  484,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_stiffOn_clicked()\0"
    "myShow()\0int\0maybeSave()\0showAbout()\0"
    "showDocumentation()\0exportToKME()\0"
    "viewGraph()\0viewJoints()\0setNaoAcademics()\0"
    "setNaoRC()\0newFile()\0openFile()\0"
    "loadNewRobot()\0somethingChanged()\0"
    "saveState()\0moveUpAction()\0moveDownAction()\0"
    "swapAction()\0removeAction()\0"
    "storePoseAction()\0insertPoseAction()\0"
    "undoAction()\0redoAction()\0gotoPoseAction()\0"
    "stepPoseAction()\0playMotionAction()\0"
    "stiffOnAction()\0stiffOffAction()\0"
    "connectAction()\0sendPose()\0"
    "decodeCommand(QString)\0QString\0"
    "compileMessage(int)\0compileMessage()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_stiffOn_clicked(); break;
        case 1: myShow(); break;
        case 2: { int _r = maybeSave();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: showAbout(); break;
        case 4: showDocumentation(); break;
        case 5: exportToKME(); break;
        case 6: viewGraph(); break;
        case 7: viewJoints(); break;
        case 8: setNaoAcademics(); break;
        case 9: setNaoRC(); break;
        case 10: newFile(); break;
        case 11: openFile(); break;
        case 12: loadNewRobot(); break;
        case 13: somethingChanged(); break;
        case 14: saveState(); break;
        case 15: moveUpAction(); break;
        case 16: moveDownAction(); break;
        case 17: swapAction(); break;
        case 18: removeAction(); break;
        case 19: storePoseAction(); break;
        case 20: insertPoseAction(); break;
        case 21: undoAction(); break;
        case 22: redoAction(); break;
        case 23: gotoPoseAction(); break;
        case 24: stepPoseAction(); break;
        case 25: playMotionAction(); break;
        case 26: stiffOnAction(); break;
        case 27: stiffOffAction(); break;
        case 28: connectAction(); break;
        case 29: sendPose(); break;
        case 30: decodeCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: { QString _r = compileMessage((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QString _r = compileMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
