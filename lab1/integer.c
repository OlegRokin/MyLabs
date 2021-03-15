#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void* zero_int() {
    int* zero = (int*)malloc(sizeof(int));
    *(int*)zero = 0;
    return (void*)zero;
}

void* one_int() {
    int* one = (int*)malloc(sizeof(int));
    *(int*)one = 1;
    return (void*)one;
}

void* sum_int(void* a, void* b) {
    int* c = (int*)malloc(sizeof(int));
    *(int*)c = *(int*)a + *(int*)b;
    return (void*)c;
}

void* mul_int(void* a, void* b) {
    int* c = (int*)malloc(sizeof(int));
    *(int*)c = *(int*)a * *(int*)b;
    return (void*)c;
}

void* minus_int(void* a) {
    int* c = (int*)malloc(sizeof(int));
    *(int*)c = - (*(int*)a);
    return (void*)c;
}

Matrix* zero_matrix_int(size_t order) {
    return zero_matrix(order, sizeof (int), zero_int(), one_int(), (void*)minus_int ,(void*)sum_int, (void*)mul_int);
}

Matrix* matrix_from_values_int(size_t order, void* values) {
    return matrix_from_values(order, sizeof (int), values, zero_int(), one_int(), (void*)minus_int, (void*)sum_int, (void*)mul_int);
}

Matrix* generate_matrix_int(size_t order) {
    Matrix *A = zero_matrix(order, sizeof (int), zero_int(), one_int(), (void*)minus_int, (void*)sum_int, (void*)mul_int);
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            int a = rand() % 21 - 10;
            //int a = rand() % 2;
            set_element(A, i, j, &a);
        }
    }
    return A;
}

Matrix* fill_matrix_int(size_t order) {
    Matrix *A = zero_matrix(order, sizeof (int), zero_int(), one_int(), (void*)minus_int, (void*)sum_int, (void*)mul_int);
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            int a;
            int n = scanf("%d", &a);
            if (n <= 0) {
                getchar();
                --j;
            }
            else set_element(A, i, j, &a);
        }
    }
    while(getchar() != '\n') {}
    return A;
}

void matrix_output_int (Matrix *A, size_t order) {
    for(size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            printf("\t%d", *(int*)get_element(A, i, j));
        }
        printf("\n");
    }
    printf("\n");
}

size_t compare_matrix_int (Matrix* A, Matrix* B, size_t order) {
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            if (*(int*)get_element(A, i, j) != *(int*)get_element(B, i, j)) return 0;
        }
    }
    return 1;
}
