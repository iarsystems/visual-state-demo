/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include "MyForm.h"
#include "ActionHandler.h"

using namespace System::Drawing;

namespace Project1 {
    void ActionHandler::aLEDredOn(void) {
        Project1::MyForm::LED_RED->BackColor = Color::FromArgb(255, 255, 0, 0);
    }
    void ActionHandler::aLEDredOff(void) {
        Project1::MyForm::LED_RED->BackColor = Color::FromArgb(255, 64, 0, 0);
    }

    void ActionHandler::aLEDyellowOn(void) {
        Project1::MyForm::LED_YELLOW->BackColor = Color::FromArgb(255, 255, 255, 0);
    }
    void ActionHandler::aLEDyellowOff(void) {
        Project1::MyForm::LED_YELLOW->BackColor = Color::FromArgb(255, 64, 64, 0);
    }

    void ActionHandler::aLEDgreenOn(void) {
        Project1::MyForm::LED_GREEN->BackColor = Color::FromArgb(255, 0, 255, 0);
    }
    void ActionHandler::aLEDgreenOff(void) {
        Project1::MyForm::LED_GREEN->BackColor = Color::FromArgb(255, 0, 64, 0);
    }
}
