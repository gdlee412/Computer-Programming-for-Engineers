#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        DayOfYear(int monthval, int dayval){ 
            month = monthval; 
            day = dayval; 
        }
        //constructor delegation: a constructor invokes another constructor
        DayOfYear() :DayOfYear(1, 1){}
        void output() {cout << "month: " << month << " day: " << day << endl; }
    private:
        int month;
        int day;
};


int main()
{
    DayOfYear regularday(5, 20);
    DayOfYear invokingday;

    regularday.output();
    invokingday.output();
}