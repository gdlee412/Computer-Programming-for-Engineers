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
    if((month < 1) || (month > 12))
    {
        cout << "Illegal month value!" << endl;
        exit(1);
    }
    if((day < 1) || (day > 31))
    {
        cout << "Illegal day value!" << endl;
        exit(1);
    }

}

void DayOfYear::output()
{
    cout << "month: " << month << " day: " << day << endl;
}

int main()
{
    DayOfYear christmas(12,25);
    DayOfYear errorday(13, 10);
    christmas.output();
    return 0;
}