#include <iostream>

using namespace std;

class Money
{
    public:
        Money(int d, int c);
        int getDollars() const;
        int getCents() const;
        const Money operator-();
        void operator()(int d);
        void operator()(int d, int c);
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

// operator oberloading as member functions
const Money Money::operator-()
{
    return Money(-getDollars(), -getCents());
}

void Money::operator()(int d)
{
    dollars = d;
}

void Money::operator()(int d, int c)
{
    dollars = d;
    cents = c;
}

//Not recommended to overload &&, ||, and comma operators
//these are predefined versions for bool types and use short circuits
//comma operator guarantees left-to-right evaluation

//when overloaded, short-circuit evaluations or left-to-right evaluations are not guaranteed

int main()
{
    Money m1(10, 9);
    cout << "dollar: " << m1.getDollars() << " cents: " << m1.getCents() << endl;
    Money m2 = -m1;
    cout << "dollar: " << m2.getDollars() << " cents: " << m2.getCents() << endl;
    
    m1(20);
    cout << "dollar: " << m1.getDollars() << " cents: " << m1.getCents() << endl;

    m2(5,50);
    cout << "dollar: " << m2.getDollars() << " cents: " << m2.getCents() << endl;
    return 0;
}