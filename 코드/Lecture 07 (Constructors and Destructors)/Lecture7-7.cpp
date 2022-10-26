#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        
        DayOfYear()
        {
            month = 5;
            day = 4;
        }

        //destructor -> deletes all memory allocations
        //has a ~ in front, and only one destructor can be made
        ~DayOfYear()
        {
            cout << "Destructing" << endl;
        }        
        void output(){ cout << month << " " << day << endl; }

    private:
        int month;
        int day;
};

int main()
{
    DayOfYear a;

    a.output();

    //destructor automatically called

    return 0;
}