#include <stdio.h>
#include "STD_TYPES.h"

void swap(u16 *a     , u16 *b)
{
    u16 temp = *a;
    *a = *b;
    *b = temp;
}

void sort(u16 *array , u16 size)
{
    u16 counter_1st =0;
    u16 counter_2nd =0;
    for (counter_1st = 0 ; counter_1st < size - 1; counter_1st++)
    {
        for (counter_2nd = 0 ; counter_2nd < size - 1 - counter_1st ; counter_2nd++)
        {
            if (array[counter_2nd+1] < array[counter_2nd])
            {
                swap(&array[counter_2nd+1] , &array[counter_2nd]);
            }
        }

    }
}


