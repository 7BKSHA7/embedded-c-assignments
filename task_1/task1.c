#include <stdio.h>
#include "array.h"
#include "STD_TYPES.h"
// write a c function to scan and display a char array
#define ARRAY_SIZE 5

int main() {
    u8 arr[ARRAY_SIZE] = {0};
    array_scan(arr, ARRAY_SIZE);
    array_display(arr, ARRAY_SIZE   );
    return 0;
}

// done no errors