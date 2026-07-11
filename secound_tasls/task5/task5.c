#include <stdio.h>
#include "STD_TYPES.h"
#include "math.h"


int main ()
{
    u32 result = 0;
    u16 base = 0 ;
    u16 exponant = 0 ;
    u16 number = 0 ;
    printf("please enter the base: ");
    scanf(" %hd" , &base);
    printf("\nplease enter the exponant: ");
    scanf(" %hd" , &exponant);
    result = power(5,3);
    printf("\nthe result = %ld\n" , result);
    printf("enter a number to sum its digits : ");
    scanf("%hd" , &number);
    result = sum_digits(number);
    printf("\nthe result = %hd\n" , result);

}