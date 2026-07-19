#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "../LIB/REG_MAP.h"

#include "DIO_config.h"
#include "DIO_interface.h"
#include "DIO_private.h"

/*
    the port is the group which is a b c d 
    the pin is the pin number from 0 to 7
    the direction is 1 or 0  
    0 is input
    1 is output 
*/

void DIO_set_pin_direction(u8 port , u8 pin , u8 direction)
{
    switch(port)
    {
        case DIO_portA :
            if(direction == output)
            {
                SetBit(DDRA , pin);
            }
            else 
            {
                ClearBit(DDRA , pin);
            }
            break;
        case DIO_portB :
            if(direction == output)
            {
                SetBit(DDRB , pin);
            }
            else 
            {
                ClearBit(DDRB , pin);
            }
            break;
        case DIO_portC :
            if(direction == output)
            {
                SetBit(DDRC , pin);
            }
            else 
            {
                ClearBit(DDRC , pin);
            }
            break;
        case DIO_portD :
            if(direction == output)
            {
                SetBit(DDRD , pin);
            }
            else 
            {
                ClearBit(DDRD , pin);
            }
            break;

    }
}


u8 DIO_get_pin_value(u8 port , u8 pin)
{
    switch(port)
    {
        case DIO_portA :
            return ReadBit(PINA , pin);
            break;
        case DIO_portB :
            return ReadBit(PINB , pin);
            break;
        case DIO_portC :
            return ReadBit(PINC , pin);
            break;
        case DIO_portD :
            return ReadBit(PIND , pin);
            break;
        default :
            return 0 ;
            break; 
    }
}


void DIO_set_pin_value(u8 port, u8 pin, u8 value)
{
    switch(port)
    {
        case DIO_portA:
            if(value)
                SetBit(PORTA, pin);
            else
                ClearBit(PORTA, pin);
            break;

        case DIO_portB:
            if(value)
                SetBit(PORTB, pin);
            else
                ClearBit(PORTB, pin);
            break;

        case DIO_portC:
            if(value)
                SetBit(PORTC, pin);
            else
                ClearBit(PORTC, pin);
            break;

        case DIO_portD:
            if(value)
                SetBit(PORTD, pin);
            else
                ClearBit(PORTD, pin);
            break;
    }
}