#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

typedef struct Complex {
    int Re;
    int Im;
} Complex;

void* zero_complex() {
    Complex* zero = (Complex*)malloc(sizeof(Complex));
    zero->Re = 0;
    zero->Im = 0;
    return (void*)zero;
}

void* one_complex() {
    Complex* one = (Complex*)malloc(sizeof(Complex));
    one->Re = 1;
    one->Im = 0;
    return (void*)one;
}

void* sum_complex(void* a, void* b) {
    Complex* c = (Complex*)malloc(sizeof(Complex));
    c->Re = ((Complex*)a)->Re + ((Complex*)b)->Re;
    c->Im = ((Complex*)a)->Im + ((Complex*)b)->Im;
    return (void*)c;
}

void* mul_complex(void* a, void* b) {
    Complex* c = (Complex*)malloc(sizeof(Complex));
    c->Re = ((Complex*)a)->Re * ((Complex*)b)->Re - ((Complex*)a)->Im * ((Complex*)b)->Im;
    c->Im = ((Complex*)a)->Re * ((Complex*)b)->Im + ((Complex*)b)->Re * ((Complex*)a)->Im;
    return (void*)c;
}

void* minus_complex(void* a) {
    Complex* c = (Complex*)malloc(sizeof(Complex));
    c->Re = - ((Complex*)a)->Re;
    c->Im = - ((Complex*)a)->Im;
    return (void*)c;
}

Complex* generate_complex() {
    Complex* a = (Complex*)malloc(sizeof(Complex));
    a->Re = rand() % 12 - 6;
    a->Im = rand() % 12 - 6;
    //a->Re = rand() % 3 - 1;
    //a->Im = rand() % 3 - 1;
    return a;
}

Complex* fill_complex() {
    Complex* a = (Complex*)malloc(sizeof(Complex));
    int n = scanf("%d,%d", &a->Re, &a->Im);
    if (n <= 0) {
        getchar();
        a->Re = 0;
        a->Im = 0;
    }

    return a;
}

void output_complex (Complex* a) {
    if (a->Re != 0 && a->Im > 0 && a->Im != 1) printf("%d+%di", a->Re, a->Im);
    if (a->Re == 0 && a->Im > 0 && a->Im != 1) printf("%di", a->Im);
    if (a->Re != 0 && a->Im == 1) printf("%d+i", a->Re);
    if (a->Re == 0 && a->Im == 1) printf("i");

    if (a->Re != 0 && a->Im == 0) printf("%d", a->Re);
    if (a->Re == 0 && a->Im == 0) printf("0");

    if (a->Re != 0 && a->Im < 0 && a->Im != -1) printf("%d%di", a->Re, a->Im);
    if (a->Re == 0 && a->Im < 0 && a->Im != -1) printf("%di", a->Im);
    if (a->Re != 0 && a->Im == -1) printf("%d-i", a->Re);
    if (a->Re == 0 && a->Im == -1) printf("-i");
}

Matrix* zero_matrix_complex(size_t order) {
    return zero_matrix(order, sizeof (Complex), zero_complex(), one_complex(), (void*)minus_complex ,(void*)sum_complex, (void*)mul_complex);
}

Matrix* generate_matrix_complex(size_t order) {
    Matrix *A = zero_matrix(order, sizeof (Complex), zero_complex(), one_complex(), (void*)minus_complex, (void*)sum_complex, (void*)mul_complex);
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            set_element(A, i, j, generate_complex());
        }
    }
    return A;
}

Matrix* fill_matrix_complex(size_t order) {
    Matrix *A = zero_matrix(order, sizeof (Complex), zero_complex(), one_complex(), (void*)minus_complex, (void*)sum_complex, (void*)mul_complex);
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            Complex* a = (Complex*)malloc(sizeof(Complex));
            int n = scanf("%d,%d", &a->Re, &a->Im);
            if (n <= 0) {
                getchar();
                --j;
            }
            else set_element(A, i, j, a);
        }
    }
    while(getchar() != '\n') {}
    return A;
}

void matrix_output_complex (Matrix *A, size_t order) {
    for(size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            printf("\t");
            output_complex (get_element(A, i, j));
        }
        printf("\n");
    }
    printf("\n");
}

size_t compare_complex(Complex* a, Complex* b) {
    if (a->Re == b->Re && a->Im == b->Im) return 1;
    else return 0;
}

size_t compare_matrix_complex (Matrix* A, Matrix* B, size_t order) {
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            if (!compare_complex(get_element(A, i, j), get_element(B, i, j))) return 0;
        }
    }
    return 1;
}

Complex* get_complex (int Re, int Im) {
    Complex* a = malloc(sizeof(Complex));
    a->Re = Re;
    a->Im = Im;
    return a;
}

Matrix* matrix_from_values_complex(size_t order, int* values_Re, int* values_Im) {
    Matrix *A = zero_matrix(order, sizeof (Complex), zero_complex(), one_complex(), (void*)minus_complex, (void*)sum_complex, (void*)mul_complex);
    for (size_t i = 0; i < order; ++i) {
        for (size_t j = 0; j < order; ++j) {
            set_element(A, i, j, get_complex(*(values_Re + i * order + j), (*(values_Im + i * order + j))));
        }
    }
    return A;
}


