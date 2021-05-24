#include "complex.h"
#include <iostream>
#include <cmath>

Complex::Complex() {
    Re = Im = 0;
}

Complex::Complex(int Re, int Im) {
    this->Re = Re;
    this->Im = Im;
}

int Complex::GetReal() {
    return this->Re;
}

int Complex::GetImaginary() {
    return this->Im;
}

void Complex::Set(int Re, int Im) {
    this->Re = Re;
    this->Im = Im;
}

Complex Complex::conjugate() {
    Complex a(this->Re, - this->Im);
    return a;
}

Complex Complex::operator + (const Complex& other) const {
    Complex Sum;
    Sum.Re = this->Re + other.Re;
    Sum.Im = this->Im + other.Im;
    return Sum;
}

Complex Complex::operator - (const Complex& other) const {
    Complex Diff;
    Diff.Re = this->Re - other.Re;
    Diff.Im = this->Im - other.Im;
    return Diff;
}

Complex Complex::operator * (const Complex& other) const {
    Complex Mul;
    Mul.Re = this->Re * other.Re - this->Im * other.Im;
    Mul.Im = this->Re * other.Im + this->Im * other.Re;
    return Mul;
}

Complex Complex::operator ++ () const {
    Complex Sum;
    Sum.Re = this->Re + 1;
    Sum.Im = this->Im;
    return Sum;
}

Complex Complex::operator -- () const {
    Complex Diff;
    Diff.Re = this->Re - 1;
    Diff.Im = this->Im;
    return Diff;
}

Complex Complex::operator += (const Complex& other) const {
    Complex Sum;
    Sum.Re = this->Re + other.Re;
    Sum.Im = this->Im + other.Im;
    return Sum;
}

Complex Complex::operator -= (const Complex& other) const {
    Complex Diff;
    Diff.Re = this->Re - other.Re;
    Diff.Im = this->Im - other.Im;
    return Diff;
}

bool Complex::operator == (const Complex& other) const {
    return this->Re == other.Re && this->Im == other.Im;
}

bool Complex::operator != (const Complex& other) const {
    return !(this->Re == other.Re && this->Im == other.Im);
}

std::ostream& operator << (std::ostream &out, const Complex a) {
    if (a.Re != 0 && a.Im > 0 && a.Im != 1) std::cout << a.Re << "+" << a.Im << "i";
    if (a.Re == 0 && a.Im > 0 && a.Im != 1) std::cout << a.Im << "i";
    if (a.Re != 0 && a.Im == 1) std::cout << a.Re << "+" << "i";
    if (a.Re == 0 && a.Im == 1) std::cout << "i";

    if (a.Re != 0 && a.Im == 0) std::cout << a.Re;
    if (a.Re == 0 && a.Im == 0) std::cout << "0";

    if (a.Re != 0 && a.Im < 0 && a.Im != -1) std::cout << a.Re << a.Im << "i";
    if (a.Re == 0 && a.Im < 0 && a.Im != -1) std::cout << a.Im << "i";
    if (a.Re != 0 && a.Im == -1) std::cout << a.Re << "-i";
    if (a.Re == 0 && a.Im == -1) std::cout << "-i";
    return out;
}

double fabs(Complex a) {
    int Re = a.GetReal();
    int Im = a.GetImaginary();
    double Abs = sqrt((Re * Re) + (Im * Im));
    return Abs;
}
