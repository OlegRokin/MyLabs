#include "linearform.h"
#include "vector.h"
#include "complex.h"
#include <iostream>
#include <cmath>

template<class T>
LinearForm<T>::LinearForm()
{
    coefficients = new Vector<T>();
    dimention = 0;
}

template<class T>
LinearForm<T>::LinearForm(int dimention)
{
    coefficients = new Vector<T>(dimention);
    this->dimention = dimention;
}

template<class T>
LinearForm<T>::LinearForm(Sequence<T> *coeff)
{
    coefficients = new Vector<T>(coeff);
    dimention = coeff->GetLength();
}

template<class T>
LinearForm<T>::LinearForm(Vector<T> *v)
{
    dimention = v->GetDim();
    this->coefficients = new Vector<T>(dimention);
    for (int i = 0; i < dimention; ++i) {
        this->coefficients->Set(i, v->Get(i));
    }
}

template<class T>
LinearForm<T>::LinearForm(const LinearForm<T> &f)
{
    this->dimention = f.dimention;
    this->coefficients = new Vector<T>(f.coefficients);
}

template<class T>
T &LinearForm<T>::GetCoeff(int index)
{
    return coefficients->Get(index);
}

template<class T>
void LinearForm<T>::SetCoeff(int index, T& value)
{
    coefficients->Set(index, value);
}

template<class T>
LinearForm<T> *LinearForm<T>::Sum(LinearForm<T>* f)
{
    if (f->dimention != this->dimention)
        throw std::exception();
    Vector<T>* CoeffSum = this->coefficients->Sum(f->coefficients);
    LinearForm* Sum = new LinearForm<T>(CoeffSum);
    return Sum;
}

template<class T>
LinearForm<T> *LinearForm<T>::Diff(LinearForm<T>* f)
{
    if (f->dimention != this->dimention)
        throw std::exception();
    Vector<T>* CoeffDiff = this->coefficients->Diff(f->coefficients);
    LinearForm* Diff = new LinearForm<T>(CoeffDiff);
    return Diff;
}

template<class T>
LinearForm<T> *LinearForm<T>::MulOnScalar(T& scalar)
{
    Vector<T>* CoeffMul = this->coefficients->MulOnScalar(scalar);
    LinearForm* MulLinForm = new LinearForm<T>(CoeffMul);
    return MulLinForm;
}

template<class T>
T &LinearForm<T>::ValueWithX(Vector<T> *X)
{
    return this->coefficients->ScalarProd(X);
}

template<class T>
std::ostream &operator << (std::ostream &out, const LinearForm<T> &f)
{
    for (int i = 0; i < f.dimention; ++i) {
        if (!fabs(f.coefficients->Get(i)))  continue;
        OutCoefficients((f.coefficients->Get(i)));
        out << "x" << i + 1 << " ";
        if (i == f.dimention - 1)   break;
    }
    return out;
}

template<typename T>
LinearForm<T>::~LinearForm()
{
    dimention = 0;
    coefficients->~Vector();
    delete coefficients;
}

void OutCoefficients(int a)
{
    if (a > 0 && a != 1) { std::cout << "+ " << a << "*"; return; }
    if (a == 1) { std::cout << "+ "; return; }
    if (a == 0) { return; };
    if (a == -1) { std::cout << "- "; return; }
    if (a < 0 && a != -1) { std::cout << "- " << - a << "*"; return; }
}

void OutCoefficients(double a)
{
    if (a > 0 && a != 1) { std::cout << "+ " << a << "*"; return; }
    if (a == 1) { std::cout << "+ "; return; }
    if (a == 0) { return; };
    if (a == -1) { std::cout << "- "; return; }
    if (a < 0 && a != -1) { std::cout << "- " << - a << "*"; return; }
}

void OutCoefficients(Complex a)
{
    if ((a.GetReal() == 1 || a.GetReal() == 0) && a.GetImaginary() == 0) { return; };
    if ((a.GetReal() == 0 && a.GetImaginary() > 0) || (a.GetReal() > 0 && a.GetImaginary() == 0)) { std::cout << "+ " << a << "*"; return; }
    if (a.GetReal() == -1 && a.GetImaginary() == 0) { std::cout << "- "; return; }
    if ((a.GetReal() < -1 && a.GetImaginary() == 0) || (a.GetReal() == 0 && a.GetImaginary() < -1)) { std::cout << "- "<< - a.GetReal() - a.GetImaginary() <<"*"; return; }
    if (a.GetReal() != 0 && a.GetImaginary() != 0) { std::cout << "+ (" << a << ")*"; return; }
}
