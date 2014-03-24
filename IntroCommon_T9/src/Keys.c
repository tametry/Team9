/*
 * Keys.c
 *
 *  Created on: Mar 24, 2014
 *      Author: Egli Simon
 */
#include "Platform.h"
#if PL_HAS_KEYBOARD
  #include "Keys.h"
#if PL_HAS_EVENTS
  #include "Event.h"
#endif

void KEY_Scan(void) {
  /*! \todo Implement handling of keys */
}

#if PL_HAS_KBI
void KEY_OnInterrupt(void) {
  KEY_Scan();
}
#endif

/*! \brief Key driver initialization */
void KEY_Init(void) {
  /* nothing needed for now */
}

/*! \brief Key driver de-initialization */
void KEY_Deinit(void) {
  /* nothing needed for now */
}
#endif /* PL_HAS_KEYS */


