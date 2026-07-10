#include <stdio.h>
#include "array.h"
#include "find_max.h"
#include "STD_TYPES.h"

#define size 5
// write a c function to find the max character in an array of integers
int main()
{
    printf("enter 5 charcters to see the maximum out of them\n");
    u8 arr[size] = {0};
    array_scan(arr, size);
    printf("The biggest character is: %c , and its ASCII value is: %d", find_max(arr, size), find_max(arr, size));
    return 0;
}