#include "STD_TYPES.h"

void convertarray(u8 arr[] , u16 size , u16 new_arr[])
{
    u16 counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        new_arr[counter] = (u16)arr[counter];
    }
}
