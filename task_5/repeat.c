#include <stdio.h>
char find_repeats(char arr[], int size , char num)
{
    int counter = 0;
    char repeats = 0;
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