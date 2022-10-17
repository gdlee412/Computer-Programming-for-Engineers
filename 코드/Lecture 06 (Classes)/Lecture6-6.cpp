#include <iostream>

using namespace std;

class Obj
{
    public:
        static void printCounter();
        void setName(string str);
        void printInfo();
        static int count;
    private:
        string name;
        static int count2;
};

//static variables will keep true for all objects
int Obj::count = 0;
int Obj::count2 = 0;

void Obj::printInfo()
{
    cout << name << ": " << count << endl;
}

void Obj::printCounter()
{
    //error: not static
    //cout << name << ": " << count << endl;
    cout << count << endl;
}

void Obj::setName(string str)
{
    name = str;
}

int main()
{
    Obj obj1;
    Obj obj2;
    obj1.setName("obj1");
    obj2.setName("obj2");

    obj1.printCounter();
    obj2.printCounter();

    Obj::count = 1;
    
    obj1.printCounter();
    obj2.printCounter();
}