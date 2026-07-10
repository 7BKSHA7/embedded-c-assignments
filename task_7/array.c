#include <stdio.h>
#include "STD_TYPES.h"

void array_scan   (u8  arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter character [%d]: ", counter + 1);
        scanf(" %c", &arr[counter]);
    }
}

void display_array(u16 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("charter[%d]: %hhd\n", counter, arr[counter]);
    }
    printf("\n");
}

