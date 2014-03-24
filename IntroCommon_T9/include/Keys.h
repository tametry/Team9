/*
 * Keys.h
 *
 *  Created on: Mar 24, 2014
 *      Author: Egli Simon
 */

#ifndef KEYS_H_
#define KEYS_H_

#define KEY1_Get()  (!(KB1_GetVal()&(1<<0)))
    /*!< Macro which returns TRUE if key 1 is pressed */
  #define KEY2_Get()  (!(KB1_GetVal()&(1<<1)))
    /*!< Macro which returns TRUE if key 2 is pressed */
  #define KEY3_Get()  (!(KB1_GetVal()&(1<<2)))
    /*!< Macro which returns TRUE if key 3 is pressed */
  #define KEY4_Get()  (!(KB1_GetVal()&(1<<3)))
    /*!< Macro which returns TRUE if key 4 is pressed */

#endif /* KEYS_H_ */
