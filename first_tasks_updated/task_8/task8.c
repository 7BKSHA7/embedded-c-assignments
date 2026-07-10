#include <stdio.h>
#include "array.h"
#include "reverse.h"
#include "STD_TYPES.h"

#define size_array 5

int main()
{
    u8 char_arr[size_array];
    u8 reversed_char_arr[size_array];
    u16 int_arr[size_array];
    u16 reversed_int_arr[size_array];

    printf ("Enter 5 characters:\n");
    array_scan_charcter(char_arr, size_array);
    reverse_char(char_arr, size_array , reversed_char_arr);
    printf("\nReversed characters:\n");
    display_array_charter(reversed_char_arr, size_array);

    printf ("\n=================\n");

    printf ("Enter 5 numbers:\n");
    array_scan_int(int_arr, size_array);
    reverse_int(int_arr, size_array, reversed_int_arr);
    printf("\nReversed numbers:\n");
    display_array_int(reversed_int_arr, size_array);

    return 0;
}