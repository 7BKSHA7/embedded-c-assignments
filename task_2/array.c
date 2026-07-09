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

void array_display(short int arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("number [%d]: %hd\n", counter + 1, arr[counter]);
    }
}
