#include "Led_Config.h"
#include "Led_Interface.h"
#include "Led_Private.h"
#include "../DIO/DIO_interface.h"

void Led_Init(u8 GroupName, u8 PinNumber){

 DIO_set_pin_direction(GroupName, PinNumber, 1);

}

void Led_on(u8 GroupName, u8 PinNumber, u8 ConnectionType){

    if (ConnectionType == SourceConnection)
    {
        DIO_set_pin_value(GroupName, PinNumber, 1);
    }
    else if (ConnectionType == SinkConnection)
    {
        DIO_set_pin_value(GroupName, PinNumber, 0);
    }
}

void Led_off(u8 GroupName, u8 PinNumber, u8 ConnectionType)
{
    if (ConnectionType == SourceConnection)
    {
        DIO_set_pin_value(GroupName, PinNumber, 0);
    }
    else if (ConnectionType == SinkConnection)
    {
        DIO_set_pin_value(GroupName, PinNumber, 1);
    }
}