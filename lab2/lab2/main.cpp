#include <iostream>
#include "vector.h"
#include "vector.cpp"
#include "linearform.h"
#include "linearform.cpp"
#include "complex.h"
#include "complex.cpp"
#include <cmath>
#include <ctime>
using namespace std;

void enterInt(int *a) {
    int mode = 0;
    cin >> *a;
    if (!cin) {
        while (getchar() != '\n') {};
        cout << "Something's wrong. Try again.\n\n";
        mode = -1;
    }
    if (mode == 0) while (getchar() != '\n') {};
}

void enterDouble(double *a) {
    int mode = 0;
    cin >> *a;
    if (!cin) {
        while (getchar() != '\n') {};
        cout << "Something's wrong. Try again.\n\n";
        mode = -1;
    }
    if (mode == 0) while (getchar() != '\n') {};
}

void enterComplex(Complex *a) {
    int mode = 0;
    double Re, Im;
    cout << "Re = ";
    cin >> Re;
    if (!cin) {
        while (getchar() != '\n') {};
        cout << "Something's wrong. Try again.\n\n";
        mode = -1;
        return;
    }
    cout << "Im = ";
    cin >> Im;
    if (!cin) {
        while (getchar() != '\n') {};
        cout << "Something's wrong. Try again.\n\n";
        mode = -1;
        return;
    }
    a->Set(Re, Im);
    if (mode == 0) while (getchar() != '\n') {};
}

void enterNumber (int* number) {
    *number = 0;
    int *number_tmp = new int;

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

    delete number_tmp;
}

void enterDim(int* dimention) {
    int error;

    do {
        enterNumber(dimention);

        if (*dimention > 0) {
            cout << "Dimention = " << *dimention << endl << endl;
            error = 0;
        }
        else {
            cout << "Something's wrong. Try again." << endl << endl;
            error = 1;
        }
    } while (error);
}

void dialog (const char* vars[], int vars_size, const char* request, int* choice) {
    cout << request;
    for(int i = 1; i < vars_size; ++i) cout << i << ". " << vars[i] << endl;

    int error;

    do {
        enterNumber(choice);

        if (*choice < vars_size && *choice > 0) {
            cout << "Choice: " << vars[*choice] << endl << endl;
            error = 0;
        }
        else {
            cout << "Something's wrong. Try again." << endl << endl;
            error = 1;
        }
    } while (error);
}

Vector<int>* makeVectorInt(int* choice5, string name, int* dimention){
    Vector<int>* v = new Vector<int> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            int a = rand() % 20 - 10;
            v->Set(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            int a;
            enterInt(&a);
            v->Set(i, a);
        }
    }
    cout << name << " = " << *v << endl << endl;

    return v;
}

Vector<double>* makeVectorDouble(int* choice5, string name, int* dimention){
    Vector<double>* v = new Vector<double> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            int b = (rand() % 101);
            double a = (rand()%3-1)*sqrt(b);
            v->Set(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            double a;
            enterDouble(&a);
            v->Set(i, a);
        }
    }
    cout << name << " = " << *v << endl << endl;

    return v;
}

Vector<Complex>* makeVectorComplex(int* choice5, string name, int* dimention){
    Vector<Complex>* v = new Vector<Complex> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            Complex a(rand()%20-10, rand()%20-10);
            v->Set(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            Complex a;
            enterComplex(&a);
            v->Set(i, a);
        }
    }
    cout << name << " = " << *v << endl << endl;

    return v;
}

LinearForm<int>* makeLinearFormInt(int* choice5, string name, int* dimention){
    LinearForm<int>* f = new LinearForm<int> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            int a = rand() % 20 - 10;
            f->SetCoeff(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            int a;
            enterInt(&a);
            f->SetCoeff(i, a);
        }
    }
    cout << name << " = " << *f << endl << endl;

    return f;
}

LinearForm<double>* makeLinearFormDouble(int* choice5, string name, int* dimention){
    LinearForm<double>* f = new LinearForm<double> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            //double a = (rand() % 20 - 10) / (rand() % 20 - 10);
            int b = (rand() % 101);
            double a = (rand()%3-1)*sqrt(b);
            f->SetCoeff(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            double a;
            enterDouble(&a);
            f->SetCoeff(i, a);
        }
    }
    cout << name << " = " << *f << endl << endl;

    return f;
}

LinearForm<Complex>* makeLinearFormComplex(int* choice5, string name, int* dimention){
    LinearForm<Complex>* f = new LinearForm<Complex> (*dimention);
    if (*choice5 == 1) {    //generation
        for (int i = 0; i < *dimention; ++i) {
            Complex a(rand()%20-10, rand()%20-10);
            f->SetCoeff(i, a);
        }
    }
    if (*choice5 == 2) {    //fill
        for (int i = 0; i < *dimention; ++i) {
            Complex a;
            enterComplex(&a);
            f->SetCoeff(i, a);
        }
    }
    cout << name << " = " << *f << endl << endl;

    return f;
}


int main() {
    srand(time(NULL));


    const char* vars1[] = {"", "Ineteger numbers", "Float numbers", "Complex numbers"};
    const int vars1_size = sizeof(vars1) / sizeof(vars1[0]);
    const char* request1 = "Choose a type of numbers:\n";
    int* choice1 = new int;

    const char* vars2[] = {"", "Vector", "Linear form"};
    const int vars2_size = sizeof(vars2) / sizeof(vars2[0]);
    const char* request2 = "Choose an object:\n";
    int* choice2 = new int;

    const char* vars3[] = {"", "Vector sum", "Multiplication by a scalar", "Scalar product", "Norm calculation"};
    const int vars3_size = sizeof(vars3) / sizeof(vars3[0]);
    const char* request3 = "Choose an action:\n";
    int* choice3 = new int;

    const char* vars4[] = {"", "Linear form sum", "Multiplication by a scalar", "Calculation with argument"};
    const int vars4_size = sizeof(vars4) / sizeof(vars4[0]);
    const char* request4 = "Choose an action:\n";
    int* choice4 = new int;

    const char* vars5[] = {"", "Generate with random numbers", "Fill by hand"};
    const int vars5_size = sizeof(vars5) / sizeof(vars5[0]);
    const char* request5 = "Choose an action:\n";
    int* choice5 = new int;

    const char* vars6[] = {"", "Yes", "No"};
    const int vars6_size = sizeof(vars6) / sizeof(vars6[0]);
    const char* request6 = "Do you want to continue?\n";
    int* choice6 = new int;

    int* dimention = new int;

    do {
        dialog(vars1, vars1_size, request1, choice1);
        dialog(vars2, vars2_size, request2, choice2);

        if (*choice2 == 1) { //Vector
            dialog(vars3, vars3_size, request3, choice3);
            dialog(vars5, vars5_size, request5, choice5);
            cout << "Enter a dimention number: ";
            enterDim(dimention);

            switch(*choice3) {
                case 1: //Vector sum
                    if (*choice1 == 1) {    //Integrers
                        Vector<int>* v1 = makeVectorInt(choice5, "v1", dimention);
                        Vector<int>* v2 = makeVectorInt(choice5, "v2", dimention);

                        cout << "v1 + v2 = " << *(v1->Sum(v2)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        Vector<double>* v1 = makeVectorDouble(choice5, "v1", dimention);
                        Vector<double>* v2 = makeVectorDouble(choice5, "v2", dimention);

                        cout << "v1 + v2 = " << *(v1->Sum(v2)) << endl << endl;
                    }
                    if (*choice1 == 3) {    //Complex
                        Vector<Complex>* v1 = makeVectorComplex(choice5, "v1", dimention);
                        Vector<Complex>* v2 = makeVectorComplex(choice5, "v2", dimention);

                        cout << "v1 + v2 = " << *(v1->Sum(v2)) << endl << endl;
                    }
                    break;

                case 2: //Multiplication by a scalar
                    if (*choice1 == 1) {    //Integrers
                        Vector<int>* v1 = makeVectorInt(choice5, "v1", dimention);
                        int scalar;
                        cout << "\nEnter a scalar: ";
                        enterInt(&scalar);
                        cout << scalar << " * v1 = " << *(v1->MulOnScalar(scalar)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        Vector<double>* v1 = makeVectorDouble(choice5, "v1", dimention);
                        double scalar;
                        cout << "\nEnter a scalar: ";
                        enterDouble(&scalar);
                        cout << scalar << " * v1 = " << *(v1->MulOnScalar(scalar)) << endl << endl;
                        }
                    if (*choice1 == 3) {    //Complex
                        Vector<Complex>* v1 = makeVectorComplex(choice5, "v1", dimention);
                        Complex scalar;
                        cout << "\nEnter a scalar:\n";
                        enterComplex(&scalar);
                        cout << "( " << scalar << " )" << " * v1 = " << *(v1->MulOnScalar(scalar)) << endl << endl;
                    }
                    break;

                case 3: //Scalar product
                    if (*choice1 == 1) {    //Integrers
                        Vector<int>* v1 = makeVectorInt(choice5, "v1", dimention);
                        Vector<int>* v2 = makeVectorInt(choice5, "v2", dimention);

                        cout << "( v1 * v2 ) = " << (v1->ScalarProd(v2)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        Vector<double>* v1 = makeVectorDouble(choice5, "v1", dimention);
                        Vector<double>* v2 = makeVectorDouble(choice5, "v2", dimention);

                        cout << "( v1 * v2 ) = " << (v1->ScalarProd(v2)) << endl << endl;
                    }
                    if (*choice1 == 3) {    //Complex
                        Vector<Complex>* v1 = makeVectorComplex(choice5, "v1", dimention);
                        Vector<Complex>* v2 = makeVectorComplex(choice5, "v2", dimention);

                        cout << "( v1 * v2 ) = " << (v1->ScalarProd(v2)) << endl << endl;
                    }
                    break;

                case 4: //Norm calculation
                    if (*choice1 == 1) {    //Integrers
                        Vector<int>* v1 = makeVectorInt(choice5, "v1", dimention);

                        cout << "||v1|| = " << (v1->Norm()) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        Vector<double>* v1 = makeVectorDouble(choice5, "v1", dimention);

                        cout << "||v1|| = " << (v1->Norm()) << endl << endl;
                    }
                    if (*choice1 == 3) {    //Complex
                        Vector<Complex>* v1 = makeVectorComplex(choice5, "v1", dimention);

                        cout << "||v1|| = " << (v1->Norm()) << endl << endl;
                    }
                    break;
                }
        }
        if (*choice2 == 2) { //Linear form
            dialog(vars4, vars4_size, request4, choice4);
            dialog(vars5, vars5_size, request5, choice5);
            cout << "Enter a dimention number: ";
            enterDim(dimention);

            switch(*choice4) {
                case 1: //Linear form sum
                    if (*choice1 == 1) {    //Integrers
                        LinearForm<int>* f1 = makeLinearFormInt(choice5, "f1", dimention);
                        LinearForm<int>* f2 = makeLinearFormInt(choice5, "f2", dimention);

                        cout << "f1 + f2 = " << *(f1->Sum(f2)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        LinearForm<double>* f1 = makeLinearFormDouble(choice5, "f1", dimention);
                        LinearForm<double>* f2 = makeLinearFormDouble(choice5, "f2", dimention);

                        cout << "f1 + f2 = " << *(f1->Sum(f2)) << endl << endl;
                    }
                    if (*choice1 == 3) {    //Complex
                        LinearForm<Complex>* f1 = makeLinearFormComplex(choice5, "f1", dimention);
                        LinearForm<Complex>* f2 = makeLinearFormComplex(choice5, "f2", dimention);

                        cout << "f1 + f2 = " << *(f1->Sum(f2)) << endl << endl;
                    }
                    break;
                case 2: //Multiplication by a scalar
                    if (*choice1 == 1) {    //Integrers
                        LinearForm<int>* f1 = makeLinearFormInt(choice5, "f1", dimention);
                        int scalar;
                        cout << "\nEnter a scalar: ";
                        enterInt(&scalar);
                        cout << scalar << " * f1 = " << *(f1->MulOnScalar(scalar)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        LinearForm<double>* f1 = makeLinearFormDouble(choice5, "f1", dimention);
                        double scalar;
                        cout << "\nEnter a scalar: ";
                        enterDouble(&scalar);
                        cout << scalar << " * f1 = " << *(f1->MulOnScalar(scalar)) << endl << endl;
                        }
                    if (*choice1 == 3) {    //Complex
                        LinearForm<Complex>* f1 = makeLinearFormComplex(choice5, "f1", dimention);
                        Complex scalar;
                        cout << "\nEnter a scalar:\n";
                        enterComplex(&scalar);
                        cout << "( " << scalar << " )" << " * f1 = " << *(f1->MulOnScalar(scalar)) << endl << endl;
                    }
                    break;
              case 3: //Calculation with argument
                    if (*choice1 == 1) {    //Integrers
                        LinearForm<int>* f1 = makeLinearFormInt(choice5, "f1", dimention);
                        int choice = 2;
                        cout << "\nEnter an argument vector:" << endl;
                        Vector<int>* x = makeVectorInt(&choice, "x", dimention);

                        cout << "f1 * x = " << (f1->ValueWithX(x)) << endl << endl;
                    }
                    if (*choice1 == 2) {    //Floats
                        LinearForm<double>* f1 = makeLinearFormDouble(choice5, "f1", dimention);
                        int choice = 2;
                        cout << "\nEnter an argument vector:" << endl;
                        Vector<double>* x = makeVectorDouble(&choice, "x", dimention);

                        cout << "f1 * x = " << (f1->ValueWithX(x)) << endl << endl;
                    }
                    if (*choice1 == 3) {    //Complex
                        LinearForm<Complex>* f1 = makeLinearFormComplex(choice5, "f1", dimention);
                        int choice = 2;
                        cout << "\nEnter an argument vector:" << endl;
                        Vector<Complex>* x = makeVectorComplex(&choice, "x", dimention);

                        cout << "f1 * x = " << (f1->ValueWithX(x)) << endl << endl;
                    }
                    break;
                }
        }

        dialog(vars6, vars6_size, request6, choice6);

        if (*choice6 == 2) printf("Goodbye!");

    } while(*choice6 == 1);

    delete choice1;
    delete request1;
    delete choice2;
    delete request2;
    delete choice3;
    delete request3;
    delete choice4;
    delete request4;
    delete choice5;
    delete request5;
    delete choice6;
    delete request6;

    delete dimention;

    return 0;

}
