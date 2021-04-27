#include "project_config.h"

#include "user_utils.h"
#include "activity1.h"

int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1)
	{
    if(!(PIND &(ON<<BUT_PIN)) && !(PIND &(ON<<SWI_PIN)))
            {
        led_on(ON);
		delay_ms(LED_ON_TIME);
            }
    
    
    else
    {
        led_off(OFF);
		delay_ms(LED_OFF_TIME);	
    }
	}
	return 0;
}
