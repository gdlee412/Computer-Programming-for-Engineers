#include <iostream>
using namespace std;

int main()
{
    //named constant
    const double RATE = 6.9;
    double deposit;

    cout << "Enter the amount of your deposit: $";
    cin >> deposit;
    double newBalance_a, newBalance_b, newBalance_c;
    newBalance_a = deposit + deposit * (RATE/100);
    newBalance_b = deposit + deposit * (RATE/100);
    newBalance_c = deposit + deposit * (RATE/100);

    cout << "In one year, that deposit will grow to\n"
         << " $" << newBalance_a << " an amount worth waiting for.\n";
    return 0;
}