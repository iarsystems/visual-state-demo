using System.Windows.Forms;

namespace VisualStateDemo
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Button1 = new System.Windows.Forms.Button();
            this.Button2 = new System.Windows.Forms.Button();
            this.Button3 = new System.Windows.Forms.Button();
            this.LED_RED = new System.Windows.Forms.Panel();
            this.LED_YELLOW = new System.Windows.Forms.Panel();
            this.LED_GREEN = new System.Windows.Forms.Panel();
            this.SuspendLayout();
            // 
            // Button1
            // 
            this.Button1.FlatStyle = System.Windows.Forms.FlatStyle.System;
            this.Button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Button1.Location = new System.Drawing.Point(330, 12);
            this.Button1.Name = "Button1";
            this.Button1.Size = new System.Drawing.Size(49, 187);
            this.Button1.TabIndex = 0;
            this.Button1.Text = "⇑";
            this.Button1.UseVisualStyleBackColor = true;
            this.Button1.Click += new System.EventHandler(this.Button_Click);
            // 
            // Button2
            // 
            this.Button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Button2.Location = new System.Drawing.Point(330, 343);
            this.Button2.Name = "Button2";
            this.Button2.Size = new System.Drawing.Size(49, 187);
            this.Button2.TabIndex = 1;
            this.Button2.Text = "⇓";
            this.Button2.UseVisualStyleBackColor = true;
            this.Button2.Click += new System.EventHandler(this.Button_Click);
            // 
            // Button3
            // 
            this.Button3.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.Button3.Location = new System.Drawing.Point(159, 548);
            this.Button3.Name = "Button3";
            this.Button3.Size = new System.Drawing.Size(150, 41);
            this.Button3.TabIndex = 2;
            this.Button3.Text = "Exit";
            this.Button3.UseVisualStyleBackColor = true;
            this.Button3.Click += new System.EventHandler(this.Button_Click);
            // 
            // LED_RED
            // 
            this.LED_RED.BackColor = System.Drawing.Color.Gray;
            this.LED_RED.ForeColor = System.Drawing.Color.Black;
            this.LED_RED.Location = new System.Drawing.Point(159, 12);
            this.LED_RED.Name = "LED_RED";
            this.LED_RED.Size = new System.Drawing.Size(150, 150);
            this.LED_RED.TabIndex = 3;
            // 
            // LED_YELLOW
            // 
            this.LED_YELLOW.BackColor = System.Drawing.Color.Gray;
            this.LED_YELLOW.Location = new System.Drawing.Point(159, 196);
            this.LED_YELLOW.Name = "LED_YELLOW";
            this.LED_YELLOW.Size = new System.Drawing.Size(150, 150);
            this.LED_YELLOW.TabIndex = 4;
            // 
            // LED_GREEN
            // 
            this.LED_GREEN.BackColor = System.Drawing.Color.Gray;
            this.LED_GREEN.Location = new System.Drawing.Point(159, 380);
            this.LED_GREEN.Name = "LED_GREEN";
            this.LED_GREEN.Size = new System.Drawing.Size(150, 150);
            this.LED_GREEN.TabIndex = 5;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.Button3;
            this.ClientSize = new System.Drawing.Size(464, 601);
            this.Controls.Add(this.LED_GREEN);
            this.Controls.Add(this.LED_YELLOW);
            this.Controls.Add(this.LED_RED);
            this.Controls.Add(this.Button3);
            this.Controls.Add(this.Button2);
            this.Controls.Add(this.Button1);
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.Text = "IAR Visual State - C# Demo";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button Button1;
        private System.Windows.Forms.Button Button2;
        private System.Windows.Forms.Button Button3;
        public System.Windows.Forms.Panel LED_RED;
        public System.Windows.Forms.Panel LED_YELLOW;
        public System.Windows.Forms.Panel LED_GREEN;


    }
}

