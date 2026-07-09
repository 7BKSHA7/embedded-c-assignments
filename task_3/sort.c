#include <stdio.h>

void sort(short int arr[] , char size)
{
    char counter_small = 0;
    char counter_big = 0;
    char temp = 0;
    for (counter_small = 0; counter_small < size - 1; counter_small++)
    {
        for(counter_big = 0; counter_big < size - 1 - counter_small; counter_big++)
        {
            if (arr[counter_big] > arr[counter_big + 1])
            {
                temp = arr[counter_big ];
                arr[counter_big] = arr[counter_big + 1];
                arr[counter_big + 1] = temp;
            }
        }
    }
}
