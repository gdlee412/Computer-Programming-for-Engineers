#include <iostream>
using namespace std;

class A
{
    private:
        int num; 
    public:
        A(): num(10){}
        //friend function: not a member function, but has access to private members
        friend void printNum(A);
};

void printNum(A a)
{
    cout << "num: " << a.num << endl;
}

int main()
{
    A obj1;
    printNum(obj1);

    return 0;
}