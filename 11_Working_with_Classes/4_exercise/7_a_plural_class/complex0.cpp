#include "complex0.h"

Complex::Complex(double real, double imaginary)
{
    real_ = real;
    imaginary_ = imaginary;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex &complex) const
{
    return Complex(real_ + complex.real_, imaginary_ + complex.imaginary_);
}

Complex Complex::operator-(const Complex &complex) const
{
    return Complex(real_ - complex.real_, imaginary_ - complex.imaginary_);
}

Complex Complex::operator*(const Complex &complex) const
{
    return Complex(real_ * complex.real_ - imaginary_ * complex.imaginary_, 
                    real_ * complex.imaginary_ + imaginary_ * complex.real_);
}

Complex Complex::operator~() const
{
    return Complex(real_, -imaginary_);
}

Complex operator*(double num, const Complex &complex)
{
    return Complex(num * complex.real_, num * complex.imaginary_);
}

std::ostream &operator<<(std::ostream &os, const Complex &complex)
{
    os << "(" << complex.real_ << "," << complex.imaginary_ << ")";
    return os;
}

std::istream &operator>>(std::istream &is, Complex &complex)
{
    //is >> complex.real_ >> complex.imaginary_;
    std::cout << "real: ";
    if (!(is >> complex.real_))
        return is;

    std::cout << "imaginary: ";
    is >> complex.imaginary_;
    return is;
}