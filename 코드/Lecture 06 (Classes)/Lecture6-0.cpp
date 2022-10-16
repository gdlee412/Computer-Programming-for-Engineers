#include <iostream>
#include <cmath>

using namespace std;

//struct CDAccountV1
struct CDAccountV1
{
  double balance;
  double interestRate;
  int term;  
};

//struct CDAccountV2
struct CDAccountV2
{
    int balance;
    int interestRate;
    int term;
}account2;

void printAccountInfo(CDAccountV1 myAccount)
{
    cout << "I have $" << myAccount.balance << " in my account." << endl;
    double rate = pow(1 + myAccount.interestRate, myAccount.term);
    cout << "After " << myAccount.term << " years, it will become $" << myAccount.balance * rate << "." << endl;
}

int main()
{
    //C++ format
    CDAccountV1 account1;
    //C format
    //struct CDAccountV1 account1;
    //

    account1.balance = 1000;
    account1.interestRate = 0.02;
    account1.term = 2;

    printAccountInfo(account1);

    // we can use the same names for member variables of different structures
    //this will use the CDAccountV2
    account2.balance = 2000;
    account2.interestRate = 0.02; //CHECK TYPE
    account2.term = 5;

    cout << "I have $" << account2.balance << " in my account." << endl;
    double rate2 = pow(1 + account2.interestRate, account2.term);
    cout << "After " << account2.term << " years, it will become $" << account2.balance * rate2 << "." << endl;

    return 0;
}