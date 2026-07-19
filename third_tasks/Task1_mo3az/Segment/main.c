#include <stdint.h>
#include <util/delay.h>

#include "Segment_Interface.h"
#include "Segment_Private.h"
#include "Segment_config.h"


#include "../LIB/BIT_MATH.h"
#include "../LIB/REG_MAP.h"

void main(){
    
    Segment_Init(groupA);

    DisplayRang(groupA,0,9);

}