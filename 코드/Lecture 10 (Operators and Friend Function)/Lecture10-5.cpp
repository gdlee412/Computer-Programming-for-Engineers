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
        double getAmount() const;
        int getDollars() const;
        int getCents() const;
        friend const Money operator+(const Money& amount1, const Money& amount2);
        friend ostream& operator<<(ostream& outputStream, const Money& amount);
        friend istream& operator>>(istream& inputStream, Money& amount);
    
    private:
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

Money::Money(int d): dollars(d), cents(0){}

double Money::getAmount() const
{
    return (dollars + cents * 0.01);
}

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

const Money operator+(const Money& amount1, const Money& amount2)
{
    int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
    int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents); // money can be negative
    int finalDollars = absAllCents / 100;
    int finalCents = absAllCents % 100;
    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }
    return Money(finalDollars, finalCents);
}

ostream& operator<<(ostream& outputStream, const Money& amount)
{
    int absDollar = abs(amount.dollars);
    int absCents = abs(amount.cents);
    if(amount.dollars < 0 || amount.cents < 0)
    {
        //accounts for dollars ==0 or cents == 0
        outputStream << "$-";
    }
    else
    {
        outputStream << "$";
    }
    outputStream << absDollar;

    if(absCents >= 10)
    {
        outputStream << "." << absCents;
    }
    else
    {
        outputStream << "." << '0' << absCents;
    }

    return outputStream;
}

istream& operator>>(istream& inputStream, Money& amount)
{
    char dollarSign;
    inputStream >> dollarSign; //hopefully
    if(dollarSign != '$')
    {
        cout << "No dollar sign in Money input" << endl;
        exit(1);
    }
    double amountAsDouble;
    inputStream >> amountAsDouble;
    amount.dollars = amount.dollarsPart(amountAsDouble);
    amount.cents = amount.centsPart(amountAsDouble);

    return inputStream;
}

int main()
{
    Money baseAmount(100, 60), fullAmount;
    fullAmount = baseAmount + 25;
    cout << fullAmount << endl;

    fullAmount = 30 + baseAmount;
    cout << fullAmount << endl;

    return 0;
}