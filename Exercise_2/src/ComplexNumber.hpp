#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(double a, double b):
        real(a),
        imag(b)
    {

    }

    ComplexNumber() = default;


    ComplexNumber to_conjugate();

};


ostream& operator<<(ostream& os, const ComplexNumber &z);

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2);

ComplexNumber operator+(const double &z1, const ComplexNumber &z2);

bool operator==(const ComplexNumber &z1, const ComplexNumber &z2);

}

#endif


