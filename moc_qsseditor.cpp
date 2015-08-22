/****************************************************************************
** Meta object code from reading C++ file 'qsseditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qsseditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsseditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QssEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      28,   10,   10,   10, 0x08,
      43,   10,   10,   10, 0x08,
      54,   10,   10,   10, 0x08,
      65,   10,   10,   10, 0x08,
      78,   10,   10,   10, 0x08,
      90,   10,   10,   10, 0x08,
     104,   10,   10,   10, 0x08,
     119,   10,   10,   10, 0x08,
     130,   10,   10,   10, 0x08,
     148,   10,   10,   10, 0x08,
     174,   10,   10,   10, 0x08,
     185,   10,   10,   10, 0x08,
     200,   10,   10,   10, 0x08,
     212,   10,   10,   10, 0x08,
     226,   10,   10,   10, 0x08,
     251,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QssEditor[] = {
    "QssEditor\0\0slotCssChanged()\0slotApplyCss()\0"
    "slotOpen()\0slotSave()\0slotSaveAs()\0"
    "slotClose()\0slotOptions()\0slotProgress()\0"
    "slotQuit()\0slotDelayedOpen()\0"
    "slotOpenFromHistoryMenu()\0slotFind()\0"
    "slotFindNext()\0slotAbout()\0slotAboutQt()\0"
    "on_disablebBtn_clicked()\0"
    "on_enableBtn_clicked()\0"
};

void QssEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QssEditor *_t = static_cast<QssEditor *>(_o);
        switch (_id) {
        case 0: _t->slotCssChanged(); break;
        case 1: _t->slotApplyCss(); break;
        case 2: _t->slotOpen(); break;
        case 3: _t->slotSave(); break;
        case 4: _t->slotSaveAs(); break;
        case 5: _t->slotClose(); break;
        case 6: _t->slotOptions(); break;
        case 7: _t->slotProgress(); break;
        case 8: _t->slotQuit(); break;
        case 9: _t->slotDelayedOpen(); break;
        case 10: _t->slotOpenFromHistoryMenu(); break;
        case 11: _t->slotFind(); break;
        case 12: _t->slotFindNext(); break;
        case 13: _t->slotAbout(); break;
        case 14: _t->slotAboutQt(); break;
        case 15: _t->on_disablebBtn_clicked(); break;
        case 16: _t->on_enableBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QssEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QssEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QssEditor,
      qt_meta_data_QssEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QssEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QssEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QssEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QssEditor))
        return static_cast<void*>(const_cast< QssEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QssEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
