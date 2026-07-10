#include <stdio.h>
#include "array.h"
#include "converter.h"
#include "STD_TYPES.h"

int main()
{
    u8 arr[10];
    u16 new_arr[10];
    u16 size = 10;
    printf("Enter 10 elements of the array:\n");
    array_scan(arr, size);
    convertarray(arr, size, new_arr);
    display_array(new_arr, size);

    return 0;
}