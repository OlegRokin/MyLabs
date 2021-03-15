#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "matrix.h"
#include "integer.h"
#include "complex.h"

void enter_number (size_t* number) {   // ввод натурального числа (в противном случае вводится 0)
    *number = 0;
    size_t *number_tmp = malloc(sizeof(size_t));

    int status = 0;

    int c = 0;
    c = getchar();
    if (c == '\n') *number_tmp = getchar();
    else *number_tmp = c;

    while (*number_tmp >= '0' && *number_tmp <= '9') {
        status = 0;
        *number_tmp -= '0';
        *number = 10 * *number + *number_tmp;
        *number_tmp = getchar();
        if (*number_tmp == '\n') {
            status = 1;
            break;
        }

        if (*number_tmp < '0' || *number_tmp > '9') {
            *number = 0;
            break;
        }
    }

    if (!status) while (getchar() != '\n') {}

    free(number_tmp);
}

void enter_order(size_t* order) {
    int error;

    do {
        enter_number(order);

        if (*order > 0) {
            printf("\nOrder = %Iu\n\n", *order);
            error = 0;
        }
        else {
            printf("\nSomething's wrong. Try again.\n\n");
            error = 1;
        }
    } while (error);
}

void dialog (char* vars[], size_t vars_size, char* request, size_t* choice) {
    printf("%s\n", request);
    for(size_t i = 1; i < vars_size; ++i) printf("%Iu. %s\n", i, vars[i]);

    int error;

    do {
        enter_number(choice);

        if (*choice < vars_size && *choice > 0) {
            printf("\nChoice: %s\n\n", vars[*choice]);
            error = 0;
        }
        else {
            printf("\nSomething's wrong. Try again.\n\n");
            error = 1;
        }
    } while (error);
}

Matrix* make_matrix (size_t* choice1, size_t* choice3, char* name, size_t* order) {
    Matrix* A;
    if (*choice1 == 1) {    // integers
        if (*choice3 == 1) {    // generation
            A = generate_matrix_int(*order);
        }
        if (*choice3 == 2) {    // fill
            printf("Enter elements of the matrix %s:\n", name);
            A = fill_matrix_int(*order);
        }
        printf("%s =\n", name);
        matrix_output_int(A, *order);
    }

    if (*choice1 == 2) {    // complex
        if (*choice3 == 1) {    // generation
            A = generate_matrix_complex(*order);
        }
        if (*choice3 == 2) {    // fill
            printf("Enter elements of the matrix %s in a form \"Re,Im\":\n", name);
            A = fill_matrix_complex(*order);
        }
        printf("%s =\n", name);
        matrix_output_complex(A, *order);
    }
    return A;
}

int main() {
    srand(time(NULL));

    char* vars1[] = {"", "Ineteger numbers", "Complex numbers"};
    size_t vars1_size = sizeof(vars1) / sizeof(vars1[0]);
    char* request1 = "Choose a type of a matrix:\n";
    size_t* choice1 = malloc(sizeof(size_t));

    char* vars2[] = {"", "Matrix sum", "Matrix multiplication", "Scalar multiplication", "Matrix transonation", "Matrix determinant"};
    size_t vars2_size = sizeof(vars2) / sizeof(vars2[0]);
    char* request2 = "Choose an action:\n";
    size_t* choice2 = malloc(sizeof(size_t));

    char* vars3[] = {"", "Generate the matrix with random numbers", "Fill the matrix by hand"};
    size_t vars3_size = sizeof(vars3) / sizeof(vars3[0]);
    char* request3 = "Choose an action:\n";
    size_t* choice3 = malloc(sizeof(size_t));

    char* vars4[] = {"", "Yes", "No"};
    size_t vars4_size = sizeof(vars4) / sizeof(vars4[0]);
    char* request4 = "Do you want to continue?\n";
    size_t* choice4 = malloc(sizeof(size_t));

    size_t* order = malloc(sizeof(size_t));

    do {
        dialog(vars1, vars1_size, request1, choice1);
        dialog(vars2, vars2_size, request2, choice2);
        dialog(vars3, vars3_size, request3, choice3);

        printf("Enter an order of the matrix: ");
        enter_order(order);

        switch(*choice2) {
            case 1: //Matrix sum
               if (*choice1 == 1) { // integers
                   Matrix* A = make_matrix(choice1, choice3, "A", order);
                   Matrix* B = make_matrix(choice1, choice3, "B", order);

                   printf("A + B =\n");
                   Matrix* C = matrix_sum(A, B);
                   matrix_output_int(C, *order);

                   clean_memory(A);
                   clean_memory(B);
                   clean_memory(C);
               }
               if (*choice1 == 2) { // complex
                   Matrix* A = make_matrix(choice1, choice3, "A", order);
                   Matrix* B = make_matrix(choice1, choice3, "B", order);

                   printf("A + B =\n");
                   Matrix* C = matrix_sum(A, B);
                   matrix_output_complex(C, *order);

                   clean_memory(A);
                   clean_memory(B);
                   clean_memory(C);
                }
                break;

            case 2: //Matrix multiplication
               if (*choice1 == 1) { // integers
                   Matrix* A = make_matrix(choice1, choice3, "A", order);
                   Matrix* B = make_matrix(choice1, choice3, "B", order);

                   printf("A * B =\n");
                   Matrix* C = matrix_mul(A, B);
                   matrix_output_int(C, *order);

                   clean_memory(A);
                   clean_memory(B);
                   clean_memory(C);
                }
                if (*choice1 == 2) { // complex
                   Matrix* A = make_matrix(choice1, choice3, "A", order);
                   Matrix* B = make_matrix(choice1, choice3, "B", order);

                   printf("A * B =\n");
                   Matrix* C = matrix_mul(A, B);
                   matrix_output_complex(C, *order);

                   clean_memory(A);
                   clean_memory(B);
                   clean_memory(C);
                }
                break;

            case 3: //Scalar multiplication
               if (*choice1 == 1) { // integers
                   int scalar;
                   printf("Enter a scalar number: ");
                   int n = scanf("%d", &scalar);
                   printf("%d\n", n);
                   while (getchar() != '\n') {}
                   if (n <= 0) scalar = 0;

                   printf("\n");

                   Matrix* A = make_matrix(choice1, choice3, "A", order);

                   printf("%d * A =\n", scalar);
                   Matrix* C = matrix_scalar(A, &scalar);
                   matrix_output_int(C, *order);

                   clean_memory(A);
                   clean_memory(C);
                }
                if (*choice1 == 2) { // complex
                    printf("Enter a scalar number in a form \"Re,Im\": ");
                    Complex* scalar = fill_complex();
                    while (getchar() != '\n') {}
                    printf("\n");

                    Matrix* A = make_matrix(choice1, choice3, "A", order);

                    printf("(");
                    output_complex(scalar);
                    printf(") * A =\n");
                    Matrix* C = matrix_scalar(A, scalar);
                    matrix_output_complex(C, *order);

                    clean_memory(A);
                    clean_memory(C);
                    free(scalar);
                }
                break;

            case 4: //Matrix transonation
                if (*choice1 == 1) { // integers
                    Matrix* A = make_matrix(choice1, choice3, "A", order);

                    printf("A^T =\n");
                    Matrix* C = matrix_transpose(A);
                    matrix_output_int(C, *order);

                    clean_memory(A);
                    clean_memory(C);
                }
                if (*choice1 == 2) { // complex
                    Matrix* A = make_matrix(choice1, choice3, "A", order);

                    printf("A^T =\n");
                    Matrix* C = matrix_transpose(A);
                    matrix_output_complex(C, *order);

                    clean_memory(A);
                    clean_memory(C);
                 }
                break;

            case 5: //Matrix determinant
                if (*choice1 == 1) { // integers
                    Matrix* A = make_matrix(choice1, choice3, "A", order);

                    int* det = matrix_det(A);
                    printf("det(A) = %d\n\n", *det);

                    clean_memory(A);
                    free(det);
                }
                if (*choice1 == 2) { // complex
                    Matrix* A = make_matrix(choice1, choice3, "A", order);

                    Complex* det = matrix_det(A);
                    printf("det(A) = ");
                    output_complex (det);
                    printf("\n\n");

                    clean_memory(A);
                    free(det);
                 }
                break;
        }

        dialog(vars4, vars4_size, request4, choice4);

        if (*choice4 == 2) printf("Goodbye!");

    } while(*choice4 == 1);

    free(choice1);
    free(request1);
    free(choice2);
    free(request2);
    free(choice3);
    free(request3);
    free(choice4);
    free(request4);

    free(order);

    return 0;
}
