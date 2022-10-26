#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        DayOfYear(int monthValue, int dayValue)
        //2nd initializers
        : month(2), day(2)
        {
            //3rd and last initializers
            month = monthValue;
            day = dayValue;
        }
        void output();
    private:
        //first initializers
        int month = 1;
        int day = 1;
};

void DayOfYear::output()
{
    cout << "month: " << month << " day: " << day << endl;
}

int main()
{
    DayOfYear obj1(12,25);

    obj1.output();
    return 0;
}