/**************************************************
 *
 * Copyright (c) 2025 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include <QApplication>
#include "ui.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    qDebug("Welcome to the IAR Visual State Demo on Qt");
    ui window;
    window.show();

    return app.exec();
}
