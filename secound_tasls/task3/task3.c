#include <stdio.h>
#include "STD_TYPES.h"
#include "matrix.h"

// matrix anaylzer
/*
    { 00 , 01 , 02 }
    { 10 , 11 , 12 }
    { 20 , 21 , 22 }
    u16 matrix [matrix_size][matrix_size] = {{1,2,3},{4,5,6},{7,8,9}};

*/

int main()
{
    u16 matrix [matrix_size][matrix_size] = {0};
    u16 serching_element = 0 ;
    
    get_matrix(matrix);
    printf("\n");
    print_matrix(matrix);
    printf("\n");
    printf("the sum of the main diagonal = %hd\n" , sum_main_diagonal(matrix));
    printf("enter the number you wanan serch for\n");
    scanf("%hd" , &serching_element);
    serch_element(&matrix[0][0] , serching_element);

}