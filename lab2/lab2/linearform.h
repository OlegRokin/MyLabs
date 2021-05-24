#ifndef LINEARFORM_H
#define LINEARFORM_H

#include "vector.h"
#include "complex.h"

template<class T>
class LinearForm {
private:
    Vector<T> *coefficients;
    int dimention;

public:
    LinearForm();
    LinearForm(int dimention);
    LinearForm(Sequence<T> *coeff);
    LinearForm(Vector<T> *v);
    LinearForm(const LinearForm<T> &f);

    T& GetCoeff(int index);
    void SetCoeff(int index, T& value);

    LinearForm<T>* Sum(LinearForm<T>* f);
    LinearForm<T>* Diff(LinearForm<T>* f);
    LinearForm<T>* MulOnScalar(T& scalar);

    T& ValueWithX(Vector<T> *X);

    template<class R>
    friend std::ostream& operator <<(std::ostream &out, const LinearForm<R> &f);

    ~LinearForm();
};

void OutCoefficients(int a);
void OutCoefficients(double a);
void OutCoefficients(Complex a);

#endif // LINEARFORM_H
