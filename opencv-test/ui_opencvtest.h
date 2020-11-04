/********************************************************************************
** Form generated from reading UI file 'opencvtest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCVTEST_H
#define UI_OPENCVTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opencvtestClass
{
public:
    QLabel *label;

    void setupUi(QWidget *opencvtestClass)
    {
        if (opencvtestClass->objectName().isEmpty())
            opencvtestClass->setObjectName(QString::fromUtf8("opencvtestClass"));
        opencvtestClass->resize(1024, 768);
        label = new QLabel(opencvtestClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 768));

        retranslateUi(opencvtestClass);

        QMetaObject::connectSlotsByName(opencvtestClass);
    } // setupUi

    void retranslateUi(QWidget *opencvtestClass)
    {
        opencvtestClass->setWindowTitle(QCoreApplication::translate("opencvtestClass", "opencvtest", nullptr));
        label->setText(QCoreApplication::translate("opencvtestClass", "imgLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opencvtestClass: public Ui_opencvtestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVTEST_H
