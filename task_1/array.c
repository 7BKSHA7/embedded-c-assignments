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

void array_display(char arr[] , int size)
{
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        printf("Character [%d]: %c\n", counter + 1, arr[counter]);
    }
}
