#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>

struct Matrix;
typedef struct Matrix Matrix;

Matrix* zero_matrix (size_t order, size_t element_size, void* zero, void* one, void* (*minus) (void*), void* (*sum) (void*, void*), void* (*mul) (void*, void*));
Matrix* matrix_from_values (size_t order, size_t element_size, void* values, void* zero, void* one, void* (*minus) (void*), void* (*sum) (void*, void*), void* (*mul) (void*, void*));

void clean_memory (Matrix *A);
Matrix* copy (Matrix *A);

void set_element(Matrix* A, size_t i, size_t j, void* value);
void* get_element(Matrix* A, size_t i, size_t j);

Matrix* matrix_sum (Matrix *A, Matrix *B);
Matrix* matrix_scalar (Matrix *A, void *scalar);
Matrix* matrix_mul (Matrix *A, Matrix *B);
Matrix* matrix_transpose (Matrix *A);
Matrix* complement (Matrix *A, size_t col);
void* matrix_det (Matrix *A);

#endif // MATRIX_H
