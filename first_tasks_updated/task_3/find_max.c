#include "STD_TYPES.h"

u16 find_max(u16 arr[], u8 size)
{
    u16 max = arr[0];
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
