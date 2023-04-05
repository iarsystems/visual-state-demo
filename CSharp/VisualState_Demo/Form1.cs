/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

using System;
using System.Drawing;
using System.Windows.Forms;

namespace VisualStateDemo
{
    /// <summary>
    /// Class <c>Form1</c> models the Traffic Lights example in C#.
    /// </summary>
    public partial class Form1 : Form, ISystem1ActionHandler
    {
        private static System1 FSM = null;

        static SimpleEventHandlerCSharp EventQueue = new SimpleEventHandlerCSharp();

        private static System.Timers.Timer timer = new System.Timers.Timer(500);

        public Form1()
        {
            InitializeComponent();
        }
        
        private void Form1_Load(object sender, EventArgs e)
        {
            FSM_Init();
            Timer_Init();
        }

        /// <summary>
        /// Method <c>FSM_Init</c> set up the Finite State Machine (FSM).
        /// </summary>
        void FSM_Init()
        {
            FSM = new System1(this);
            FSM.VSInitAll();
            EventQueue.Add(System1.SE_RESET);
        }

        /// <summary>
        /// Method <c>Timer_Init</c> set up a Timer.
        /// </summary>        
        private void Timer_Init()
        {
            timer.Elapsed += new System.Timers.ElapsedEventHandler(OnTimerElapsed);
            timer.AutoReset = true;
            timer.Enabled = true;
        }

        /// <summary>
        /// Method <c>OnTimerElapsed</c> the FSM consumes an EventQueue.
        /// </summary>  
        private void OnTimerElapsed(Object source, System.Timers.ElapsedEventArgs e)
        {
            if (!EventQueue.QueueEmpty())
            {
                FSM.VSDeduct(EventQueue.Get());
            }
        }

        /// <summary>
        /// Method <c>Button_Click</c> processes when buttons are pressed and feed in the EventQueue.
        /// </summary>  
        private void Button_Click(object sender, EventArgs e)
        {
            if (sender is Button button)
            {
                // UP button
                if (button.Name == "Button1")
                {
                    EventQueue.Add(System1.eButton1);
                }

                // Down button
                if (button.Name == "Button2")
                {
                    EventQueue.Add(System1.eButton2);
                }

                // Exit button
                if (button.Name == "Button3")
                {
                    Application.Exit();
                }
            }
        }

        // The methods below (aLED<COLOR>{On||Off}()) are implementations for the actions, invoked from the FSM.
        public void aLEDgreenOn()
        {
            LED_GREEN.BackColor = Color.Green;
        }
        public void aLEDgreenOff()
        {
            LED_GREEN.BackColor = Color.FromArgb(255, 0, 64, 0);
        }

        public void aLEDredOn()
        {
            LED_RED.BackColor = Color.Red;
        }
        public void aLEDredOff()
        {
            LED_RED.BackColor = Color.FromArgb(255, 64, 0, 0);
        }

        public void aLEDyellowOn()
        {
            LED_YELLOW.BackColor = Color.Yellow;
        }
        public void aLEDyellowOff()
        {
            LED_YELLOW.BackColor = Color.FromArgb(255, 64, 64, 0);
        }
    }
}
