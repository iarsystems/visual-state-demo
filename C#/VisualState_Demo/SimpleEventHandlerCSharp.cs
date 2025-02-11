/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VisualStateDemo
{
    internal class SimpleEventHandlerCSharp
    {
        private Queue Q = new Queue();

        public SimpleEventHandlerCSharp() {
            Q.Clear();
        }

        public bool Add(byte nEvent)
        {
            Q.Enqueue(nEvent);
            return true;
        }

        public byte Get()
        {
            byte nEvent = 255;

            if (Q.Count > 0)
            {
                nEvent = (byte)Q.Dequeue();
            }
            return nEvent;
        }

        public bool QueueEmpty()
        {
            if (Q.Count == 0) 
            {
                return true;
            }
            return false;
        }
    }
}
