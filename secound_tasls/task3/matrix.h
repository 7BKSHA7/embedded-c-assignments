#ifndef _MATRIX_H_
#define _MATRIX_H_

#include "STD_TYPES.h"



u16 sum_main_diagonal(u16 matrix[matrix_size][matrix_size]);
void get_matrix      (u16 matrix[matrix_size][matrix_size]);
void print_matrix    (u16 matrix[matrix_size][matrix_size]);
void serch_element   (u16 * matrix , u16 target);

#endif 