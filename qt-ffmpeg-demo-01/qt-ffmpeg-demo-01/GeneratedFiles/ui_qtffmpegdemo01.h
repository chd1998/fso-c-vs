/********************************************************************************
** Form generated from reading UI file 'qtffmpegdemo01.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTFFMPEGDEMO01_H
#define UI_QTFFMPEGDEMO01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtffmpegdemo01Class
{
public:
    QWidget *centralWidget;
    QLabel *versionlabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtffmpegdemo01Class)
    {
        if (qtffmpegdemo01Class->objectName().isEmpty())
            qtffmpegdemo01Class->setObjectName(QString::fromUtf8("qtffmpegdemo01Class"));
        qtffmpegdemo01Class->resize(600, 400);
        centralWidget = new QWidget(qtffmpegdemo01Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        versionlabel = new QLabel(centralWidget);
        versionlabel->setObjectName(QString::fromUtf8("versionlabel"));
        versionlabel->setGeometry(QRect(140, 120, 221, 71));
        versionlabel->setFrameShape(QFrame::Box);
        versionlabel->setFrameShadow(QFrame::Raised);
        versionlabel->setLineWidth(5);
        qtffmpegdemo01Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qtffmpegdemo01Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        qtffmpegdemo01Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtffmpegdemo01Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qtffmpegdemo01Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qtffmpegdemo01Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qtffmpegdemo01Class->setStatusBar(statusBar);

        retranslateUi(qtffmpegdemo01Class);

        QMetaObject::connectSlotsByName(qtffmpegdemo01Class);
    } // setupUi

    void retranslateUi(QMainWindow *qtffmpegdemo01Class)
    {
        qtffmpegdemo01Class->setWindowTitle(QCoreApplication::translate("qtffmpegdemo01Class", "qtffmpegdemo01", nullptr));
        versionlabel->setText(QCoreApplication::translate("qtffmpegdemo01Class", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtffmpegdemo01Class: public Ui_qtffmpegdemo01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTFFMPEGDEMO01_H
