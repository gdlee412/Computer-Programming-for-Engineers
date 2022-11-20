#include <iostream>

using namespace std;

class Money
{
    public:
        Money(int d, int c);
        int getDollars() const;
        int getCents() const;
    private:
        int dollars;
        int cents;
};

Money::Money(int d, int c): dollars(d), cents(c){}

int Money::getDollars() const
{
    return dollars;
}

int Money::getCents() const
{
    return cents;
}

//unary operator overloading
const Money operator-(const Money& amount)
{
    return Money(-amount.getDollars(), -amount.getCents());
}

/*
we can only overload operators that pre-exists with the program such as +,-,%,/, etc
const Money operator^^(const Money& amount)
{
    return Money(-amount.getDollars(), -amount.getCents());
}
*/

/*
we cannot overload the operator for simple arithmetic operations
operator overloading must include at least one parameter of class or enum type
const int operator+(const int num1, const int num2)
{
    return num1 * num2;
}
*/

int main()
{
    Money m1(10, 9);
    cout << "dollar: " << m1.getDollars() << " cents: " << m1.getCents() << endl;
    Money m2 = -m1;
    cout << "dollar: " << m2.getDollars() << " cents: " << m2.getCents() << endl;
    return 0;
}