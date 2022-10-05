#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;
    int* p1, * p2, * p3;

    p1 = &a;
    p2 = &b;
    //change address inside p3 to the address inside p1
    p3 = p1;

    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << "*p3: " << *p3 << endl;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;

    cout << "&p1: " << &p1 << endl;
    cout << "&p2: " << &p2 << endl;
    cout << "&p3: " << &p3 << endl;

    //only save the value inside p1 to p2
    *p2 = *p1;
    cout << "************************" << endl;
    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << "*p3: " << *p3 << endl;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;

    cout << "&p1: " << &p1 << endl;
    cout << "&p2: " << &p2 << endl;
    cout << "&p3: " << &p3 << endl;

    return 0;
}