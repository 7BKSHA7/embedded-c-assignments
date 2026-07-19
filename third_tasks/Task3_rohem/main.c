#include <stdint.h>
#include "reg_map.h"
#include "Bit_math.h"

#include "button_Config.h"
#include "button_Private.h"
#include "button_interface.h"

// Task 3 Button Task  at mon 
//     Write C code to check on the PushButton State 
//     - if Pressed Led On 
//     - if Not pressed Led Off  
//         ConnectionType: 
//             1- Button -> PullDown Res //press=1
//             2- Led -> SinkConnection //pin=0 to ledon

void main()
{
    ClearBit(DDRA_Reg,1);
    SetBit(DDRA_Reg,2);   
    uint8_t switch_state = 0 ;

    while(1)
    {
        switch_state = ReadBit(PINA_Reg,1);
        if(switch_state==1)
        {
            ClearBit(PORTA_Reg,2);
        }
        else
        {
            SetBit(PORTA_Reg,2);
        }
    }
}