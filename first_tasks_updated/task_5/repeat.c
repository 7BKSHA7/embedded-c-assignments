#include <stdio.h>
#include "STD_TYPES.h"

u16 find_repeats(u8 arr[], u16 size , u8 num)
{
    u16 counter = 0;
    u16 repeats = 0;
    for (counter = 0; counter < size; counter++)
    {
        if (arr[counter] == num)
        {
            repeats++;
        }
    }
    if (repeats == 0)
    {
        return -1;
    }
    else
    {
        return repeats;
    }
}