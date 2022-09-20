#include <iostream>
using namespace std;

int main()
{
    //const_cast
    //casting / changing value of constant through reference / pointer
    // double& is a reference

    //example 1:
    //error since const_cast can only be used for reference / pointer values
    /*
    const double a = 1.1;
    double b = const_cast<double>(a);
    */

    //example 2
    /*
    double a = 1.1;
    const double& b = a;
    //error since value of constant b cannot be assigned
    //b = 2.2;

    double& c = const_cast<double&>(b);
    c = 2.2;
    // c is reference type of b and b is a reference type of a therefore all will become 2.2
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    */

    //example 3
    //Beware! It is undefined behavioe to modify a value which is initially declared as const.
    ///*
    const double a = 1.1;
    const double& b = a;
    double& c = const_cast<double&>(b);
    c = 2.2;
    //a is not modified since a is also a constant
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    //*/
    return 0;
}