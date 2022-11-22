#include <iostream>
using namespace std;

//Class Templates
class IntCount
{
    int count;
    public:
        IntCount() {count = 0;}
        int getCount() {return count;}
        void setCount(int val) {count = val;}
};

class DoubleCount
{
    double count;
    public:
        DoubleCount() {count = 0;}
        double getCount() {return count;}
        void setCount(double val) {count = val;}
};

template <class T>
class Counter
{
    T count;
    public:
        Counter() {count = 0;}
        T getCount() {return count;}
        void setCount(T val) {count = val;}
};

int main()
{
    //class template initializing format
    Counter <int> intCnt;
    Counter <double> doubleCnt;

    intCnt.setCount(10);
    doubleCnt.setCount(10.10);

    cout << intCnt.getCount() << endl;
    cout << doubleCnt.getCount() << endl;
}