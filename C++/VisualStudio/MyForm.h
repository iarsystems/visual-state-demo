/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#pragma once

#include "System1.h"
#include "ActionHandler.h"

namespace Project1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    public: static System::Windows::Forms::Panel^ LED_RED;
    public: static System::Windows::Forms::Panel^ LED_YELLOW;
    public: static System::Windows::Forms::Panel^ LED_GREEN;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->LED_RED = (gcnew System::Windows::Forms::Panel());
            this->LED_YELLOW = (gcnew System::Windows::Forms::Panel());
            this->LED_GREEN = (gcnew System::Windows::Forms::Panel());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(348, 45);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 150);
            this->button1->TabIndex = 0;
            this->button1->Text = L"↑";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(348, 345);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 150);
            this->button2->TabIndex = 1;
            this->button2->Text = L"↓";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(155, 550);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(150, 39);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Exit";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // LED_RED
            // 
            this->LED_RED->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->LED_RED->Location = System::Drawing::Point(155, 12);
            this->LED_RED->Name = L"LED_RED";
            this->LED_RED->Size = System::Drawing::Size(150, 150);
            this->LED_RED->TabIndex = 3;
            // 
            // LED_YELLOW
            // 
            this->LED_YELLOW->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->LED_YELLOW->Location = System::Drawing::Point(155, 193);
            this->LED_YELLOW->Name = L"LED_YELLOW";
            this->LED_YELLOW->Size = System::Drawing::Size(150, 150);
            this->LED_YELLOW->TabIndex = 0;
            // 
            // LED_GREEN
            // 
            this->LED_GREEN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->LED_GREEN->Location = System::Drawing::Point(155, 378);
            this->LED_GREEN->Name = L"LED_GREEN";
            this->LED_GREEN->Size = System::Drawing::Size(150, 150);
            this->LED_GREEN->TabIndex = 0;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(464, 601);
            this->Controls->Add(this->LED_YELLOW);
            this->Controls->Add(this->LED_GREEN);
            this->Controls->Add(this->LED_RED);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"IAR Visual State - C++ Demo";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
    /// <summary>
    /// A new instance of ActionHandler for System1.
    /// </summary>
    ActionHandler* FSM = new ActionHandler;

    /// <summary>
    /// Initialize the FSM at Form Load event.
    /// </summary>
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        FSM->VSInitAll();
        FSM->VSDeduct(FSM->SE_RESET);
    }

    /// <summary>
    /// MyForm Event Handlers for buttons.
    /// </summary>
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        FSM->VSDeduct(FSM->eButton1);
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        FSM->VSDeduct(FSM->eButton2);
    }

    /// <summary>
    /// Simple exit procedure: explicitly delete FSM and dispose MyForm.
    /// </summary>
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        delete FSM;
        this->Close();
    }
};
}
