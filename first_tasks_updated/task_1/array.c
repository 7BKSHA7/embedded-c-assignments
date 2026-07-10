#include <stdio.h>
#include "STD_TYPES.h"

void array_scan(u8 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter character [%d]: ", counter + 1);
        scanf(" %c", &arr[counter]);
    }
}

void array_display(u8 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Character [%d]: %c\n", counter + 1, arr[counter]);
    }
}
