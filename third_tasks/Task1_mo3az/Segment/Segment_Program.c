#include <stdint.h>
#include <util/delay.h>

#include "Segment_Interface.h"
#include "Segment_Private.h"
#include "Segment_config.h"

#include "../LIB/BIT_MATH.h"
#include "../LIB/REG_MAP.h"



void Segment_Init(uint8_t GroupName){

    switch(GroupName){
        case groupA:
            DDRA_Reg=0xFF;
            DDRB_Reg=0xFF;
            break;

        case groupB: 
            DDRB_Reg=0xFF;
            DDRC_Reg=0xFF; 
            break;

        case groupC: 
            DDRC_Reg=0xFF;
            DDRD_Reg=0xFF; 
            break;

        case groupD: 
            DDRD_Reg=0xFF;
            DDRA_Reg=0xFF; 
            break;
    }

}

void DisplayNumber(uint8_t GroupName,uint8_t Number){
    
    uint8_t number[10]={
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

    uint8_t tens_number = Number/10;
    uint8_t ones_number = Number%10;
    
    switch(GroupName){
        case groupA: 
            PORTA_Reg=number[tens_number];
            PORTB_Reg=number[ones_number]; 
            break;
        
        case groupB: 
            PORTB_Reg=number[tens_number];
            PORTC_Reg=number[ones_number]; 
            break;

        case groupC: 
            PORTC_Reg=number[tens_number];
            PORTD_Reg=number[ones_number]; 
            break;

        case groupD: 
            PORTD_Reg=number[tens_number];
            PORTA_Reg=number[ones_number]; 
            break;
    }

}

void DisplayRang(uint8_t GroupName,uint8_t Start,uint8_t End){

    for(uint8_t counter=Start;counter<=End;counter++){
        
        DisplayNumber(GroupName,counter);
        _delay_ms(1000);
   
    }
}