#include <stdio.h>
#include "sort.h"
#include "array.h"
#include "find_max.h"
#include "STD_TYPES.h"

#define array_size 5
// write a c function to find the max number with/witout sort in an array of integers
int main()
{
    printf("enter 5 numbers to see the maximum out of them\n");
    u16 arr[array_size] = {0};
    array_scan(arr, array_size);
    printf("The max number is: %hd\n", find_max(arr, array_size));
    sort(arr, array_size);
    printf("The max number after sorting is: %hd\n", arr[4]);
    return 0;
}