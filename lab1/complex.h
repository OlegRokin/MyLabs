#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

struct Complex;
typedef struct Complex Complex;

void* zero_complex();
void* one_complex();

void* minus_complex(void* a);

void* sum_complex (void* a, void* b);
void* mul_complex (void* a, void* b);

Complex* generate_complex();
Complex* fill_complex();
void output_complex (Complex* a);

Matrix* zero_matrix_complex(size_t order);

Matrix* generate_matrix_complex(size_t order);
Matrix* fill_matrix_complex(size_t order);
void matrix_output_complex (Matrix *A, size_t order);

size_t compare_complex(Complex* a, Complex* b);
size_t compare_matrix_complex (Matrix* Test, Matrix* Ans, size_t order);
Complex* get_complex (int Re, int Im);
Matrix* matrix_from_values_complex(size_t order, int* values_Re, int* values_Im);

#endif // COMPLEX_H
