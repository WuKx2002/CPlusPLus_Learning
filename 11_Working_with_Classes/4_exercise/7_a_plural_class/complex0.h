#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

#include <iostream>

class Complex
{
private:
    double real_;
    double imaginary_;
public:
    Complex(double real = 0.0, double imaginary = 0.0); //z = a + bi 
    ~Complex();
    Complex operator+(const Complex &complex) const;
    Complex operator-(const Complex &complex) const;
    Complex operator*(const Complex &complex) const;
    Complex operator~() const;

    friend Complex operator*(double num, const Complex &complex);
    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);
    friend std::istream &operator>>(std::istream &is, Complex &complex);

};

#endif