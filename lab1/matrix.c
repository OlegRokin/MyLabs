#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "matrix.h"

typedef struct Matrix {
    size_t order;
    size_t element_size;
    void* elements;

    void* zero;
    void* one;

    void* (*minus) (void*); // C->minus(C->one);

    void* (*sum) (void*, void*);
    void* (*mul) (void*, void*);
} Matrix;

void create_memory (Matrix *A) {
    A->elements = malloc (A->order * A->order * A->element_size);
}

Matrix* zero_matrix (size_t order, size_t element_size, void* zero, void* one, void* (*minus) (void*), void* (*sum) (void*, void*), void* (*mul) (void*, void*)) {
    Matrix *O = malloc(sizeof(Matrix));
    O->element_size = element_size;
    O->zero = zero;
    O->one = one;
    O->minus = minus;
    O->sum = sum;
    O->mul = mul;
    O->order = order;
    create_memory(O);

    for(size_t i = 0; i < O->order; ++i) {
        for (size_t j = 0; j < O->order; ++j) {
            memcpy(O->elements + i * O->order * O->element_size + j * O->element_size, O->zero, O->element_size);
        }
    }

    return O;
}

Matrix* matrix_from_values (size_t order, size_t element_size, void* values, void* zero, void* one, void* (*minus) (void*), void* (*sum) (void*, void*), void* (*mul) (void*, void*)) {
    Matrix *O = zero_matrix(order, element_size, zero, one, minus, sum, mul);
    memcpy(O->elements, values, O->order * O->order * O->element_size);

    return O;
}

void clean_memory (Matrix *A) { // освобождение памяти
    free(A->elements);
    free(A->zero);
    free(A->one);
    free(A);
}

Matrix* copy (Matrix *A) {  // создани копии матрицы
    int8_t* zero = malloc(A->element_size);
    memcpy(zero, A->zero, A->element_size);
    int8_t* one = malloc(A->element_size);
    memcpy(one, A->one, A->element_size);
    Matrix *B = matrix_from_values(A->order, A->element_size, A->elements,  zero, one, A->minus, A->sum, A->mul);

    return B;
}

void set_element (Matrix* A, size_t i, size_t j, void* value) { // "ввод" элемента
    int8_t* pos = (int8_t*)A->elements + i * A->order * A->element_size + j * A->element_size;
    memcpy(pos, value, A->element_size);
}

void* get_element (Matrix* A, size_t i, size_t j) { // "вывод" элемента
    return A->elements + i * A->order * A->element_size + j * A->element_size;
}

Matrix* matrix_sum (Matrix *A, Matrix *B) { // сложение матриц
    Matrix* C = copy(A);
    for(size_t i = 0; i < A->order; ++i) {
        for (size_t j = 0; j < A->order; ++j) {
            int8_t* sum = C->sum(get_element(A, i, j), get_element(B, i, j));   // C[i][j] = A[i][j] + B[i][j]
            set_element(C, i, j, sum);
            free(sum);
        }
    }

    return C;
}

Matrix* matrix_scalar (Matrix *A, void *scalar) {   // умножение на число
    Matrix *C = copy(A);
    for(size_t i = 0; i < A->order; ++i) {
        for (size_t j = 0; j < A->order; ++j) {
            int8_t* sc_mul = C->mul(get_element(A, i, j), scalar);
            set_element(C, i, j, sc_mul);
            free(sc_mul);
        }
    }

    return C;
}

Matrix* matrix_mul (Matrix *A, Matrix *B) {    // произведение матриц
    int8_t* zero = malloc(A->element_size);
    memcpy(zero, A->zero, A->element_size);
    int8_t* one = malloc(A->element_size);
    memcpy(one, A->one, A->element_size);
    Matrix *C = zero_matrix(A->order, A->element_size, zero, one, A->minus, A->sum, A->mul);
    for(size_t i = 0; i < A->order; ++i) {
        for (size_t j = 0; j < A->order; ++j) {
            for (size_t k = 0; k < A->order; ++k) {
                int8_t* m = C->mul(get_element(A, i, k), get_element(B, k, j)); // C[i][j] = C[i][j] + A[i][k] * B[k][j];
                int8_t* s = C->sum(get_element(C, i, j), m);
                set_element(C, i, j, s);
                free(s);
                free(m);
            }
        }
    }

    return C;
}

Matrix* matrix_transpose (Matrix *A) {  // транспонирование матрицы
    int8_t* zero = malloc(A->element_size);
    memcpy(zero, A->zero, A->element_size);
    int8_t* one = malloc(A->element_size);
    memcpy(one, A->one, A->element_size);
    Matrix *C = zero_matrix(A->order, A->element_size, zero, one, A->minus, A->sum, A->mul);
    for(size_t i = 0; i < A->order; ++i) {
        for (size_t j = 0; j < A->order; ++j) {
            set_element(C, i, j, get_element(A, j, i));
        }
    }

    return C;
}

Matrix* complement (Matrix *A, size_t col) {    // алгебраическое дополнение
    int8_t* zero = malloc(A->element_size);
    memcpy(zero, A->zero, A->element_size);
    int8_t* one = malloc(A->element_size);
    memcpy(one, A->one, A->element_size);
    Matrix *a = zero_matrix(A->order - 1, A->element_size, zero, one, A->minus, A->sum, A->mul);

    for (size_t i = 0; i < a->order; ++i) {
        for (size_t j = 0, k = 0; j < a->order; ++j, ++k) {
            if (j == col) ++k;
            set_element(a, i, j, get_element(A, i + 1, k)); // a[i][j] = A[i + 1][k]
        }
    }
    return a;
}

void* matrix_det (Matrix *A) {  // определитель матрицы
    void* det = malloc(A->element_size);
    memcpy(det, A->zero, A->element_size);
    if (A->order == 1) {
        memcpy(det, get_element(A, 0, 0), A->element_size);
    }
    else {
        // det = det + pow(-1, 2 + i) * A->elements[0][i] * matrix_det (complement(A, i));
        for (size_t i = 0; i < A->order; ++i) {
            void* degree = malloc(A->element_size);
            if ((2 + i) % 2 == 0) memcpy(degree, A->one, A->element_size);
            else {
                int8_t* p = A->minus(A->one);
                memcpy(degree, p, A->element_size);
                free(p);
            }

        Matrix* w = complement(A, i);
        int8_t* p = matrix_det(w);
        int8_t* m = A->mul(get_element(A, 0, i), p);
        int8_t* s = A->mul(degree, m);
        int8_t* n = A->sum(det, s);
        memcpy(det, n, A->element_size);
        free(s);
        free(n);
        free(p);
        free(w);
        free(m);
        }
    }

    return (void*)det;
}
