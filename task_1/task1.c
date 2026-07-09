#include <stdio.h>
#include "array.h"
// write a c function to scan and display a char array
int main() {
    char arr[5] = {0};
    array_scan(arr, 5);
    array_display(arr, 5);
    return 0;
}

// done no errors