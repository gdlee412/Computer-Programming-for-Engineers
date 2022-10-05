#include <iostream>
using namespace std;

//will not change value in main, it will only stay in this function 
void callbyval(int a, int b)
{
    a = 5;
    b = 10;
}

//will change value in main
void callbyref(int& a, int& b)
{
    a = 5;
    b = 10;
}

int& callingreference(int& a)
{
    return a;
}

int main()
{
    int a = 1;
    int b = 2;

    cout << "a: " << a << "b: " << b << endl;

    callbyval(a, b);

    cout << "After call by value:\n" << "a: " << a << "b: " << b << endl;

    callbyref(a, b);
    cout << "After call by reference:\n" << "a: " << a << "b: " << b << endl;

    cout << "Before sending the reference:\n" << "a: " << a << endl;

    //by calling reference, a will be equated to 20 since the reference was sent
    callingreference(a) = 20;
    cout << "After sending the reference:\n" << "a: " << a << endl;
    return 0;
}