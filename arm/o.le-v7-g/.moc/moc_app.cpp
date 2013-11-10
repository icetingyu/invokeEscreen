/****************************************************************************
** Meta object code from reading C++ file 'app.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_App[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       9,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      25,    4,    4,    4, 0x05,
      41,    4,    4,    4, 0x05,
      59,    4,    4,    4, 0x05,
      72,    4,    4,    4, 0x05,
      86,    4,    4,    4, 0x05,
     102,    4,    4,    4, 0x05,
     124,    4,    4,    4, 0x05,
     147,    4,    4,    4, 0x05,
     163,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     183,    4,    4,    4, 0x0a,
     192,    4,    4,    4, 0x0a,
     200,    4,    4,    4, 0x0a,
     224,  217,    4,    4, 0x0a,
     246,    4,    4,    4, 0x0a,
     259,    4,    4,    4, 0x0a,
     277,    4,    4,    4, 0x08,
     298,    4,    4,    4, 0x08,
     318,    4,    4,    4, 0x08,
     358,    4,    4,    4, 0x08,
     370,    4,    4,    4, 0x08,
     413,    4,    4,    4, 0x08,

 // properties: name, type, flags
     427,  423, 0x02495103,
     446,  438, 0x0a495103,
     453,  438, 0x0a495103,
     462,  438, 0x0a495103,
     466,  438, 0x0a495103,
     217,  438, 0x0a495103,
     501,  471, 0x00095409,
     507,  438, 0x0a495001,
     520,  438, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       0,
       6,
       7,

       0        // eod
};

static const char qt_meta_stringdata_App[] = {
    "App\0\0targetTypeChanged()\0actionChanged()\0"
    "mimeTypeChanged()\0uriChanged()\0"
    "dataChanged()\0targetChanged()\0"
    "errorMessageChanged()\0statusMessageChanged()\0"
    "queryFinished()\0closeQueryResults()\0"
    "invoke()\0query()\0platformInvoke()\0"
    "target\0invokeTarget(QString)\0clearError()\0"
    "showErrorDialog()\0processInvokeReply()\0"
    "processQueryReply()\0"
    "peekStarted(bb::system::CardPeek::Type)\0"
    "peekEnded()\0childCardDone(bb::system::CardDoneMessage)\0"
    "onArmed()\0int\0targetType\0QString\0"
    "action\0mimeType\0uri\0data\0"
    "bb::cascades::GroupDataModel*\0model\0"
    "errorMessage\0statusMessage\0"
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        App *_t = static_cast<App *>(_o);
        switch (_id) {
        case 0: _t->targetTypeChanged(); break;
        case 1: _t->actionChanged(); break;
        case 2: _t->mimeTypeChanged(); break;
        case 3: _t->uriChanged(); break;
        case 4: _t->dataChanged(); break;
        case 5: _t->targetChanged(); break;
        case 6: _t->errorMessageChanged(); break;
        case 7: _t->statusMessageChanged(); break;
        case 8: _t->queryFinished(); break;
        case 9: _t->closeQueryResults(); break;
        case 10: _t->invoke(); break;
        case 11: _t->query(); break;
        case 12: _t->platformInvoke(); break;
        case 13: _t->invokeTarget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->clearError(); break;
        case 15: _t->showErrorDialog(); break;
        case 16: _t->processInvokeReply(); break;
        case 17: _t->processQueryReply(); break;
        case 18: _t->peekStarted((*reinterpret_cast< bb::system::CardPeek::Type(*)>(_a[1]))); break;
        case 19: _t->peekEnded(); break;
        case 20: _t->childCardDone((*reinterpret_cast< const bb::system::CardDoneMessage(*)>(_a[1]))); break;
        case 21: _t->onArmed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData App::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject App::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_App,
      qt_meta_data_App, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &App::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_App))
        return static_cast<void*>(const_cast< App*>(this));
    return QObject::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = targetType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = action(); break;
        case 2: *reinterpret_cast< QString*>(_v) = mimeType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = uri(); break;
        case 4: *reinterpret_cast< QString*>(_v) = data(); break;
        case 5: *reinterpret_cast< QString*>(_v) = target(); break;
        case 6: *reinterpret_cast< bb::cascades::GroupDataModel**>(_v) = model(); break;
        case 7: *reinterpret_cast< QString*>(_v) = errorMessage(); break;
        case 8: *reinterpret_cast< QString*>(_v) = statusMessage(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTargetType(*reinterpret_cast< int*>(_v)); break;
        case 1: setAction(*reinterpret_cast< QString*>(_v)); break;
        case 2: setMimeType(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUri(*reinterpret_cast< QString*>(_v)); break;
        case 4: setData(*reinterpret_cast< QString*>(_v)); break;
        case 5: setTarget(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void App::targetTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void App::actionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void App::mimeTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void App::uriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void App::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void App::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void App::errorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void App::statusMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void App::queryFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void App::closeQueryResults()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
