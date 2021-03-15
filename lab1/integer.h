#ifndef INTEGER_H
#define INTEGER_H

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void* zero_int();
void* one_int();

void* minus_int(void* a);

void* sum_int (void* a, void* b);
void* mul_int (void* a, void* b);

Matrix* zero_matrix_int(size_t order);

Matrix* matrix_from_values_int(size_t order, void* values);

Matrix* generate_matrix_int(size_t order);
Matrix* fill_matrix_int(size_t order);
void matrix_output_int (Matrix *A, size_t order);

size_t compare_matrix_int (Matrix* Test, Matrix* Ans, size_t order);

#endif // INTEGER_H
