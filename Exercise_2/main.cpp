#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace std;

int main()
{
    ComplexNumberLibrary::ComplexNumber z;

    cout << "default: " << z << endl;

    ComplexNumberLibrary::ComplexNumber z1(2, 0);

    cout << "z1: " << z1 << endl;

    ComplexNumberLibrary::ComplexNumber z2(3.2, 4);

    cout << "z2: " << z2 << endl;


    ComplexNumberLibrary::ComplexNumber sum = z1 + z2;

    cout << "sum of z1 + z2: " << sum << endl;


    if(z1==z2)
        cout << "the two numbers are equal" << endl;
    else
        cout << "the two numbers are not equal" << endl;


    ComplexNumberLibrary::ComplexNumber z1c = z1.to_conjugate();
    ComplexNumberLibrary::ComplexNumber z2c = z2.to_conjugate();

    cout << "conjugate of z1: " << z1c << endl;
    cout << "conjugate of z2: " << z2c << endl;

    cout << "sum of a double and a complex: " << 4.56 + z2 << endl;

    return 0;

}
