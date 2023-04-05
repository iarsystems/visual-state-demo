/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

#include <intrinsics.h>
#include "simpleEventHandler.h"

void ErrorHandler(void);
void ErrorHandler(void)
{
  __disable_interrupt();
  while (true)
  {
  }
}

int main(void);
int main(void)
{
  SEM_EVENT_TYPE eventNo;

  System1VSInitAll();
  SEQ_Initialize();
  (void)SEQ_AddEvent(SE_RESET);

  __enable_interrupt();

  while (true)
  {
    if(SEQ_RetrieveEvent(&eventNo) != UCC_QUEUE_EMPTY)
    {
      if (System1VSDeduct(eventNo) != SES_OKAY)
      {
        ErrorHandler();
      }
    }
  }
}

__root uint_fast8_t BUTTON_int = 0u;
void BUTTON_Pressed(void);
void BUTTON_Pressed(void) {
  if (BUTTON_int == eButton1) (void)SEQ_AddEvent(eButton1);
  if (BUTTON_int == eButton2) (void)SEQ_AddEvent(eButton2);
  BUTTON_int = SE_RESET;
}

void SysTick_Handler(void);
void SysTick_Handler(void) {
  BUTTON_Pressed();
}
