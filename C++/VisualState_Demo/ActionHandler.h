/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#pragma once
#include "System1.h"

namespace Project1 {
    /// <summary>
    /// Action handlers for System1.
    /// </summary>
    class ActionHandler : public System1
    {
    public:
        virtual void aLEDredOn(void);
        virtual void aLEDredOff(void);
        virtual void aLEDyellowOn(void);
        virtual void aLEDyellowOff(void);
        virtual void aLEDgreenOn(void);
        virtual void aLEDgreenOff(void);
    };
}
