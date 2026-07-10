#include <stdio.h>
#include "array.h"
#include "repeat.h"
#include "STD_TYPES.h"

#define size 5
// Function to see the repets of a specifc character in an array
int main()
{
    u8 arr[size] = {0};
    u8 num = 0;
    printf("enter 5 charcters to see a specifc repeat : \n");
    array_scan(arr, size);
    printf("Enter a character to find its repeats: ");
    scanf(" %c", &num);
    printf("The character %c appears %d times in the array\n", num, find_repeats(arr, size, num));
    return 0;
}