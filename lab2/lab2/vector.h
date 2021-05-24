#ifndef VECTOR_H
#define VECTOR_H

#include "listsequence.h"
#include "listsequence.cpp"
#include "arraysequence.h"
#include "arraysequence.cpp"

template<class T>
class Vector {
private:
    Sequence<T> *coefficients;
    int dimention;

public:
    Vector();
    Vector(int dimention);
    Vector(Sequence<T> *coeff);
    Vector(const Vector<T> &v);

    T& Get(int index);
    void Set(int index, T& value);
    int GetDim();

    Vector<T>* Sum(Vector<T>* v);
    Vector<T>* Diff(Vector<T>* v);
    Vector<T>* MulOnScalar(T& scalar);
    T& ScalarProd(Vector<T>* v);
    double Norm();

    template<class R>
    friend std::ostream& operator <<(std::ostream &out, const Vector<R> &v);

    ~Vector();
};

#endif // VECTOR_H
