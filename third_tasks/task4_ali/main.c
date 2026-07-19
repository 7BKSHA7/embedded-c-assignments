#define F_CPU 8000000UL // Sets delay calculations for an 8MHz clock
#include "LIB/STD_TYPES.h"
#include <util/delay.h>
#include "DIO/DIO_interface.h"
#include "DIO/DIO_config.h"
#include "DIO/DIO_private.h"
#include "LED/Led_Config.h"
#include "LED/Led_Private.h"
#include "LED/Led_Interface.h"

int main(void)
{
    // Configure all 8 pins of Port A as output pins for the LEDs
    LED_vInitializePort(DIO_PORTA);
    
    while (1) 
    {
        // --- Animation 1: All On for 2 seconds ---
        LED_vSetPortPattern(DIO_PORTA, 0xFF); 
        _delay_ms(2000);
        
        // --- Animation 2: Led off led by led (1 second each) ---
        // Loops through pins 0 (top LED) up to 7 (bottom LED) turning them off sequentially
        for(u8 pin = 0; pin < 8; pin++)
        {
            LED_vTurnOffPin(DIO_PORTA, pin);
            _delay_ms(1000);
        }

        // --- Animation 3: All led Blinking for 5 seconds ---
        // 5 total cycles (500ms ON, 500ms OFF = 1 second per cycle)
        for (u8 i = 0; i < 5; i++) 
        {
            LED_vSetPortPattern(DIO_PORTA, 0xFF);
            _delay_ms(500);
            LED_vSetPortPattern(DIO_PORTA, 0x00);
            _delay_ms(500);
        }
    }
}