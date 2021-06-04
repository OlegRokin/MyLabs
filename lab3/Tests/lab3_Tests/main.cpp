#include <iostream>
#include "heap.h"
#include "heap.cpp"
#include "set.h"
#include "set.cpp"
#include "complex.h"
#include "person.h"
#include "person.cpp"
#include "complex.cpp"
#include "extra.h"
#include <gtest/gtest.h>

TEST (IntSetUnion, test1) {
    int length = 100;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (IntSetUnion, test2) {
    int length = 1000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (IntSetUnion, test3) {
    int length = 5000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (IntSetUnion, test4) {
    int length = 10000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (IntSetUnion, test5) {
    int length = 50000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (IntSetUnion, test6) {
    int length = 100000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}


TEST (DoubleSetUnion, test1) {
    int length = 100;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (DoubleSetUnion, test2) {
    int length = 1000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (DoubleSetUnion, test3) {
    int length = 5000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (DoubleSetUnion, test4) {
    int length = 10000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (DoubleSetUnion, test5) {
    int length = 50000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (DoubleSetUnion, test6) {
    int length = 100000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}


TEST (ComplexSetUnion, test1) {
    int length = 100;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (ComplexSetUnion, test2) {
    int length = 1000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (ComplexSetUnion, test3) {
    int length = 5000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (ComplexSetUnion, test4) {
    int length = 10000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (ComplexSetUnion, test5) {
    int length = 50000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (ComplexSetUnion, test6) {
    int length = 100000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}


TEST (StringSetUnion, test1) {
    int length = 100;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StringSetUnion, test2) {
    int length = 1000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StringSetUnion, test3) {
    int length = 5000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StringSetUnion, test4) {
    int length = 10000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StringSetUnion, test5) {
    int length = 50000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StringSetUnion, test6) {
    int length = 100000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}


TEST (StudentSetUnion, test1) {
    int length = 100;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StudentSetUnion, test2) {
    int length = 1000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StudentSetUnion, test3) {
    int length = 5000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StudentSetUnion, test4) {
    int length = 10000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StudentSetUnion, test5) {
    int length = 50000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}

TEST (StudentSetUnion, test6) {
    int length = 100000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 + *set_2);
}


TEST (IntSetComplement, test1) {
    int length = 100;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (IntSetComplement, test2) {
    int length = 1000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (IntSetComplement, test3) {
    int length = 5000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (IntSetComplement, test4) {
    int length = 10000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (IntSetComplement, test5) {
    int length = 50000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (IntSetComplement, test6) {
    int length = 100000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}


TEST (DoubleSetComplement, test1) {
    int length = 100;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (DoubleSetComplement, test2) {
    int length = 1000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (DoubleSetComplement, test3) {
    int length = 5000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (DoubleSetComplement, test4) {
    int length = 10000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (DoubleSetComplement, test5) {
    int length = 50000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (DoubleSetComplement, test6) {
    int length = 100000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}


TEST (ComplexSetComplement, test1) {
    int length = 100;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (ComplexSetComplement, test2) {
    int length = 1000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (ComplexSetComplement, test3) {
    int length = 5000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (ComplexSetComplement, test4) {
    int length = 10000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (ComplexSetComplement, test5) {
    int length = 50000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (ComplexSetComplement, test6) {
    int length = 100000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}


TEST (StringSetComplement, test1) {
    int length = 100;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StringSetComplement, test2) {
    int length = 1000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StringSetComplement, test3) {
    int length = 5000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StringSetComplement, test4) {
    int length = 10000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StringSetComplement, test5) {
    int length = 50000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StringSetComplement, test6) {
    int length = 100000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}


TEST (StudentSetComplement, test1) {
    int length = 100;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StudentSetComplement, test2) {
    int length = 1000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StudentSetComplement, test3) {
    int length = 5000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StudentSetComplement, test4) {
    int length = 10000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StudentSetComplement, test5) {
    int length = 50000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}

TEST (StudentSetComplement, test6) {
    int length = 100000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 - *set_2);
}


TEST (IntSetIntersection, test1) {
    int length = 100;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (IntSetIntersection, test2) {
    int length = 1000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (IntSetIntersection, test3) {
    int length = 5000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (IntSetIntersection, test4) {
    int length = 10000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (IntSetIntersection, test5) {
    int length = 50000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (IntSetIntersection, test6) {
    int length = 100000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}


TEST (DoubleSetIntersection, test1) {
    int length = 100;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (DoubleSetIntersection, test2) {
    int length = 1000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (DoubleSetIntersection, test3) {
    int length = 5000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (DoubleSetIntersection, test4) {
    int length = 10000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (DoubleSetIntersection, test5) {
    int length = 50000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (DoubleSetIntersection, test6) {
    int length = 100000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}


TEST (ComplexSetIntersection, test1) {
    int length = 100;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (ComplexSetIntersection, test2) {
    int length = 1000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (ComplexSetIntersection, test3) {
    int length = 5000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (ComplexSetIntersection, test4) {
    int length = 10000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (ComplexSetIntersection, test5) {
    int length = 50000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (ComplexSetIntersection, test6) {
    int length = 100000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}



TEST (StringSetIntersection, test1) {
    int length = 100;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StringSetIntersection, test2) {
    int length = 1000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StringSetIntersection, test3) {
    int length = 5000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StringSetIntersection, test4) {
    int length = 10000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StringSetIntersection, test5) {
    int length = 50000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StringSetIntersection, test6) {
    int length = 100000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}


TEST (StudentSetIntersection, test1) {
    int length = 100;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StudentSetIntersection, test2) {
    int length = 1000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StudentSetIntersection, test3) {
    int length = 5000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StudentSetIntersection, test4) {
    int length = 10000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StudentSetIntersection, test5) {
    int length = 50000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}

TEST (StudentSetIntersection, test6) {
    int length = 100000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(*set_1 * *set_2);
}


TEST (IntSetCheckEqual, test1) {
    int length = 100;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (IntSetCheckEqual, test2) {
    int length = 1000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (IntSetCheckEqual, test3) {
    int length = 5000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (IntSetCheckEqual, test4) {
    int length = 10000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (IntSetCheckEqual, test5) {
    int length = 50000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (IntSetCheckEqual, test6) {
    int length = 100000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}


TEST (DoubleSetCheckEqual, test1) {
    int length = 100;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (DoubleSetCheckEqual, test2) {
    int length = 1000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (DoubleSetCheckEqual, test3) {
    int length = 5000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (DoubleSetCheckEqual, test4) {
    int length = 10000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (DoubleSetCheckEqual, test5) {
    int length = 50000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (DoubleSetCheckEqual, test6) {
    int length = 100000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}


TEST (ComplexSetCheckEqual, test1) {
    int length = 100;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (ComplexSetCheckEqual, test2) {
    int length = 1000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (ComplexSetCheckEqual, test3) {
    int length = 5000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (ComplexSetCheckEqual, test4) {
    int length = 10000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (ComplexSetCheckEqual, test5) {
    int length = 50000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (ComplexSetCheckEqual, test6) {
    int length = 100000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}


TEST (StringSetCheckEqual, test1) {
    int length = 100;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StringSetCheckEqual, test2) {
    int length = 1000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StringSetCheckEqual, test3) {
    int length = 5000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StringSetCheckEqual, test4) {
    int length = 10000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StringSetCheckEqual, test5) {
    int length = 50000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StringSetCheckEqual, test6) {
    int length = 100000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}


TEST (StudentSetCheckEqual, test1) {
    int length = 100;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StudentSetCheckEqual, test2) {
    int length = 1000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StudentSetCheckEqual, test3) {
    int length = 5000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StudentSetCheckEqual, test4) {
    int length = 10000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StudentSetCheckEqual, test5) {
    int length = 50000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}

TEST (StudentSetCheckEqual, test6) {
    int length = 100000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    int res = *set_1 == *set_2;
    ASSERT_TRUE(res == 0 || res == 1);
}


TEST (IntSetCheckSubSet, test1) {
    int length = 100;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (IntSetCheckSubSet, test2) {
    int length = 1000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (IntSetCheckSubSet, test3) {
    int length = 5000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (IntSetCheckSubSet, test4) {
    int length = 10000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (IntSetCheckSubSet, test5) {
    int length = 50000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (IntSetCheckSubSet, test6) {
    int length = 100000;
    Set<int>* set_1 = new Set<int>;
    generateSetRepeat(set_1, &length);
    Set<int>* set_2 = new Set<int>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}



TEST (DoubleSetCheckSubSet, test1) {
    int length = 100;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (DoubleSetCheckSubSet, test2) {
    int length = 1000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (DoubleSetCheckSubSet, test3) {
    int length = 5000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (DoubleSetCheckSubSet, test4) {
    int length = 10000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (DoubleSetCheckSubSet, test5) {
    int length = 50000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (DoubleSetCheckSubSet, test6) {
    int length = 100000;
    Set<double>* set_1 = new Set<double>;
    generateSetRepeat(set_1, &length);
    Set<double>* set_2 = new Set<double>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}


TEST (ComplexSetCheckSubSet, test1) {
    int length = 100;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (ComplexSetCheckSubSet, test2) {
    int length = 1000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (ComplexSetCheckSubSet, test3) {
    int length = 5000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (ComplexSetCheckSubSet, test4) {
    int length = 10000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (ComplexSetCheckSubSet, test5) {
    int length = 50000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (ComplexSetCheckSubSet, test6) {
    int length = 100000;
    Set<Complex>* set_1 = new Set<Complex>;
    generateSetRepeat(set_1, &length);
    Set<Complex>* set_2 = new Set<Complex>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}


TEST (StringSetCheckSubSet, test1) {
    int length = 100;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StringSetCheckSubSet, test2) {
    int length = 1000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StringSetCheckSubSet, test3) {
    int length = 5000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StringSetCheckSubSet, test4) {
    int length = 10000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StringSetCheckSubSet, test5) {
    int length = 50000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StringSetCheckSubSet, test6) {
    int length = 100000;
    Set<string>* set_1 = new Set<string>;
    generateSetRepeat(set_1, &length);
    Set<string>* set_2 = new Set<string>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}


TEST (StudentSetCheckSubSet, test1) {
    int length = 100;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StudentSetCheckSubSet, test2) {
    int length = 1000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StudentSetCheckSubSet, test3) {
    int length = 5000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StudentSetCheckSubSet, test4) {
    int length = 10000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StudentSetCheckSubSet, test5) {
    int length = 50000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}

TEST (StudentSetCheckSubSet, test6) {
    int length = 100000;
    Set<Student>* set_1 = new Set<Student>;
    generateSetRepeat(set_1, &length);
    Set<Student>* set_2 = new Set<Student>;
    generateSetRepeat(set_2, &length);
    ASSERT_NO_FATAL_FAILURE(set_1->checkSubSet(set_2));
}


int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
