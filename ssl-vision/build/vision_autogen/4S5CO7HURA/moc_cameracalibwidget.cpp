/****************************************************************************
** Meta object code from reading C++ file 'cameracalibwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/app/gui/cameracalibwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameracalibwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraCalibrationWidget_t {
    QByteArrayData data[11];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraCalibrationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraCalibrationWidget_t qt_meta_stringdata_CameraCalibrationWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CameraCalibrationWidget"
QT_MOC_LITERAL(1, 24, 32), // "is_clicked_update_control_points"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 18), // "is_clicked_initial"
QT_MOC_LITERAL(4, 77, 15), // "is_clicked_full"
QT_MOC_LITERAL(5, 93, 16), // "is_clicked_reset"
QT_MOC_LITERAL(6, 110, 16), // "edges_is_clicked"
QT_MOC_LITERAL(7, 127, 27), // "cameraheight_slider_changed"
QT_MOC_LITERAL(8, 155, 3), // "val"
QT_MOC_LITERAL(9, 159, 25), // "distortion_slider_changed"
QT_MOC_LITERAL(10, 185, 26) // "line_search_slider_changed"

    },
    "CameraCalibrationWidget\0"
    "is_clicked_update_control_points\0\0"
    "is_clicked_initial\0is_clicked_full\0"
    "is_clicked_reset\0edges_is_clicked\0"
    "cameraheight_slider_changed\0val\0"
    "distortion_slider_changed\0"
    "line_search_slider_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraCalibrationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void CameraCalibrationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraCalibrationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->is_clicked_update_control_points(); break;
        case 1: _t->is_clicked_initial(); break;
        case 2: _t->is_clicked_full(); break;
        case 3: _t->is_clicked_reset(); break;
        case 4: _t->edges_is_clicked(); break;
        case 5: _t->cameraheight_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->distortion_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->line_search_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CameraCalibrationWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CameraCalibrationWidget.data,
    qt_meta_data_CameraCalibrationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraCalibrationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraCalibrationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraCalibrationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CameraCalibrationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE