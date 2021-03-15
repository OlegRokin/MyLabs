#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "matrix.h"
#include "integer.h"
#include "complex.h"

size_t check_martrix_sum_int() {
    int elements_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elements_2[] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    Matrix* A = matrix_from_values_int(3, elements_1);
    //matrix_output_int(A, 3);
    Matrix* B = matrix_from_values_int(3, elements_2);
    //matrix_output_int(B, 3);

    Matrix* C = matrix_sum(A, B);
    //matrix_output_int(C, 3);

    int elements_3[] = {12, 14, 16, 18, 20, 22, 24, 26, 28};
    Matrix* Ans = matrix_from_values_int(3, elements_3); // верный результат
    //matrix_output_int(Ans, 3);

    size_t result = compare_matrix_int(C, Ans, 3);
    /*if (result) printf("Integer matrix sum: passed\n");
    else printf("Integer matrix sum: failed\n");*/

    clean_memory(A);
    clean_memory(B);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_sum_complex() {
    int elements_1_Re[] = {1, 1, 0, 0};
    int elements_1_Im[] = {1, 0, 1, 0};
    Matrix* A = matrix_from_values_complex(2, elements_1_Re, elements_1_Im);
    //matrix_output_complex(A, 2);

    int elements_2_Re[] = {0, 0, 1, 1};
    int elements_2_Im[] = {0, 1, 0, 1};
    Matrix* B = matrix_from_values_complex(2, elements_2_Re, elements_2_Im);
    //matrix_output_complex(B, 2);

    Matrix* C = matrix_sum(A, B);
    //matrix_output_complex(C, 2);

    int elements_3_Re[] = {1, 1, 1, 1};
    int elements_3_Im[] = {1, 1, 1, 1};
    Matrix* Ans = matrix_from_values_complex(2, elements_3_Re, elements_3_Im); // верный результат
    //matrix_output_complex(Ans, 2);

    size_t result = compare_matrix_int(C, Ans, 2);
    /*if (result) printf("Complex matrix sum: passed\n");
    else printf("Complex matrix sum: failed\n");*/

    clean_memory(A);
    clean_memory(B);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_mul_int() {
    int elements_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elements_2[] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    Matrix* A = matrix_from_values_int(3, elements_1);
    //matrix_output_int(A, 3);
    Matrix* B = matrix_from_values_int(3, elements_2);
    //matrix_output_int(B, 3);

    Matrix* C = matrix_mul(A, B);
    //matrix_output_int(C, 3);

    int elements_3[] = {90, 96, 102, 216, 231, 246, 342, 366, 390};
    Matrix* Ans = matrix_from_values_int(3, elements_3); // верный результат
    //matrix_output_int(Ans, 3);

    size_t result = compare_matrix_int(C, Ans, 3);
    /*if (result) printf("Integer matrix multiplication: passed\n");
    else printf("Integer matrix multiplication: failed\n");*/

    clean_memory(A);
    clean_memory(B);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_mul_complex() {
    int elements_1_Re[] = {1, 1, 0, 0};
    int elements_1_Im[] = {1, 0, 1, 0};
    Matrix* A = matrix_from_values_complex(2, elements_1_Re, elements_1_Im);
    //matrix_output_complex(A, 2);

    int elements_2_Re[] = {0, 0, 1, 1};
    int elements_2_Im[] = {0, 1, 0, 1};
    Matrix* B = matrix_from_values_complex(2, elements_2_Re, elements_2_Im);
    //matrix_output_complex(B, 2);

    Matrix* C = matrix_mul(A, B);
    //matrix_output_complex(C, 2);

    int elements_3_Re[] = {1, 0, 0, -1};
    int elements_3_Im[] = {0, 2, 0, 0};
    Matrix* Ans = matrix_from_values_complex(2, elements_3_Re, elements_3_Im); // верный результат
    //matrix_output_complex(Ans, 2);

    size_t result = compare_matrix_int(C, Ans, 2);
    /*if (result) printf("Complex matrix multiplication: passed\n");
    else printf("Complex matrix multiplication: failed\n");*/

    clean_memory(A);
    clean_memory(B);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_scalar_int() {
    int elements_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix* A = matrix_from_values_int(3, elements_1);
    //matrix_output_int(A, 3);

    int scalar = 2;
    Matrix* C = matrix_scalar(A, &scalar);
    //matrix_output_int(C, 3);

    int elements_2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    Matrix* Ans = matrix_from_values_int(3, elements_2); // верный результат
    //matrix_output_int(Ans, 3);

    size_t result = compare_matrix_int(C, Ans, 3);
    /*if (result) printf("Integer scalar multiplication: passed\n");
    else printf("Integer scalar multiplication: failed\n");*/

    clean_memory(A);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_scalar_complex() {
    int elements_1_Re[] = {1, 1, 0, 0};
    int elements_1_Im[] = {1, 0, 1, 0};
    Matrix* A = matrix_from_values_complex(2, elements_1_Re, elements_1_Im);
    //matrix_output_complex(A, 2);

    Complex* scalar = get_complex(0, 1);
    Matrix* C = matrix_scalar(A, scalar);
    //matrix_output_complex(C, 2);

    int elements_3_Re[] = {-1, 0, -1, 0};
    int elements_3_Im[] = {1, 1, 0, 0};
    Matrix* Ans = matrix_from_values_complex(2, elements_3_Re, elements_3_Im); // верный результат
    //matrix_output_complex(Ans, 2);

    size_t result = compare_matrix_int(C, Ans, 2);
    /*if (result) printf("Complex scalar multiplication: passed\n");
    else printf("Complex scalar multiplication: failed\n");*/

    clean_memory(A);
    clean_memory(C);
    clean_memory(Ans);
    free(scalar);

    return result;
}

size_t check_matrix_transpose_int() {
    int elements_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix* A = matrix_from_values_int(3, elements_1);
    //matrix_output_int(A, 3);

    Matrix* C = matrix_transpose(A);
    //matrix_output_int(C, 3);

    int elements_2[] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
    Matrix* Ans = matrix_from_values_int(3, elements_2); // верный результат
    //matrix_output_int(Ans, 3);

    size_t result = compare_matrix_int(C, Ans, 3);
    /*if (result) printf("Integer matrix transonation: passed\n");
    else printf("Integer matrix transonation: failed\n");*/

    clean_memory(A);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_transpose_complex() {
    int elements_1_Re[] = {1, 1, 0, 0};
    int elements_1_Im[] = {1, 0, 1, 0};
    Matrix* A = matrix_from_values_complex(2, elements_1_Re, elements_1_Im);
    //matrix_output_complex(A, 2);

    Matrix* C = matrix_transpose(A);
    //matrix_output_complex(C, 2);

    int elements_3_Re[] = {1, 0, 1, 0};
    int elements_3_Im[] = {1, 1, 0, 0};
    Matrix* Ans = matrix_from_values_complex(2, elements_3_Re, elements_3_Im); // верный результат
    //matrix_output_complex(Ans, 2);

    size_t result = compare_matrix_int(C, Ans, 2);
    /*if (result) printf("Complex matrix transonation: passed\n");
    else printf("Complex matrix transonation: failed\n");*/

    clean_memory(A);
    clean_memory(C);
    clean_memory(Ans);

    return result;
}

size_t check_matrix_det_int() {
    int elements_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix* A = matrix_from_values_int(3, elements_1);
    //matrix_output_int(A, 3);

    int* det = matrix_det(A);
    //printf("%d", *det);

    int Ans = 0; // верный результат
    //printf("%d", Ans);

    size_t result;
    if (*det == Ans) {
        result = 1;
        //printf("Integer matrix determinant: passed\n");
    }
    else {
        result = 0;
        //printf("Integer matrix determinant: failed\n");
    }

    clean_memory(A);
    free(det);

    return result;
}

size_t check_matrix_det_complex() {
    int elements_1_Re[] = {1, 1, 0, 0};
    int elements_1_Im[] = {1, 0, 1, 0};
    Matrix* A = matrix_from_values_complex(2, elements_1_Re, elements_1_Im);
    //matrix_output_complex(A, 2);

    Complex* det = matrix_det(A);
    //printf("%d", *det);

    Complex* Ans = get_complex(0, -1); // верный результат
    //printf("%d", Ans);

    size_t result;
    if (compare_complex(det, Ans)) {
        result = 1;
        //printf("Complex matrix determinant: passed\n");
    }
    else {
        result = 0;
        //printf("Complex matrix determinant: failed\n");
    }

    clean_memory(A);
    free(det);
    free(Ans);

    return result;
}

/*int main() {
    size_t passes = check_martrix_sum_int() + check_matrix_sum_complex() + check_matrix_mul_int() + check_matrix_mul_complex() + check_matrix_scalar_int() + check_matrix_scalar_complex() + check_matrix_transpose_int() + check_matrix_transpose_complex() + check_matrix_det_int() + check_matrix_det_complex();
    size_t fails = 10 - passes;

    printf("passed: %Iu\tfailed: %Iu", passes, fails);
    return 0;
}*/
