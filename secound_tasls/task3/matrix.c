#include <stdio.h>
#include "STD_TYPES.h"

void get_matrix(u16 matrix[matrix_size][matrix_size])
{
    u16 counter_small = 0 ;
    u16 counter_big   = 0 ;
    for (counter_big = 0 ; counter_big < matrix_size ; counter_big++)
    {
        for (counter_small = 0 ; counter_small < matrix_size ; counter_small++)
        {
            printf("please enter the matrix numbers [%hd][%hd] : " , counter_big , counter_small);
            scanf("%hd" , &matrix[counter_big][counter_small]);
        }
    }

}

void print_matrix    (u16 matrix[matrix_size][matrix_size])
{
    u16 counter_small = 0 ;
    u16 counter_big   = 0 ;
    for (counter_big = 0 ; counter_big < matrix_size ; counter_big++)
    {
        for (counter_small = 0 ; counter_small < matrix_size ; counter_small++)
        {
            if(counter_small == 2)
            {
                printf("%hd " , matrix[counter_big][counter_small]);
                printf("\n");
            }
            else 
            {
                printf("%hd " , matrix[counter_big][counter_small]);
            }
        }
    }

}


u16 sum_main_diagonal(u16 matrix[matrix_size][matrix_size])
{
    u16 counter_small = 0 ;
    u16 counter_big   = 0 ;
    u16 sum = 0 ;
    for (counter_big = 0 ; counter_big < matrix_size ; counter_big++)
    {
        for (counter_small = 0 ; counter_small < matrix_size ; counter_small++)
        {
            if (counter_big == counter_small)
            {
                sum += matrix[counter_small][counter_big];
            }
        }
    }
    return sum;
}
// note : to get index use modlous to get colum use divide !!
void serch_element   (u16 * matrix , u16 target)
{
    u8 index = 0 ;
    for (index = 0; index < (matrix_size * matrix_size) ; index++)
    {
        if (*matrix == target)
        {
            printf("found at row[%hd] , column [%hd]" , (index % matrix_size) + 1 , (index / matrix_size) + 1);
            break;
        }
        else 
        {
            matrix++;
        }
    }

}

