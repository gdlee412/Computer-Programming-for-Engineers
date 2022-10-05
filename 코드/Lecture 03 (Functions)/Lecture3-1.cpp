#include <iostream>
using namespace std;

double average(double a, double b)
{
    double ret = (a + b) / 2;
    return ret;
}

int main()
{
    double x = 1.1, y = 2.1;
    double avg = average(x, y);
    cout << avg;
    //printf("%f %f", a, b);
    //will not work since a and b are local variables to the function average
    return 0;
}
