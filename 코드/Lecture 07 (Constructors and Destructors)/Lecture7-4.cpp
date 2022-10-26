#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        DayOfYear(int, int);
        //Constructor overloading
        DayOfYear(int month);
        DayOfYear();
        void output();
    private:
        //private constructors
        //used to restrict users from accessing these
        DayOfYear(int, double){} 
        DayOfYear(double, int){}
        DayOfYear(double, double){}
        int month = 1;
        int day = 1;
};

DayOfYear::DayOfYear(int month, int day)
    : month(month), day(day)
{}

DayOfYear::DayOfYear(int month)
    : month(month)
{}

DayOfYear::DayOfYear()
{}

void DayOfYear::output()
{
    cout << "month: " << month << " day: " << day << endl;
}

int main()
{
    DayOfYear christmas(12,25);
    DayOfYear monthonly(7);
    DayOfYear nodata;

    christmas.output();
    monthonly.output();
    nodata.output();
    return 0;
}