#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

/**
 * Macro Definitions
 */
#define ON 	(1)			/**< LED state HIGH */
#define OFF	(0)			/**< LED state LOW */

#define LED_ON_TIME     (200)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (100)   /**< LED OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief initialize the pull up natured peripherals
 */

void peripheral_init(void);

/**
 * @brief Change the state of the LED Pin according to the state of the push button in car seat and heater switch
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void led_on(uint8_t state);
void led_off(uint8_t state);


#endif /** __ACTIVITY1_H_ */
