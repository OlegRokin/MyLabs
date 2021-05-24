#include "vector.h"
#include <iostream>
#include <cmath>

template<class T>
Vector<T>::Vector()
{
    coefficients = (Sequence<T>*) new ListSequence<T>();
    dimention = 0;
}

template<class T>
Vector<T>::Vector(int dimention)
{
    coefficients = (Sequence<T>*) new ListSequence<T>();
    this->dimention = dimention;
}

template<class T>
Vector<T>::Vector(Sequence<T> *coeff)
{
    coefficients = (Sequence<T>*) new ListSequence<T>();
    this->dimention = coeff->GetLength();
    for (int i = 0; i < dimention; ++i)
        coefficients->Append(coeff->Get(i));
}

template<class T>
Vector<T>::Vector(const Vector<T> &v)
{
    coefficients = (Sequence<T>*) new ListSequence<T>();
    this->dimention = v.dimention;
    for (int i = 0; i < dimention; ++i)
        coefficients->Append(v.coefficients->Get(i));
}

template<class T>
T &Vector<T>::Get(int index)
{
    return coefficients->Get(index);
}

template<class T>
void Vector<T>::Set(int index, T& value)
{
    if (index == coefficients->GetLength())
        coefficients->Append(value);
    else
        coefficients->Set(index, value);
}

template<class T>
int Vector<T>::GetDim()
{
    return this->dimention;
}

template<class T>
Vector<T> *Vector<T>::Sum(Vector<T>* v)
{
    if (v->dimention != this->dimention)
        throw std::exception();
    Vector<T> *VectorSum = new Vector<T> (dimention);
    for (int i = 0; i < dimention; ++i) {
        T value = this->Get(i) + v->Get(i);
        VectorSum->Set(i, value);
    }
    return VectorSum;
}

template<class T>
Vector<T> *Vector<T>::Diff(Vector<T>* v)
{
    if (v->dimention != this->dimention)
        throw std::exception();
    Vector<T> *VectorDiff = new Vector<T> (dimention);
    for (int i = 0; i < dimention; ++i) {
        T value = this->Get(i) - v->Get(i);
        VectorDiff->Set(i, value);
    }
    return VectorDiff;
}

template<class T>
Vector<T> *Vector<T>::MulOnScalar(T& scalar)
{
    Vector<T> *MulVector = new Vector<T> (dimention);
    for (int i = 0; i < dimention; ++i) {
        T value = this->Get(i) * scalar;
        MulVector->Set(i, value);
    }
    return MulVector;
}

template<class T>
T& Vector<T>::ScalarProd(Vector<T>* v)
{
    if (v->dimention != this->dimention)
        throw std::exception();
    T res = this->Get(0) * v->Get(0);
    for (int i = 1; i < dimention; ++i) {
        res = res + this->Get(i) * v->Get(i);
    }
    T& Prod = res;
    return Prod;
}

template<class T>
double Vector<T>::Norm()
{
    double Abs = fabs(this->Get(0));
    double sqNorm = Abs * Abs;
    for (int i = 1; i < dimention; ++i) {
        Abs = fabs(this->Get(i));
        sqNorm += Abs * Abs;
    }
    double Norm = sqrt(sqNorm);
    return Norm;
}

template<class T>
std::ostream& operator << (std::ostream &out, const Vector<T> &v) {
    for (int i = 0; i < v.dimention; ++i) {
        out << (*v.coefficients)[i];
        if (i == v.dimention - 1)
            break;
        out << ", ";
    }
    return out;
}

template<typename T>
Vector<T>::~Vector()
{
    dimention = 0;
    coefficients->~ListSequence();
    delete coefficients;
}
