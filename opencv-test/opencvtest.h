#pragma once

#include <QtWidgets/QWidget>
#include "ui_opencvtest.h"
#include <QLabel>

class opencvtest : public QWidget
{
    Q_OBJECT

public:
    opencvtest(QWidget *parent = Q_NULLPTR);

private:
    Ui::opencvtestClass ui;

public: 
    QLabel* imgLabel;
};

