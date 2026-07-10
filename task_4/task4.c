#include <stdio.h>
#include "array.h"
#include "repeat.h"
#include "STD_TYPES.h"

#define size 5
// Function to see the repets of a specifc number in an array
int main()
{
    u16 arr[size] = {0};
    u16 num = 0;
    printf("enter 5 numbers to see a specifc repeat : \n");
    array_scan(arr, size);
    printf("Enter a number to find its repeats: ");
    scanf("%hd", &num);
    printf("The number %hd appears %d times in the array\n", num, find_repeats(arr, size, num));
    return 0;
}