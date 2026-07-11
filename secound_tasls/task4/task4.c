#include <stdio.h>
#include "STD_TYPES.h"
#include "array.h"
#include "sort.h"

//array sorter and swaper

int main()
{
    u16 array[array_size] = {0};
    array_scan(array , array_size);
    printf("array before sorting : \n");
    array_display(array , array_size);
    printf("array after sorting : \n");
    sort(array , array_size);
    array_display(array , array_size);
}