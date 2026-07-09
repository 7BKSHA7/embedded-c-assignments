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

void display_array(short int arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("charter[%d]: %hhd\n", counter, arr[counter]);
    }
    printf("\n");
}

