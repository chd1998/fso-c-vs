#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AndorCCD01.h"

class AndorCCD01 : public QMainWindow
{
    Q_OBJECT

public:
    AndorCCD01(QWidget *parent = Q_NULLPTR);

    int initAndorCCD();

private:
    Ui::AndorCCD01Class ui;
};
