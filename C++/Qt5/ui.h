/**************************************************
 *
 * Copyright (c) 2025 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#pragma once

#include <QDebug>
#include <QFrame>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

#include "../../VS_coder/System1.h"

class ui : public QWidget {
  public:
    explicit ui(QWidget *parent = nullptr);
    class ActionHandler : public System1 {
      public:
        explicit ActionHandler(ui *myui) : _ui(myui) {};
        void aLEDredOn();
        void aLEDredOff();
        void aLEDyellowOn();
        void aLEDyellowOff();
        void aLEDgreenOn();
        void aLEDgreenOff();
      private:
        ui *_ui;
    };
  private:
    QFrame *frameRed;
    QFrame *frameYellow;
    QFrame *frameGreen;
    QPushButton *button1;
    QPushButton *button2;
    QPixmap *pix;
    QLabel *logo;
    ActionHandler *FSM;
  private slots:
    void handleButton1();
    void handleButton2();
};
