#include <stdio.h>
#include "sort.h"
#include "array.h"
#include "find_max.h"
// write a c function to find the max number with/witout sort in an array of integers
int main()
{
    short int arr[5] = {0};
    array_scan(arr, 5);
    printf("The max number is: %hd\n", find_max(arr, 5));
    sort(arr, 5);
    printf("The max number after sorting is: %hd\n", arr[4]);
    return 0;
}