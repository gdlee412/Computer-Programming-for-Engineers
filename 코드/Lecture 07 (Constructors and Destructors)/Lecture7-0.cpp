#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        //constructor
        //if constructor is not initialized, a default constructor with no parameters will be created
        //however, this default constructor will not work if a constructor is initialized
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
    DayOfYear christmas(12,25);

    christmas.output();
    return 0;
}