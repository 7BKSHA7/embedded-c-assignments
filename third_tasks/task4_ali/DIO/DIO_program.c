#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "../LIB/REG_MAP.h"
#include "DIO_Interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_vSetPortDirection(u8 Copy_u8PortID, u8 Copy_u8Direction) {
    switch(Copy_u8PortID) {
        case DIO_PORTA: DDRA = Copy_u8Direction; break;
        case DIO_PORTB: DDRB = Copy_u8Direction; break;
        case DIO_PORTC: DDRC = Copy_u8Direction; break;
        case DIO_PORTD: DDRD = Copy_u8Direction; break;
    }
}

void DIO_vSetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value) {
    switch(Copy_u8PortID) {
        case DIO_PORTA: PORTA = Copy_u8Value; break;
        case DIO_PORTB: PORTB = Copy_u8Value; break;
        case DIO_PORTC: PORTC = Copy_u8Value; break;
        case DIO_PORTD: PORTD = Copy_u8Value; break;
    }
}

void DIO_vSetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value) {
    if(Copy_u8Value == DIO_HIGH) {
        switch(Copy_u8PortID) {
            case DIO_PORTA: SetBit(PORTA, Copy_u8PinID); break;
            case DIO_PORTB: SetBit(PORTB, Copy_u8PinID); break;
            case DIO_PORTC: SetBit(PORTC, Copy_u8PinID); break;
            case DIO_PORTD: SetBit(PORTD, Copy_u8PinID); break;
        }
    } else {
        switch(Copy_u8PortID) {
            case DIO_PORTA: ClearBit(PORTA, Copy_u8PinID); break;
            case DIO_PORTB: ClearBit(PORTB, Copy_u8PinID); break;
            case DIO_PORTC: ClearBit(PORTC, Copy_u8PinID); break;
            case DIO_PORTD: ClearBit(PORTD, Copy_u8PinID); break;
        }
    }
}