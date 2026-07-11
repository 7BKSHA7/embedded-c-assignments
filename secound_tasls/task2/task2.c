#include <stdio.h>
#include "STD_TYPES.h"
#include "string_manip.h"

// string mainpulator using only pointers (no indexing)

#define size_array 10

int main()
{
    u8 string[size_array] = {0};
    printf("please enter a string : ");
    scanf(" %s" , string);
    modify_string(string);
    return 0;

}