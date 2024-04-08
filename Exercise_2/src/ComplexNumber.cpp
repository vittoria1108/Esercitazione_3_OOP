#include "ComplexNumber.hpp"
#include <cmath>

namespace ComplexNumberLibrary{

ComplexNumber ComplexNumber::to_conjugate()
{
    ComplexNumber z(real, -imag);
    return z;
}

ostream& operator<<(ostream& os, const ComplexNumber &z)
{
    if(abs(z.imag) < 1.1e-16)
        if(abs(z.real) < 1.1e-16)
            os << 0 ;
        else
            os << z.real;
    else if(abs(z.real) < 1.1e-16 && abs(z.imag) > 1.1e-16)
        os << z.imag <<"i";
    else if(z.imag > 1.1e-16)
        os << z.real << "+" << z.imag << "i";
    else
        os << z.real << z.imag << "i";

    return os;
}


ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2)
{
    ComplexNumber z(z1.real + z2.real, z1.imag + z2.imag);
    return z;
}

    ComplexNumber operator+(const double &z1, const ComplexNumber &z2)
{
    ComplexNumber z(z1 + z2.real, z2.imag);
    return z;
}

bool operator==(const ComplexNumber &z1, const ComplexNumber &z2)
{
    return (abs(z1.real - z2.real) < 1.1e-16 && abs(z1.imag - z2.imag) < 1.1e-16);

}

}
