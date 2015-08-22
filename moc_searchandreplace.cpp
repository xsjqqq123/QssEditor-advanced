/****************************************************************************
** Meta object code from reading C++ file 'searchandreplace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchandreplace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchandreplace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchAndReplace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   18,   17, 0x08,
      30,   17,   18,   17, 0x08,
      47,   17,   17,   17, 0x08,
      64,   17,   17,   17, 0x08,
      79,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchAndReplace[] = {
    "SearchAndReplace\0\0bool\0find()\0"
    "replaceAndNext()\0slotReplaceAll()\0"
    "slotAccepted()\0slotSearchChanged()\0"
};

void SearchAndReplace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchAndReplace *_t = static_cast<SearchAndReplace *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->find();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->replaceAndNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->slotReplaceAll(); break;
        case 3: _t->slotAccepted(); break;
        case 4: _t->slotSearchChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchAndReplace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchAndReplace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchAndReplace,
      qt_meta_data_SearchAndReplace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchAndReplace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchAndReplace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchAndReplace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchAndReplace))
        return static_cast<void*>(const_cast< SearchAndReplace*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchAndReplace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
