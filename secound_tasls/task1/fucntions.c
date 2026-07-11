#include <stdio.h>
#include "STD_TYPES.h"


void processTransaction (f32 * balance , u16 type , u16 value)
{
    static u16 number_of_transactions = 0;

    if (type == 1)
    {
        *balance +=value;
        number_of_transactions++;
        printf("transcution complted, new balance = %.2f\n" , *balance);
    } 
    else if (type == 2)
    {
        if (*balance >= value)
        {
            *balance -=value;
            number_of_transactions++;
            printf("transcution complted, new balance = %.2f\n" , *balance);
        }
        else
        {
            printf("\nsorry the amount you want to withdraw is not enough\n");
            printf("current balance = %.2f\n", *balance);
        }
    }
    else if (type == 3)
    {
        printf("current balance = %.2f\n", *balance);
        number_of_transactions++;
    }
    else if (type == 4)
    {
        printf("the number of transactions done : %hd\n" , number_of_transactions);   
    }
}

