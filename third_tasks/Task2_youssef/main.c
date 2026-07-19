#include "lED/Led_Interface.h"
#include "lED/Led_Config.h"
#include "lED/Led_Private.h"

int main(void)
{
    Led_Init(GroupA, 0);
    
    while(1)
    {
        Led_on(GroupA, 0, SinkConnection);
    }
    
    return 0;
}