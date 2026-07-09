#include <stdio.h>
#include "array.h"
#include "repeat.h"
// Function to see the repets of a specifc number in an array
int main()
{
    short int arr[5] = {0};
    short int num = 0;
    array_scan(arr, 5);
    printf("Enter a number to find its repeats: ");
    scanf("%hd", &num);
    printf("The number %hd appears %d times in the array\n", num, find_repeats(arr, 5, num));
    return 0;
}