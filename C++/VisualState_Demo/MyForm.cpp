/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThreadAttribute]

 void main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Project1::MyForm frm;
    Application::Run(% frm);
}