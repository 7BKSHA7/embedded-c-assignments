#include <stdio.h>
#include "sort.h"
#include "array.h"
// sort an int array in ascending order and decedning order
int main()
{   
    const char size = 10;
    short int arr[size];
    array_scan(arr, size);
    printf("Array before sorting:\n");
    array_display(arr, size);
    printf("\n======================\n");
   
    sort_asc(arr, size);
    printf("Array after ascending sorting:\n");
    array_display(arr, size);
    printf("\n======================\n");
   
    sort_dec(arr, size);
    printf("Array after descending sorting:\n");
    array_display(arr, size);
    printf("\n======================\n");

    return 0; 
}

//done small waringing in counter is a differnt type than expected Wchar-subcripts idk how to solve