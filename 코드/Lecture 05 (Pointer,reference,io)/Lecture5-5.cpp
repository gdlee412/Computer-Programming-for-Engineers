#include <iostream>
using namespace std;

int main()
{
    //these three lines will set all couts to have 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double price = 78.5909309283;
    cout << "The price is $" << price << endl;
    
    return 0;
}