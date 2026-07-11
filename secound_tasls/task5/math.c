#include <stdio.h>
#include "STD_TYPES.h"
/*
    base ^ expoant
    if ex 3 
    base * base * base 
    for ... ex-- 
*/
u32 power(u16 base , u16 exponant) // base ^ exponat --> base * base 3dd el times of expoants
{
    u32 static result = 1 ;  // must be static to be accesed each time its called not created again (rest to 1)
    if (exponant == 0)
    {
        return result ;
    }
    else
    {
        // printf("test");
        exponant--;
        result = result * base ;
        power(base , exponant);
    }
}
/*
    idea maybe
    number %10 --> to get first digit
    number /10 -- to remove the first digit
    repeat until ??? maybe get to 0 
*/
u32 sum_digits(u16 n) // this was hard 
{
    if (n < 10)
    {
        return n;
    }
    u32 sum = sum_digits(n / 10);
    sum += n % 10;

    return sum;
}