#include <iostream>
using namespace std;

void decayFunc(int *p)
{
    cout << "Size in decayFunc : ";
    cout << sizeof(p) << endl;
}

//pass size of array
void passSize(int *p, int num)
{
    cout << "After passing size:" << endl;
    for(int i = 0; i < num; i++)
    {
        cout << p[i] << endl;
    }

    cout << "Using array pointers:" << endl;
    for(int a : *(int(*)[5])p)
    {
        cout << a << endl;
    }
    
    cout << "Using array reference:" << endl;
    for(int& a : (int(&)[num])*p)
    {
        cout << a << endl;
    }
}

void passRef(int (&p)[5])
{
    for(int a : p)
    {
        cout << a << endl;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    cout << "Actual Size: ";
    cout << sizeof(a) << endl;

    decayFunc(a);
    passSize(a, 5);
    passRef(a);

    return 0;
}