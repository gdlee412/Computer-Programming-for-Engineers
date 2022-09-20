#include <iostream>
using namespace std;

//explixit type casting
int main()
{
    // same as (double) 17 / 5.5
    cout << double(17) / 5.5 << endl;

    int myInt = 17;
    double myDouble = 5.5;
    //same as (double) myInt / myDouble
    cout << double(myInt) / myDouble << endl;

    return 0;
}   