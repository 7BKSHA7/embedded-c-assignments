#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

#include "../LIB/STD_TYPES.h"

void DIO_vSetPortDirection(u8 Copy_u8PortID, u8 Copy_u8Direction);
void DIO_vSetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value);
void DIO_vSetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);

#endif