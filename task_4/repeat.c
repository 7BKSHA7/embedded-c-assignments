#include <stdio.h>
short int find_repeats(short int arr[], int size , short int num)
{
    int counter = 0;
    short int repeats = 0;
    for (counter = 0; counter < size; counter++)
    {
        if (arr[counter] == num)
        {
            repeats++;
        }
    }
    if (repeats == 0)
    {
        return -1;
    }
    else
    {
        return repeats;
    }
}