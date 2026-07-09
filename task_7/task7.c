#include <stdio.h>
#include "array.h"
#include "converter.h"

int main()
{
    char arr[10];
    short int new_arr[10];
    int size = 10;

    array_scan(arr, size);
    convertarray(arr, size, new_arr);
    display_array(new_arr, size);

    return 0;
}