/****************************************************************************
** Meta object code from reading C++ file 'field.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/shared/util/field.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FieldLine_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FieldLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FieldLine_t qt_meta_stringdata_FieldLine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FieldLine"
QT_MOC_LITERAL(1, 10, 6), // "Rename"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12) // "fillTypeEnum"

    },
    "FieldLine\0Rename\0\0fillTypeEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FieldLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FieldLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FieldLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Rename(); break;
        case 1: _t->fillTypeEnum(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FieldLine::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FieldLine.data,
    qt_meta_data_FieldLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FieldLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FieldLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FieldLine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FieldLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FieldCircularArc_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FieldCircularArc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FieldCircularArc_t qt_meta_stringdata_FieldCircularArc = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FieldCircularArc"
QT_MOC_LITERAL(1, 17, 6), // "Rename"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12) // "fillTypeEnum"

    },
    "FieldCircularArc\0Rename\0\0fillTypeEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FieldCircularArc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FieldCircularArc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FieldCircularArc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Rename(); break;
        case 1: _t->fillTypeEnum(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FieldCircularArc::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FieldCircularArc.data,
    qt_meta_data_FieldCircularArc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FieldCircularArc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FieldCircularArc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FieldCircularArc.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FieldCircularArc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_BallModelStraightTwoPhase_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BallModelStraightTwoPhase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BallModelStraightTwoPhase_t qt_meta_stringdata_BallModelStraightTwoPhase = {
    {
QT_MOC_LITERAL(0, 0, 25) // "BallModelStraightTwoPhase"

    },
    "BallModelStraightTwoPhase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BallModelStraightTwoPhase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BallModelStraightTwoPhase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BallModelStraightTwoPhase::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BallModelStraightTwoPhase.data,
    qt_meta_data_BallModelStraightTwoPhase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BallModelStraightTwoPhase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BallModelStraightTwoPhase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BallModelStraightTwoPhase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BallModelStraightTwoPhase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BallModelChipFixLoss_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BallModelChipFixLoss_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BallModelChipFixLoss_t qt_meta_stringdata_BallModelChipFixLoss = {
    {
QT_MOC_LITERAL(0, 0, 20) // "BallModelChipFixLoss"

    },
    "BallModelChipFixLoss"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BallModelChipFixLoss[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BallModelChipFixLoss::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BallModelChipFixLoss::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BallModelChipFixLoss.data,
    qt_meta_data_BallModelChipFixLoss,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BallModelChipFixLoss::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BallModelChipFixLoss::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BallModelChipFixLoss.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BallModelChipFixLoss::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RoboCupFieldModels_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboCupFieldModels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboCupFieldModels_t qt_meta_stringdata_RoboCupFieldModels = {
    {
QT_MOC_LITERAL(0, 0, 18) // "RoboCupFieldModels"

    },
    "RoboCupFieldModels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboCupFieldModels[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RoboCupFieldModels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RoboCupFieldModels::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RoboCupFieldModels.data,
    qt_meta_data_RoboCupFieldModels,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoboCupFieldModels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboCupFieldModels::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoboCupFieldModels.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoboCupFieldModels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RoboCupField_t {
    QByteArrayData data[11];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboCupField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboCupField_t qt_meta_stringdata_RoboCupField = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RoboCupField"
QT_MOC_LITERAL(1, 13, 18), // "calibrationChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "ProcessNewFieldLines"
QT_MOC_LITERAL(4, 54, 19), // "ProcessNewFieldArcs"
QT_MOC_LITERAL(5, 74, 16), // "ResizeFieldLines"
QT_MOC_LITERAL(6, 91, 15), // "ResizeFieldArcs"
QT_MOC_LITERAL(7, 107, 7), // "changed"
QT_MOC_LITERAL(8, 115, 23), // "updateFieldLinesAndArcs"
QT_MOC_LITERAL(9, 139, 22), // "applyGeometryDivisionA"
QT_MOC_LITERAL(10, 162, 22) // "applyGeometryDivisionB"

    },
    "RoboCupField\0calibrationChanged\0\0"
    "ProcessNewFieldLines\0ProcessNewFieldArcs\0"
    "ResizeFieldLines\0ResizeFieldArcs\0"
    "changed\0updateFieldLinesAndArcs\0"
    "applyGeometryDivisionA\0applyGeometryDivisionB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboCupField[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

void RoboCupField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoboCupField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibrationChanged(); break;
        case 1: _t->ProcessNewFieldLines(); break;
        case 2: _t->ProcessNewFieldArcs(); break;
        case 3: _t->ResizeFieldLines(); break;
        case 4: _t->ResizeFieldArcs(); break;
        case 5: _t->changed(); break;
        case 6: _t->updateFieldLinesAndArcs(); break;
        case 7: _t->applyGeometryDivisionA(); break;
        case 8: _t->applyGeometryDivisionB(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoboCupField::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoboCupField::calibrationChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RoboCupField::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RoboCupField.data,
    qt_meta_data_RoboCupField,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoboCupField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboCupField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoboCupField.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoboCupField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RoboCupField::calibrationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
