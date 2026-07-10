#include <stdio.h>
#include "sort.h"
#include "array.h"
#include "STD_TYPES.h"

#define size 10
// sort an int array in ascending order and decedning order
int main()
{   
    printf("please enter an array for it to be sorted\n\n");
    u16 arr[size];
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
