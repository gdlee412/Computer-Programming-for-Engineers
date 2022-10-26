#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        DayOfYear(int, int);
        void output();
    private:
        int month = 1;
        int day = 1;
};

DayOfYear::DayOfYear(int month, int day)
    : month(month), day(day)
{
    cout << "In the constructor DayOfYear(" << month;
    cout << "," << day << ")" << endl;
    month = month;
    day = day;
}

void DayOfYear::output()
{
    cout << "month: " << month << " day: " << day << endl;
}

int main()
{
    DayOfYear obj1(5, 10); // uses stack memory
    DayOfYear* obj2 = new DayOfYear(2, 2); // uses heap memory 

    cout << "obj1: " << &obj1 << endl;
    cout << "obj2: " << obj2 << endl;
}