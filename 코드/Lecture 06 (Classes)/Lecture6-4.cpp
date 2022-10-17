#include <iostream>

using namespace std;

class CPE
{
    int studentNo;
    public:
    //constructor function
    //usually sets the default values of the variables
    CPE(int num = 0)
    {
        studentNo = num;
    }
    //getter function / accessor function
    int getNumOfStudent() const 
    { 
        return studentNo; 
    }
    //setter function / mutator function
    int setNumOfStudent(int num)
    {
        return studentNo = num;
    }
};

int main()
{
    const CPE one;
    CPE two;

    //this one will not work since one is set as const CPE,
    //the variables of this class cannot be mutated
    //one.setNumOfStudent(52);
    //this will work
    two.setNumOfStudent(52);

    cout << "The value using object d : " << one.getNumOfStudent() << endl;
    cout << "The value using object d1 : " << two.getNumOfStudent() << endl;
}