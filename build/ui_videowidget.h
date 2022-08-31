/********************************************************************************
** Form generated from reading UI file 'videowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWIDGET_H
#define UI_VIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWidget
{
public:
    QAction *actionWindow;
    QAction *actionFullscreen;
    QAction *actionFlipV;
    QAction *actionFlipH;
    QAction *actionOn;
    QVBoxLayout *vboxLayout;
    QFrame *bigframe;
    QVBoxLayout *vboxLayout1;
    QFrame *videoframe;
    QVBoxLayout *vboxLayout2;
    QLabel *titleLabel;
    QLabel *statLabel;

    void setupUi(QWidget *VideoWidget)
    {
        if (VideoWidget->objectName().isEmpty())
            VideoWidget->setObjectName(QString::fromUtf8("VideoWidget"));
        VideoWidget->resize(547, 321);
        VideoWidget->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/window-new.png"));
        VideoWidget->setWindowIcon(icon);
        actionWindow = new QAction(VideoWidget);
        actionWindow->setObjectName(QString::fromUtf8("actionWindow"));
        actionWindow->setCheckable(true);
        actionWindow->setIcon(icon);
        actionWindow->setShortcutContext(Qt::WidgetShortcut);
        actionFullscreen = new QAction(VideoWidget);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setCheckable(true);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/view-fullscreen.png"));
        actionFullscreen->setIcon(icon1);
        actionFullscreen->setShortcutContext(Qt::WidgetShortcut);
        actionFlipV = new QAction(VideoWidget);
        actionFlipV->setObjectName(QString::fromUtf8("actionFlipV"));
        actionFlipV->setCheckable(true);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/delete_table_row.png"));
        actionFlipV->setIcon(icon2);
        actionFlipH = new QAction(VideoWidget);
        actionFlipH->setObjectName(QString::fromUtf8("actionFlipH"));
        actionFlipH->setCheckable(true);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/delete_table_col.png"));
        actionFlipH->setIcon(icon3);
        actionOn = new QAction(VideoWidget);
        actionOn->setObjectName(QString::fromUtf8("actionOn"));
        actionOn->setCheckable(true);
        actionOn->setChecked(true);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/application-exit.png"));
        actionOn->setIcon(icon4);
        vboxLayout = new QVBoxLayout(VideoWidget);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        bigframe = new QFrame(VideoWidget);
        bigframe->setObjectName(QString::fromUtf8("bigframe"));
        bigframe->setFrameShape(QFrame::StyledPanel);
        bigframe->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(bigframe);
        vboxLayout1->setSpacing(3);
        vboxLayout1->setContentsMargins(3, 3, 3, 3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        videoframe = new QFrame(bigframe);
        videoframe->setObjectName(QString::fromUtf8("videoframe"));
        videoframe->setAutoFillBackground(true);
        videoframe->setFrameShape(QFrame::StyledPanel);
        videoframe->setFrameShadow(QFrame::Plain);
        videoframe->setLineWidth(1);
        vboxLayout2 = new QVBoxLayout(videoframe);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(5, 5, 5, 5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        titleLabel = new QLabel(videoframe);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAutoFillBackground(false);
        titleLabel->setFrameShape(QFrame::NoFrame);
        titleLabel->setFrameShadow(QFrame::Sunken);
        titleLabel->setMargin(2);

        vboxLayout2->addWidget(titleLabel);

        statLabel = new QLabel(videoframe);
        statLabel->setObjectName(QString::fromUtf8("statLabel"));
        statLabel->setMinimumSize(QSize(160, 0));
        statLabel->setAutoFillBackground(false);
        statLabel->setFrameShape(QFrame::NoFrame);
        statLabel->setFrameShadow(QFrame::Sunken);
        statLabel->setMargin(0);
        statLabel->setIndent(-1);

        vboxLayout2->addWidget(statLabel);


        vboxLayout1->addWidget(videoframe);


        vboxLayout->addWidget(bigframe);


        retranslateUi(VideoWidget);

        QMetaObject::connectSlotsByName(VideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoWidget)
    {
        VideoWidget->setWindowTitle(QApplication::translate("VideoWidget", "Video Display", nullptr));
        actionWindow->setText(QApplication::translate("VideoWidget", "Toggle Separate Window", nullptr));
#ifndef QT_NO_SHORTCUT
        actionWindow->setShortcut(QApplication::translate("VideoWidget", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionFullscreen->setText(QApplication::translate("VideoWidget", "Toggle Fullscreen", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFullscreen->setShortcut(QApplication::translate("VideoWidget", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionFlipV->setText(QApplication::translate("VideoWidget", "Flip Vertically", nullptr));
        actionFlipH->setText(QApplication::translate("VideoWidget", "Flip Horizontally", nullptr));
        actionOn->setText(QApplication::translate("VideoWidget", "Rendering On/Off", nullptr));
        titleLabel->setText(QApplication::translate("VideoWidget", "TextLabel", nullptr));
        statLabel->setText(QApplication::translate("VideoWidget", "no stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWidget: public Ui_VideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWIDGET_H
