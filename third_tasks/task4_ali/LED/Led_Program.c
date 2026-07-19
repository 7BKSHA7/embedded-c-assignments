#include "../LIB/STD_TYPES.h"
#include "../DIO/DIO_interface.h"
#include "../DIO/DIO_private.h"

#include "Led_Interface.h"
#include "Led_Config.h"
#include "Led_Private.h"

void LED_vInitializePort(u8 Copy_u8PortID) {
    DIO_vSetPortDirection(Copy_u8PortID, 0xFF); 
}

void LED_vTurnOffPin(u8 Copy_u8PortID, u8 Copy_u8PinID) {
    DIO_vSetPinValue(Copy_u8PortID, Copy_u8PinID, DIO_LOW);
}

void LED_vSetPortPattern(u8 Copy_u8PortID, u8 Copy_u8Value) {
    DIO_vSetPortValue(Copy_u8PortID, Copy_u8Value);
}