#include <iostream>
using namespace std;

int main()
{
    auto x = 10;
    auto y = "Ten";
    double a = 1.0;
    decltype(a) b = 2.0;
    cout << x << " is " << y << endl;
    cout << a << b << endl;
    
    return 0;
}