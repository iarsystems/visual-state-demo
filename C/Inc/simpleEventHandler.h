/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

/*****************************************************************************
* visualSTATE Static Event Handler Header File (sample code)
*
* The file declares the interface for an event queue with a static size. To
* use the queue, the queue must be initialized by a call to the function
* SEQ_Initialize. Next, call the functions SEQ_AddEvent, SEQ_RetrieveEvent,
* SEQ_Clear and SEQ_EventPendingP as needed in order to add and retrieve 
* events.
*****************************************************************************/

#ifndef visualstate_SIMPLEEVENTHANDLER_H
#define visualstate_SIMPLEEVENTHANDLER_H

/* *** include directives *** */

#include "eventHandler.h"
#include <stdint.h>
#include <stdbool.h>

/* *** function declarations *** */

/** Initialize the event queue. Initializes the internal structure of the
    event queue. */
void SEQ_Initialize (void);

/** Add an event to the event queue. If the queue is full, UCC_QUEUE_FULL is
    returned, otherwise UCC_OK is returned. */
UCC_TYPE SEQ_AddEvent (SEM_EVENT_TYPE event);

/** Retrieve an event from the event queue. If the queue is not empty, UCC_OK
    is returned and pEvent will contain the retrieved event. If the queue is
    empty, UCC_QUEUE_EMPTY is returned and pEvent will contain the value for
    the undefined event. */
UCC_TYPE SEQ_RetrieveEvent (SEM_EVENT_TYPE* pEvent);

/** Clear the queue. All events are removed from the queue. */
void SEQ_Clear (void);

/** Is an event pending. If the queue is not empty, a non-zero value is
    returned, otherwise zero is returned. */
bool SEQ_EventPendingP (void);

#endif /* visualstate_SIMPLEEVENTHANDLER_H */
