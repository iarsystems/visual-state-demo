/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include "actionFunctions.h"
#include "simpleEventHandler.h"

typedef enum { OFF, ON } switch_e;

typedef struct LED_t {
  switch_e state;
} LED_t;

LED_t LED_RED;
LED_t LED_YELLOW;
LED_t LED_GREEN;

void aLEDgreenOff(void)  { LED_GREEN.state = OFF; }
void aLEDgreenOn(void)   {	LED_GREEN.state = ON; }

void aLEDredOff(void)    {	LED_RED.state = OFF; }
void aLEDredOn(void)     {	LED_RED.state = ON; }

void aLEDyellowOff(void) { LED_YELLOW.state = OFF; }
void aLEDyellowOn(void)  { LED_YELLOW.state = ON; }
