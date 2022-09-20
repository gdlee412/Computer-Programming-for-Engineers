#include <iostream>
using namespace std;

double mpg(int miles, int gallons)
{
    cout << "Hi" << endl;
    return miles / gallons;
}

double mpg(int miles, double gallons)
{
    cout << "Hello" << endl;
    return miles / gallons;
}

double mpg(double miles, double gallons)
{
    cout << "Bye" << endl;
    return miles / gallons;
}

int main()
{
    int x = 5;
    double y = 5.0;

    double a = mpg(x, 5);
    cout << a << endl;
    
    a = mpg(x, y);
    cout << a << endl;

    a = mpg(y, 5.0);
    cout << a << endl;

    return 0;
}