#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;
    int* p1 = &a;
    int* p2 = p1;
    //reference
    //cannot have null values
    int& ref1 = a;
    int& ref2 = ref1;

    cout << "&p1: " << &p1 << endl;
    cout << "&p2: " << &p2 << endl;
    //references share memory address
    cout << "&ref1: " << &ref1 << endl;
    cout << "&ref2: " << &ref2 << endl;
    
    return 0;
}