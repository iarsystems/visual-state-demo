/**************************************************
 *
 * Copyright (c) 2025 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include "ui.h"

void ui::ActionHandler::aLEDredOn() {
  qDebug("Red   : On");
  _ui->frameRed->setStyleSheet("background-color: rgba(255, 0, 0, 255)");
}
void ui::ActionHandler::aLEDredOff() {
  qDebug("Red   : Off");
  _ui->frameRed->setStyleSheet("background-color: rgba(64, 0, 0, 255)");
}
void ui::ActionHandler::aLEDyellowOn() {
  qDebug("Yellow: On");
  _ui->frameYellow->setStyleSheet("background-color: rgba(255, 255, 0, 255)");
}
void ui::ActionHandler::aLEDyellowOff() {
  qDebug("Yellow: Off");
  _ui->frameYellow->setStyleSheet("background-color: rgba(64, 64, 0, 255)");
}
void ui::ActionHandler::aLEDgreenOn() {
  qDebug("Green : On");
  _ui->frameGreen->setStyleSheet("background-color: rgba(0, 255, 0, 255)");
}
void ui::ActionHandler::aLEDgreenOff() {
  qDebug("Green : Off");
  _ui->frameGreen->setStyleSheet("background-color: rgba(0, 64, 0, 255)");
}

void ui::handleButton1() {
  qDebug("-- Button 1 clicked.");
  FSM->VSDeduct(eButton1);
}
void ui::handleButton2() {
  qDebug("-- Button 2 clicked.");
  FSM->VSDeduct(eButton2);
}

ui::ui(QWidget *parent)
  :QWidget(parent) {

  frameRed = new QFrame();
  frameRed->setFrameStyle(QFrame::Box | QFrame::Plain);
  frameRed->setLineWidth(3);
  frameYellow = new QFrame();
  frameYellow->setFrameStyle(QFrame::Box | QFrame::Plain);
  frameYellow->setLineWidth(3);
  frameGreen = new QFrame();
  frameGreen->setFrameStyle(QFrame::Box | QFrame::Plain);
  frameGreen->setLineWidth(3);

  QPixmap pix(":/images/iar.png");
  logo = new QLabel();
  logo->setPixmap(pix);
  logo->setAlignment(Qt::AlignCenter);

  QVBoxLayout *vlayout = new QVBoxLayout();
  vlayout->addWidget(frameRed);
  vlayout->addWidget(frameYellow);
  vlayout->addWidget(frameGreen);
  vlayout->addWidget(logo);

  button1 = new QPushButton("Button 1", this);
  button2 = new QPushButton("Button 2", this);

  QHBoxLayout *hlayout = new QHBoxLayout();
  hlayout->addWidget(button1);
  hlayout->addWidget(button2);

  // IAR Visual State
  FSM = new ActionHandler(this);
  FSM->VSInitAll();
  FSM->VSDeduct(SE_RESET);

  connect(button1, &QPushButton::clicked, this, &ui::handleButton1);
  connect(button2, &QPushButton::clicked, this, &ui::handleButton2);

  QVBoxLayout *mainLayout = new QVBoxLayout();
  mainLayout->addLayout(vlayout);
  mainLayout->addLayout(hlayout);

  this->resize(480,800);
  this->setLayout(mainLayout);
}