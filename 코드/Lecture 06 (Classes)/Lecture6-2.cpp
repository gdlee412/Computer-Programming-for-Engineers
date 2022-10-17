#include <iostream>

using namespace std;

class DayOfYear //name of new class
{
    public:
        void output(); //member function implements everywhere
        void assign1(int m, int d);
        void assign2(int month, int day);
        int month;
        int day;
};

void DayOfYear::assign1(int m, int d)
{
    month = m;
    day = d;
}

void DayOfYear::assign2(int month, int day)
{
    this->month = month;
    this->day = day;
}

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

int main()
{
    DayOfYear birthday;

    birthday.month = 5;
    birthday.day = 11;
    birthday.output();

    birthday.assign1(9, 6);
    birthday.output();

    birthday.assign2(4, 20);
    birthday.output();

    return 0;
}