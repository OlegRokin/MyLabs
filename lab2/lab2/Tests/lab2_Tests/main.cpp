#include <iostream>
#include "vector.h"
#include "vector.cpp"
#include "linearform.h"
#include "linearform.cpp"
#include "complex.h"
#include "complex.cpp"
#include <gtest/gtest.h>
#include <cmath>

TEST (VectorIntSum, test1) {
    int dimention = 0;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = i * i;
        v2->Set(i, a);
    }
    Vector<int> *v3 = new Vector<int>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == i + i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntSum, test2) {
    int dimention = 1250;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 2 * i * i;
        v2->Set(i, a);
    }
    Vector<int> *v3 = new Vector<int>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == i + 2*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntSum, test3) {
    int dimention = 2500;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 3 * i * i;
        v2->Set(i, a);
    }
    Vector<int> *v3 = new Vector<int>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == i + 3*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntSum, test4) {
    int dimention = 3750;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 4 * i * i;
        v2->Set(i, a);
    }
    Vector<int> *v3 = new Vector<int>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == i + 4*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntSum, test5) {
    int dimention = 5000;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 5 * i * i;
        v2->Set(i, a);
    }
    Vector<int> *v3 = new Vector<int>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == i + 5*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleSum, test1) {
    int dimention = 0;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(2 * i);
        v2->Set(i, b);
    }
    Vector<double> *v3 = new Vector<double>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == sqrt(i) + sqrt(2 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleSum, test2) {
    int dimention = 1250;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(3 * i);
        v2->Set(i, b);
    }
    Vector<double> *v3 = new Vector<double>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == sqrt(i) + sqrt(3 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleSum, test3) {
    int dimention = 2500;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(4 * i);
        v2->Set(i, b);
    }
    Vector<double> *v3 = new Vector<double>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == sqrt(i) + sqrt(4 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleSum, test4) {
    int dimention = 3750;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(5 * i);
        v2->Set(i, b);
    }
    Vector<double> *v3 = new Vector<double>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == sqrt(i) + sqrt(5 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleSum, test5) {
    int dimention = 5000;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(6 * i);
        v2->Set(i, b);
    }
    Vector<double> *v3 = new Vector<double>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v3->Get(i) == sqrt(i) + sqrt(6 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexSum, test1) {
    int dimention = 0;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 2*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Vector<Complex> *v3 = new Vector<Complex>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 2*i + i*i);
        if (v3->Get(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexSum, test2) {
    int dimention = 1250;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 3*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Vector<Complex> *v3 = new Vector<Complex>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 3*i + i*i);
        if (v3->Get(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexSum, test3) {
    int dimention = 2500;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 4*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Vector<Complex> *v3 = new Vector<Complex>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 4*i + i*i);
        if (v3->Get(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexSum, test4) {
    int dimention = 3750;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 5*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Vector<Complex> *v3 = new Vector<Complex>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 5*i + i*i);
        if (v3->Get(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexSum, test5) {
    int dimention = 5000;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 6*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Vector<Complex> *v3 = new Vector<Complex>(dimention);
    v3 = v1->Sum(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 6*i + i*i);
        if (v3->Get(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntMulOnScalar, test1) {
    int dimention = 0;
    int scalar = 2;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        v1->Set(i, a);
    }
    Vector<int> *v2 = new Vector<int>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntMulOnScalar, test2) {
    int dimention = 1250;
    int scalar = 3;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        v1->Set(i, a);
    }
    Vector<int> *v2 = new Vector<int>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntMulOnScalar, test3) {
    int dimention = 2500;
    int scalar = 4;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        v1->Set(i, a);
    }
    Vector<int> *v2 = new Vector<int>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntMulOnScalar, test4) {
    int dimention = 3750;
    int scalar = 5;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        v1->Set(i, a);
    }
    Vector<int> *v2 = new Vector<int>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntMulOnScalar, test5) {
    int dimention = 5000;
    int scalar = 6;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        v1->Set(i, a);
    }
    Vector<int> *v2 = new Vector<int>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleMulOnScalar, test1) {
    int dimention = 1;
    double scalar = sqrt(5);
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
    }
    Vector<double> *v2 = new Vector<double>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*sqrt(i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleMulOnScalar, test2) {
    int dimention = 10;
    double scalar = sqrt(6);
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
    }
    Vector<double> *v2 = new Vector<double>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*sqrt(i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleMulOnScalar, test3) {
    int dimention = 100;
    double scalar = sqrt(7);
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
    }
    Vector<double> *v2 = new Vector<double>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*sqrt(i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleMulOnScalar, test4) {
    int dimention = 1000;
    double scalar = sqrt(8);
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
    }
    Vector<double> *v2 = new Vector<double>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*sqrt(i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorDoubleMulOnScalar, test5) {
    int dimention = 10000;
    double scalar = sqrt(10);
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
    }
    Vector<double> *v2 = new Vector<double>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (v2->Get(i) == scalar*sqrt(i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexMulOnScalar, test1) {
    int dimention = 1;
    Complex scalar(1, 1);
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, i * i);
        v1->Set(i, a);
    }
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i, i*i);
        if (v2->Get(i) == scalar*c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexMulOnScalar, test2) {
    int dimention = 10;
    Complex scalar(2, 2);
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 2 * i * i);
        v1->Set(i, a);
    }
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i, 2*i*i);
        if (v2->Get(i) == scalar*c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexMulOnScalar, test3) {
    int dimention = 100;
    Complex scalar(3, 3);
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 3 * i * i);
        v1->Set(i, a);
    }
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i, 3*i*i);
        if (v2->Get(i) == scalar*c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexMulOnScalar, test4) {
    int dimention = 1000;
    Complex scalar(4, 4);
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 4 * i * i);
        v1->Set(i, a);
    }
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i, 4*i*i);
        if (v2->Get(i) == scalar*c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorComplexMulOnScalar, test5) {
    int dimention = 10000;
    Complex scalar(5, 5);
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 5 * i * i);
        v1->Set(i, a);
    }
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    v2 = v1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i, 5*i*i);
        if (v2->Get(i) == scalar*c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (VectorIntScalarProd, test1) {
    int dimention = 1;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = i * i;
        v2->Set(i, a);
    }
    int prod = v1->ScalarProd(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i*i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorIntScalarProd, test2) {
    int dimention = 1250;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 2 * i * i;
        v2->Set(i, a);
    }
    int prod = v1->ScalarProd(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 2*i*i*i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorIntScalarProd, test3) {
    int dimention = 2500;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 3 * i * i;
        v2->Set(i, a);
    }
    int prod = v1->ScalarProd(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 3*i*i*i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorIntScalarProd, test4) {
    int dimention = 3750;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 4 * i * i;
        v2->Set(i, a);
    }
    int prod = v1->ScalarProd(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 4*i*i*i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorIntScalarProd, test5) {
    int dimention = 5000;
    Vector<int> *v1 = new Vector<int>(dimention);
    Vector<int> *v2 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        v1->Set(i, i);
        int a = 5 * i * i;
        v2->Set(i, a);
    }
    int prod = v1->ScalarProd(v2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 5*i*i*i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorDoubleScalarProd, test1) {
    int dimention = 1;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(2 * i);
        v2->Set(i, b);
    }
    double prod = v1->ScalarProd(v2);
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*sqrt(2);
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorDoubleScalarProd, test2) {
    int dimention = 10;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(3 * i);
        v2->Set(i, b);
    }
    double prod = v1->ScalarProd(v2);
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*sqrt(3);
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorDoubleScalarProd, test3) {
    int dimention = 100;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(i);
        v2->Set(i, b);
    }
    double prod = v1->ScalarProd(v2);
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorDoubleScalarProd, test4) {
    int dimention = 1000;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(6 * i);
        v2->Set(i, b);
    }
    double prod = v1->ScalarProd(v2);
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*sqrt(6);
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorDoubleScalarProd, test5) {
    int dimention = 10000;
    Vector<double> *v1 = new Vector<double>(dimention);
    Vector<double> *v2 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        v1->Set(i, a);
        double b = sqrt(i);
        v2->Set(i, b);
    }
    double prod = v1->ScalarProd(v2);
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorComplexScalarProd, test1) {
    int dimention = 1;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 2*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Complex prod = v1->ScalarProd(v2);
    Complex count;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i*i - 2*i*i*i, i*i*i + 2*i*i);
        count = count + c;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorComplexScalarProd, test2) {
    int dimention = 10;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 3*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Complex prod = v1->ScalarProd(v2);
    Complex count;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i*i - 3*i*i*i, i*i*i + 3*i*i);
        count = count + c;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorComplexScalarProd, test3) {
    int dimention = 100;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 4*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Complex prod = v1->ScalarProd(v2);
    Complex count;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i*i - 4*i*i*i, i*i*i + 4*i*i);
        count = count + c;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorComplexScalarProd, test4) {
    int dimention = 1000;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 5*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Complex prod = v1->ScalarProd(v2);
    Complex count;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i*i - 5*i*i*i, i*i*i + 5*i*i);
        count = count + c;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorComplexScalarProd, test5) {
    int dimention = 10000;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    Vector<Complex> *v2 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 6*i);
        v1->Set(i, a);
        Complex b(i, i*i);
        v2->Set(i, b);
    }
    Complex prod = v1->ScalarProd(v2);
    Complex count;
    for (int i = 0; i < dimention; ++i) {
        Complex c(i*i - 6*i*i*i, i*i*i + 6*i*i);
        count = count + c;
    }
    ASSERT_TRUE(count == prod);
}

TEST (VectorIntNorm, test1) {
    int dimention = 1;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i;
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorIntNorm, test2) {
    int dimention = 1000;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i;
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorIntNorm, test3) {
    int dimention = 1200;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i;
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorIntNorm, test4) {
    int dimention = 1300;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i;
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorIntNorm, test5) {
    int dimention = 1400;
    Vector<int> *v1 = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i;
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorDoubleNorm, test1) {
    int dimention = 1;
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(0.1*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 0.1*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorDoubleNorm, test2) {
    int dimention = 10;
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(0.15*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 0.15*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorDoubleNorm, test3) {
    int dimention = 100;
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(0.3*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 0.3*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorDoubleNorm, test4) {
    int dimention = 1000;
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(0.4*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 0.4*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorDoubleNorm, test5) {
    int dimention = 10000;
    Vector<double> *v1 = new Vector<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(0.5*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 0.5*i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorComplexNorm, test1) {
    int dimention = 1;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i,i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 2 * i * i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorComplexNorm, test2) {
    int dimention = 10;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i,3*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 10 * i * i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorComplexNorm, test3) {
    int dimention = 100;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i,4*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 17 * i * i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorComplexNorm, test4) {
    int dimention = 1000;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i,5*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 26 * i * i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (VectorComplexNorm, test5) {
    int dimention = 5000;
    Vector<Complex> *v1 = new Vector<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i,6*i);
        v1->Set(i, a);
    }
    double Norm = v1->Norm();
    double count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 37 * i * i;
    }
    ASSERT_TRUE(sqrt(count) == Norm);
}

TEST (LinearFormIntSum, test1) {
    int dimention = 1;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = i * i;
        f2->SetCoeff(i, a);
    }
    LinearForm<int> *f3 = new LinearForm<int>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == i + i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntSum, test2) {
    int dimention = 1250;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 2 * i * i;
        f2->SetCoeff(i, a);
    }
    LinearForm<int> *f3 = new LinearForm<int>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == i + 2*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntSum, test3) {
    int dimention = 2500;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 3 * i * i;
        f2->SetCoeff(i, a);
    }
    LinearForm<int> *f3 = new LinearForm<int>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == i + 3*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntSum, test4) {
    int dimention = 3750;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 4 * i * i;
        f2->SetCoeff(i, a);
    }
    LinearForm<int> *f3 = new LinearForm<int>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == i + 4*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntSum, test5) {
    int dimention = 5000;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 5 * i * i;
        f2->SetCoeff(i, a);
    }
    LinearForm<int> *f3 = new LinearForm<int>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == i + 5*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormDoubleSum, test1) {
    int dimention = 1;
    LinearForm<double> *f1 = new LinearForm<double>(dimention);
    LinearForm<double> *f2 = new LinearForm<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        f1->SetCoeff(i, a);
        double b = sqrt(2 * i);
        f2->SetCoeff(i, b);
    }
    LinearForm<double> *f3 = new LinearForm<double>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == sqrt(i) + sqrt(2 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormDoubleSum, test2) {
    int dimention = 10;
    LinearForm<double> *f1 = new LinearForm<double>(dimention);
    LinearForm<double> *f2 = new LinearForm<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        f1->SetCoeff(i, a);
        double b = sqrt(3 * i);
        f2->SetCoeff(i, b);
    }
    LinearForm<double> *f3 = new LinearForm<double>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == sqrt(i) + sqrt(3 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormDoubleSum, test3) {
    int dimention = 100;
    LinearForm<double> *f1 = new LinearForm<double>(dimention);
    LinearForm<double> *f2 = new LinearForm<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        f1->SetCoeff(i, a);
        double b = sqrt(5 * i);
        f2->SetCoeff(i, b);
    }
    LinearForm<double> *f3 = new LinearForm<double>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == sqrt(i) + sqrt(5 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormDoubleSum, test4) {
    int dimention = 1000;
    LinearForm<double> *f1 = new LinearForm<double>(dimention);
    LinearForm<double> *f2 = new LinearForm<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        f1->SetCoeff(i, a);
        double b = sqrt(6 * i);
        f2->SetCoeff(i, b);
    }
    LinearForm<double> *f3 = new LinearForm<double>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == sqrt(i) + sqrt(6 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormDoubleSum, test5) {
    int dimention = 10000;
    LinearForm<double> *f1 = new LinearForm<double>(dimention);
    LinearForm<double> *f2 = new LinearForm<double>(dimention);
    for (int i = 0; i < dimention; ++i) {
        double a = sqrt(i);
        f1->SetCoeff(i, a);
        double b = sqrt(7 * i);
        f2->SetCoeff(i, b);
    }
    LinearForm<double> *f3 = new LinearForm<double>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f3->GetCoeff(i) == sqrt(i) + sqrt(7 * i)) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormComplexSum, test1) {
    int dimention = 1;
    LinearForm<Complex> *f1 = new LinearForm<Complex>(dimention);
    LinearForm<Complex> *f2 = new LinearForm<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 2*i);
        f1->SetCoeff(i, a);
        Complex b(i, i*i);
        f2->SetCoeff(i, b);
    }
    LinearForm<Complex> *f3 = new LinearForm<Complex>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 2*i + i*i);
        if (f3->GetCoeff(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormComplexSum, test2) {
    int dimention = 10;
    LinearForm<Complex> *f1 = new LinearForm<Complex>(dimention);
    LinearForm<Complex> *f2 = new LinearForm<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 3*i);
        f1->SetCoeff(i, a);
        Complex b(i, i*i);
        f2->SetCoeff(i, b);
    }
    LinearForm<Complex> *f3 = new LinearForm<Complex>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 3*i + i*i);
        if (f3->GetCoeff(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormComplexSum, test3) {
    int dimention = 100;
    LinearForm<Complex> *f1 = new LinearForm<Complex>(dimention);
    LinearForm<Complex> *f2 = new LinearForm<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 3*i);
        f1->SetCoeff(i, a);
        Complex b(i, i*i);
        f2->SetCoeff(i, b);
    }
    LinearForm<Complex> *f3 = new LinearForm<Complex>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 3*i + i*i);
        if (f3->GetCoeff(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormComplexSum, test4) {
    int dimention = 1000;
    LinearForm<Complex> *f1 = new LinearForm<Complex>(dimention);
    LinearForm<Complex> *f2 = new LinearForm<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 4*i);
        f1->SetCoeff(i, a);
        Complex b(i, i*i);
        f2->SetCoeff(i, b);
    }
    LinearForm<Complex> *f3 = new LinearForm<Complex>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 4*i + i*i);
        if (f3->GetCoeff(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormComplexSum, test5) {
    int dimention = 10000;
    LinearForm<Complex> *f1 = new LinearForm<Complex>(dimention);
    LinearForm<Complex> *f2 = new LinearForm<Complex>(dimention);
    for (int i = 0; i < dimention; ++i) {
        Complex a(i, 5*i);
        f1->SetCoeff(i, a);
        Complex b(i, i*i);
        f2->SetCoeff(i, b);
    }
    LinearForm<Complex> *f3 = new LinearForm<Complex>(dimention);
    f3 = f1->Sum(f2);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        Complex c(2*i, 5*i + i*i);
        if (f3->GetCoeff(i) == c) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntMulOnScalar, test1) {
    int dimention = 0;
    int scalar = 2;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        f1->SetCoeff(i, a);
    }
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    f2 = f1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f2->GetCoeff(i) == 2*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntMulOnScalar, test2) {
    int dimention = 1250;
    int scalar = 3;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        f1->SetCoeff(i, a);
    }
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    f2 = f1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f2->GetCoeff(i) == 3*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntMulOnScalar, test3) {
    int dimention = 2500;
    int scalar = 4;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        f1->SetCoeff(i, a);
    }
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    f2 = f1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f2->GetCoeff(i) == 4*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntMulOnScalar, test4) {
    int dimention = 3750;
    int scalar = 5;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        f1->SetCoeff(i, a);
    }
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    f2 = f1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f2->GetCoeff(i) == 5*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntMulOnScalar, test5) {
    int dimention = 5000;
    int scalar = 6;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        int a = i * i;
        f1->SetCoeff(i, a);
    }
    LinearForm<int> *f2 = new LinearForm<int>(dimention);
    f2 = f1->MulOnScalar(scalar);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        if (f2->GetCoeff(i) == 6*i*i) ++count;
    }
    ASSERT_TRUE(count == dimention);
}

TEST (LinearFormIntValueWithX, test1) {
    int dimention = 1;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    Vector<int> *X = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = i * i;
        X->Set(i, a);
    }
    int Value = f1->ValueWithX(X);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += i*i*i;
    }
    ASSERT_TRUE(count == Value);
}

TEST (LinearFormIntValueWithX, test2) {
    int dimention = 1250;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    Vector<int> *X = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 2 * i * i;
        X->Set(i, a);
    }
    int Value = f1->ValueWithX(X);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 2*i*i*i;
    }
    ASSERT_TRUE(count == Value);
}

TEST (LinearFormIntValueWithX, test3) {
    int dimention = 2500;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    Vector<int> *X = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 3 * i * i;
        X->Set(i, a);
    }
    int Value = f1->ValueWithX(X);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 3*i*i*i;
    }
    ASSERT_TRUE(count == Value);
}

TEST (LinearFormIntValueWithX, test4) {
    int dimention = 3750;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    Vector<int> *X = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 4 * i * i;
        X->Set(i, a);
    }
    int Value = f1->ValueWithX(X);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 4*i*i*i;
    }
    ASSERT_TRUE(count == Value);
}

TEST (LinearFormIntValueWithX, test5) {
    int dimention = 5000;
    LinearForm<int> *f1 = new LinearForm<int>(dimention);
    Vector<int> *X = new Vector<int>(dimention);
    for (int i = 0; i < dimention; ++i) {
        f1->SetCoeff(i, i);
        int a = 5 * i * i;
        X->Set(i, a);
    }
    int Value = f1->ValueWithX(X);
    int count = 0;
    for (int i = 0; i < dimention; ++i) {
        count += 5*i*i*i;
    }
    ASSERT_TRUE(count == Value);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
