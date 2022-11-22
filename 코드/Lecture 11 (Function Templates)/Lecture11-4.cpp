#include <iostream>
using namespace std;

template <class T>
class Parent
{
    T val;

    public:
        Parent(T arg) { val = arg; }
        void print() { cout << val << endl; }
};

//inheriting parent with int type
class Child : public Parent<int>
{
    public:
        Child(int a) : Parent<int>(a) {}
};

//inheriting parent with another class template
template <class Z>
class Child2 : public Parent<Z>
{
    public:
        Child2(Z a) : Parent<Z>(a) {}
};

int main()
{
    Child obj1(10);
    Child2<int> obj2(5);
    Child2<double> obj3(1.5);
    
    obj1.print();
    obj2.print();
    obj3.print();
    
    return 0;
}