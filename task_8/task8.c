#include <stdio.h>
#include "array.h"
#include "reverse.h"

int main()
{
    char char_arr[5];
    char reversed_char_arr[5];
    short int int_arr[5];
    short int reversed_int_arr[5];

    printf ("Enter 5 characters:\n");
    array_scan_charcter(char_arr, 5);
    reverse_char(char_arr, 5, reversed_char_arr);
    printf("\nReversed characters:\n");
    display_array_charter(reversed_char_arr, 5);

    printf ("\n=================\n");

    printf ("Enter 5 numbers:\n");
    array_scan_int(int_arr, 5);
    reverse_int(int_arr, 5, reversed_int_arr);
    printf("\nReversed numbers:\n");
    display_array_int(reversed_int_arr, 5);

    return 0;
}