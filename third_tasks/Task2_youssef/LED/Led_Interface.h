#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#include "../LIB/STD_TYPES.h"

void Led_Init(u8 GroupName, u8 PinNumber);
void Led_on(u8 GroupName, u8 PinNumber, u8 ConnectionType);
void Led_off(u8 GroupName, u8 PinNumber, u8 ConnectionType);


#endif




