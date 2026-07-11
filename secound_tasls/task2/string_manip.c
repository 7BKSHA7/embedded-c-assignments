#include "STD_TYPES.h"
#include <stdio.h>


void modify_string(u8 *str)
{
    u8 * intial_postion = str;
    u8 counter = 0 ;
    while (*str != '\0')
    {
        if (*str == 'a' ||*str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u')
        {
            counter ++ ;
        }

        if (*str < 123 && *str > 96)
        {
            *str = *str - 32;

        }

        str++;
    }
    printf("modfied string : ");
    for ( str = intial_postion; *str != '\0' ; str++)
    {
        printf("%c" , *str);
    }
    printf("\nNo of vowls = %hhd" , counter);
}
