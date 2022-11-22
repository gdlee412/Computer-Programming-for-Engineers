#include <iostream>
using namespace std;

template <class T>
void showStuff1(int stuff1, T stuff2, T stuff3)
{
    cout << stuff1 << endl;
    cout << stuff2 << endl;
    cout << stuff3 << endl;
}

// when you need several different types
// but usually only need one "replaceable" type
// cannot have "unused" template parameters
template <class T1, class T2>
void showStuff2(int stuff1, T1 stuff2, T2 stuff3)
{
    cout << stuff1 << endl;
    cout << stuff2 << endl;
    cout << stuff3 << endl;
}

// cannot have "unused" template parameters
// Z2 type was not used in this example
/*
template<class Z1, class Z2>
void showStuff3(int stuff1, Z1 stuff2, Z1 stuff3)
{
    cout << stuff1 << endl;
    cout << stuff2 << endl;
    cout << stuff3 << endl;
}
*/

int main()
{
    int int1 = 1, int2 = 2, int3 = 3;
    showStuff1(int1, int2, int3);

    cout << "===================" << endl;

    double d1 = 1.1;
    char c1 = 'A';

    showStuff2(int1, d1, c1);

    return 0;
}