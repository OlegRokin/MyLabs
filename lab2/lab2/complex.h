#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    int Re;
    int Im;

public:
    Complex();
    Complex(int Re, int Im);

    int GetReal();
    int GetImaginary();

    void Set(int Re, int Im);
    Complex conjugate();

    Complex operator + (const Complex& other) const;
    Complex operator - (const Complex& other) const;
    Complex operator * (const Complex& other) const;
    Complex operator ++ () const;
    Complex operator -- () const;
    Complex operator += (const Complex& other) const;
    Complex operator -= (const Complex& other) const;
    bool operator == (const Complex& other) const;
    bool operator != (const Complex& other) const;

    friend std::ostream& operator << (std::ostream &out, const Complex a);

};

double fabs(Complex* a);

#endif // COMPLEX_H
