#include <stdio.h>
void array_scan(short int arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter number [%d]: ", counter + 1);
        scanf("%hd", &arr[counter]);
    }
}

