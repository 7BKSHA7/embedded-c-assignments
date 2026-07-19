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
            DDRA_Reg=high;
            break;
        case groupB:   
            DDRB_Reg=high; 
            break;
        case groupC: 
            DDRC_Reg=high; 
            break;
        case groupD: 
            DDRD_Reg=high; 
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
    
    switch(GroupName){
        case groupA: 
            PORTA_Reg=number[Number]; 
            break;
        case groupB: 
            PORTB_Reg=number[Number]; 
            break;
        case groupC: 
            PORTC_Reg=number[Number]; 
            break;
        case groupD: 
            PORTD_Reg=number[Number]; 
            break;
    }

}

void DisplayRang(uint8_t GroupName,uint8_t Start,uint8_t End){

    for(uint8_t counter=Start;counter<=End;counter++){
        
        DisplayNumber(GroupName,counter);
        _delay_ms(1000);
   
    }
}