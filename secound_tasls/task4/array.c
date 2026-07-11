#include <stdio.h>
#include "STD_TYPES.h"

void array_scan(u16 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter number [%hd]: ", counter + 1);
        scanf("%hd", &arr[counter]);
    }
}

void array_display(u16 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("nubmer [%hd]: %hd\n", counter + 1, arr[counter]);
    }
}
