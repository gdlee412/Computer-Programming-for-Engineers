#include <iostream>

using namespace std;

class DayOfYear
{
    public:
        void output(); // member function can implement anywhere
        void assign(int month, int day);
    private:
        int month;  //private variable only accessible to member functions
        int day;    // concept of encapsulation
};

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

void DayOfYear::assign(int month, int day)
{
    this->month = month;
    this->day = day;
}

int main()
{
    DayOfYear birthday;
    //Illegal accesses to private member variables
    //birthday.month = 5;
    //birthday.day = 11;
    birthday.assign(5, 11);
    birthday.output();
    return 0;
}