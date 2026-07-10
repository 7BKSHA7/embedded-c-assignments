#include <stdio.h>
#include "STD_TYPES.h"

void sort_dec(u16 arr[] , u8 size)
{
    u8 counter_small = 0;
    u8 counter_big = 0;
    u8 temp = 0;

    for (counter_small = 0; counter_small < size; counter_small++)
    {
        for(counter_big = 0; counter_big < size - 1 - counter_small; counter_big++)
        {
            if (arr[counter_big] < arr[counter_big + 1])
            {
                temp = arr[counter_big ];
                arr[counter_big] = arr[counter_big + 1];
                arr[counter_big + 1] = temp;
            }
        }
    }
}
    
void sort_asc(u16 arr[] , u8 size)
{
    u8 counter_small = 0;
    u8 counter_big = 0;
    u8 temp = 0;
    
    for (counter_small = 0; counter_small < size - 1; counter_small++)
    {
        for(counter_big = 0; counter_big < size - 1 - counter_small; counter_big++)
        {
            if (arr[counter_big] > arr[counter_big + 1])
            {
                temp = arr[counter_big ];
                arr[counter_big] = arr[counter_big + 1];
                arr[counter_big + 1] = temp;
            }
        }
    }
}
