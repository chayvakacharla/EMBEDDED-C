#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
 /* Macro Definitions
 */
#define F_CPU 16000000UL
#define LED  (PORTB)          /**< LED Port Number */
#define LED_PIN (PB0)         /**< LED Pin Number  */

#define BUT (PORTD)        /** Push Button Port Number of the car seat */
#define BUT_PIN (PD0)      /** Push Button Pin Number of the car seat */

#define SWI (PORTD)       /**  Switch Port Number of the Heater */
#define SWI_PIN (PD4)     /**  Switch Pin Number of the car Heater */

#endif /* __PROJECT_CONFIG_H__ */
