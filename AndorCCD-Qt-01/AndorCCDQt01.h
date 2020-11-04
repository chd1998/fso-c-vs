#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AndorCCDQt01.h"

class AndorCCDQt01 : public QMainWindow
{
    Q_OBJECT

public:
    AndorCCDQt01(QWidget *parent = Q_NULLPTR);

    int initAndorCCD();

private:
    Ui::AndorCCDQt01Class ui;
};
