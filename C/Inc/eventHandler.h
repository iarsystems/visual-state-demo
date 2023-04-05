/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

/*****************************************************************************
* visualSTATE Event Handler Header File
*
* The file contains completion codes to be returned by event handling 
* functions. See the individual header files for the various event handlers
* for further information.
*****************************************************************************/

#ifndef visualstate_EVENTHANDLER_H
#define visualstate_EVENTHANDLER_H

/* Include the system header file.
   Change this, if it does not match the name for your visualSTATE system.
 */
#include "System1.h"

/* *** macro definitions *** */

/* User completion codes. */

/** UCC_OK. Returned if the function completed successfully. */
#define UCC_OK                SES_OKAY

/** UCC_QUEUE_EMPTY. Returned on retrieval of an event from an empty queue. */
#define UCC_QUEUE_EMPTY       0xfeu

/** UCC_QUEUE_FULL. Returned on adding of an event to a full queue. */
#define UCC_QUEUE_FULL        0xfdu

/** UCC_MEMORY_ERROR. Returned if memory allocation or reallocation failed. */
#define UCC_MEMORY_ERROR      0xfcu

/** UCC_INVALID_PARAMETER. Returned if an invalid parameter is supplied to a function. */
#define UCC_INVALID_PARAMETER 0xfbu

/* *** type definitions *** */

/** User completion code type. Defines completion codes to be returned by the queue handling
    functions. */
typedef unsigned char UCC_TYPE;

#endif /* visualstate_EVENTHANDLER_H */
