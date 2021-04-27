#include "project_config.h"

#include "user_utils.h"
#include "activity1.h"


void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}


/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (ON <<LED_PIN);
	
	/* Configure Seat button Pin */
    DDRD &= (OFF<<BUT_PIN);
	
	/* Configure heater switch Pin */
    DDRC &= (OFF<<SWI_PIN);
	
	/* Convert pull up pin to pull down  nature  */
    BUT |= (ON <<BUT_PIN);
    SWI |= (ON <<SWI_PIN);
}

/**
 * @brief if both the conditions(seat occupied and heater switch is ON) satisfied turn LED ON
 * 
 */

void led_on(uint8_t state)
{
	LED |= (state<<LED_PIN);
}


/**
 * @brief if both the conditions not satisfied turn LED ON
 * 
 */
void led_off(uint8_t state)
{
	LED &= (state<<LED_PIN);
}
