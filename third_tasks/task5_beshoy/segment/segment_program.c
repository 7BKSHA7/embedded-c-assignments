#include "segment_config.h"
#include "segment_interface.h"
#include "segment_private.h"
#include <util/delay.h>

#include "../LIB/BIT_MATH.h"
#include "../LIB/REG_MAP.h"
#include "../LIB/STD_TYPES.h"

#include "../DIO/DIO_interface.h"
#include "../DIO/DIO_private.h"

/*  beshoy esmat 
=================================================================================
Task 5 Segment with button  at next sat 
    write c code to control counter of 7 segment by 2 switch 
    switch 1 if pressed Increament the number on Segment 
    switch 2 if pressed Decreament the number on Segment
 -> Increament maxmuim 9 
 -> decreament minmuim 0
=================================================================================
*/

/*
    ok first of all we start instiallzing at groupA so it becomes output pins
    then we start by number zero 
    then we check if a 2 switchs where if the first is prssed incraese the counter
    ok so to do that we need to int the ddrx to input (0) and read the pinx 
    then we see if the pin is 1 in swtich 1 we inc
    and if the pin is 0 in swtich 1 we dont do anything
    if we keep pressing swtich 1 till we reach no 9 
    we stop at 9 and we dont incrase it by reading the value but not updating the value
    same with the decremnet

*/

int main ()
{
    u8 status = 0 ;
    Segment_Init(groupA);
    DIO_set_pin_direction(groupB , DIO_pin0 , input);
    DIO_set_pin_direction(groupB , DIO_pin1 , input);
    
    while(true)
    {
        if(DIO_get_pin_value(groupB , DIO_pin0) == 1 && status < 10 )
        {
            if (status != 9)
            {
                status++ ; 
                DisplayNumber(groupA , status);
                _delay_ms(1000);
            }
            else if (DIO_get_pin_value(groupB , DIO_pin1) == 1)
            {
                status--;
                continue;
            }
            
        }
        else if (DIO_get_pin_value(groupB , DIO_pin1) == 1 && status < 10 && status > -1 )
        {
            if (status != 0)
            {
                status--;
                DisplayNumber(groupA , status);
                _delay_ms(1000);
            }
            else if (DIO_get_pin_value(groupB , DIO_pin0) == 1)
            {
                status++;
                continue;
            }
        }
    }
}

void Segment_Init(u8 GroupName)
{
    switch(GroupName)
    {
        case 0:
            DDRA=0xFF;
            break;
        case 1:
            DDRB=0xFF;
            break;
        case 2:
            DDRC=0xFF;
            break;
        case 3:
            DDRD=0xFF;
            break;
    }

}

void DisplayNumber(u8 GroupName,u8 Number)
{
    u8 number[10]={
        Cathode_zero   ,
        Cathode_one    ,
        Cathode_two    ,
        Cathode_three  ,
        Cathode_four   ,
        Cathode_five   ,
        Cathode_six    ,
        Cathode_seven  ,
        Cathode_eight  ,
        Cathode_nine   ,
    };
    switch(GroupName)
    {
        case 0: 
            PORTA=number[Number]; 
            break;
        case 1: 
            PORTB=number[Number]; 
            break;
        case 2: 
            PORTC=number[Number]; 
            break;
        case 3: 
            PORTD=number[Number]; 
            break;
    }
}
