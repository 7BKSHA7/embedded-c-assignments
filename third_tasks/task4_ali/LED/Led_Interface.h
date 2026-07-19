#ifndef _LED_INTERFACE_H_
#define _LED_INTERFACE_H_

void LED_vInitializePort(u8 Copy_u8PortID);
void LED_vTurnOffPin(u8 Copy_u8PortID, u8 Copy_u8PinID);
void LED_vSetPortPattern(u8 Copy_u8PortID, u8 Copy_u8Value);

#endif