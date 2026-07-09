#include <stdio.h>
#include "array.h"
#include "repeat.h"
// Function to see the repets of a specifc character in an array
int main()
{
    char arr[5] = {0};
    char num = 0;
    array_scan(arr, 5);
    printf("Enter a character to find its repeats: ");
    scanf(" %c", &num);
    printf("The character %c appears %d times in the array\n", num, find_repeats(arr, 5, num));
    return 0;
}