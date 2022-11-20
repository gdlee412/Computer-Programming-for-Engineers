#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Money
{
    public:
        Money();
        Money(double amount);
        Money(int dollar, int cents);
        Money (int dollar); 
        int getDollars() const;
        int getCents() const;
        const Money& operator=(const Money& amount);
        void output() const;
        Money operator++(); //prefix
    //members all made public just for example
    //private:
        //negative amount represented as negative dollars and negative cents,
        // -4.50 = -4 and -50
        int dollars, cents;
        int dollarsPart(double amount) const;
        int centsPart(double amount) const;
        int round(double number) const;
};

Money::Money(): dollars(0), cents(0){}

Money::Money(double amount): dollars(dollarsPart(amount)), cents(centsPart(amount)){}

//uses cstdlib
Money::Money(int d, int c):dollars(d), cents(c)
{
    if((dollars < 0 && cents > 0) || (dollars > 0 && cents < 0)) 
    {
        cout << "Inconsistent money data.\n";
    }
}

Money::Money(int d):dollars(d), cents(0){}

int Money::getDollars() const
{
    return dollars; 
}

int Money::getCents() const
{
    return cents;
}

int Money::dollarsPart(double amount) const
{
    return static_cast<int>(amount);
}

int Money::centsPart(double amount) const
{
    double doubleCents = amount * 100;
    int intCents = (round(fabs(doubleCents))) % 100;
    if(amount < 0)
    {
        intCents = -intCents;
    }
    return intCents;
}

int Money::round(double number) const
{
    return static_cast<int>(floor(number + 0.5));
}


void Money::output() const
{
    int absDollars = abs(dollars);
    int absCents = abs(cents);
    if(dollars < 0 || cents < 0)
    {
        cout << "$-";
    }
    else
    {
        cout << "$";
    }
    cout << absDollars;

    if(absCents >= 10)
    {
        cout << "." << absCents;
    }
    else
    {
        cout << "." << '0' << absCents;
    }

    cout << endl;
}

const Money& Money::operator=(const Money& amount)
{
    dollars = amount.dollars - 1;
    return *this; //why should we return this
    //to return the values of the current class
}

//postfix version, not a member
Money operator++(Money& amount, int ignoreMe)
{
    //we need range checks for cents. this is just an example
    int dollars = amount.dollars++, cents = amount.cents++;
    return Money(dollars, cents);
}

Money Money::operator++()
{
    //we need range checks for cents. this is just for an example
    return Money(++dollars, ++cents);
}


int main()
{
    Money amount(10); 
    Money a = amount++; //copy constructor called

    cout << "a is: ";
    a.output();
    cout << endl;
    cout << "amount is: ";
    amount.output();
    cout << endl;

    amount = Money(10);
    amount.output();
    //prefix, amount is incremented before the = operator is used
    //so a.dollar becomes 10 - 1 = 9
    a = ++amount;
    a.output();
    amount.output();

    return 0;
}