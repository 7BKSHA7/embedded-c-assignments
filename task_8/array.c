#include <stdio.h>
void array_scan_charcter(char arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter character [%d]: ", counter + 1);
        scanf(" %c", &arr[counter]);
    }
}

void array_scan_int(short int arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Enter number [%d]: ", counter + 1);
        scanf(" %hd", &arr[counter]);
    }
}

void display_array_charter(char arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("character[%d]: %c\n", counter, arr[counter]);
    }
    printf("\n");
}

void display_array_int(short int arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("number[%d]: %hd\n", counter, arr[counter]);
    }
    printf("\n");
}

