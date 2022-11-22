#include <iostream>
using namespace std;


template<class T> // <typename T> works also
void SwapValues(T& var1, T& var2)
{
    T temp = var1;
    var1 = var2;
    var2 = temp;
}


int main()
{
    int x = 5, y = 10;
    cout << "BEFORE SWAP: " << endl;
    cout << "x = " << x << "\ny = " << y << endl;
    SwapValues(x, y);
    cout << "AFTER SWAP: " << endl;
    cout << "x = " << x << "\ny = " << y << endl;

    char a = 'a', b = 'b';
    cout << "BEFORE SWAP: " << endl;
    cout << "a = " << a << "\nb = " << b << endl;
    SwapValues(a, b);
    cout << "AFTER SWAP: " << endl;
    cout << "a = " << a << "\nb = " << b << endl;

    //can use the function template as long as it makes sense
    //example, arrays won't work in SwapValues

    return 0;
}