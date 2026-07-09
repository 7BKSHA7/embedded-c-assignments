#include <stdio.h>
#include "array.h"
#include "find_max.h"
// write a c function to find the max character in an array of integers
int main()
{
    char arr[5] = {0};
    array_scan(arr, 5);
    printf("The biggest character is: %c , and its ASCII value is: %d", find_max(arr, 5), find_max(arr, 5));
    return 0;
}