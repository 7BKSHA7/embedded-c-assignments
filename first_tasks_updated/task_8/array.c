#include <stdio.h>
#include "STD_TYPES.h"

void array_scan_charcter(u8 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter character [%d]: ", counter + 1);
        scanf(" %c", &arr[counter]);
    }
}

void array_scan_int(u16 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter number [%d]: ", counter + 1);
        scanf(" %hd", &arr[counter]);
    }
}

void display_array_charter(u8 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("character[%d]: %c\n", counter, arr[counter]);
    }
    printf("\n");
}

void display_array_int(u16 arr[] , u16 size)
{
    u16 counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("number[%d]: %hd\n", counter, arr[counter]);
    }
    printf("\n");
}

