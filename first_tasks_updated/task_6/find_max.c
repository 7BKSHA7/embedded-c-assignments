#include "STD_TYPES.h"

u8 find_max(u8 arr[], u8 size)
{
    u8 max = arr[0];
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        if (arr[counter] > max)
        {
            max = arr[counter];
        }
    }
    return max;
}
