#include <stdio.h>
void array_scan(char arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter character [%d]: ", counter + 1);
        scanf(" %c", &arr[counter]);
    }
}

