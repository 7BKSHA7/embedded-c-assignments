#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

#include "../LIB/STD_TYPES.h"

void DIO_set_pin_direction(u8 port , u8 pin , u8 direction);

u8 DIO_get_pin_value(u8 port , u8 pin);

#endif