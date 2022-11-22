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

template <class V>
//using, C++11 extension
using PairOfNums = Counter<V>;
//typedef Counter<V> PairOfNums
//typedef Counter<int> PairOfInts

//no output
int main()
{
    //class template initializing format
    Counter <int> intCnt;
    Counter <double> doubleCnt;

    PairOfNums<int> intCnt2;
    intCnt2.setCount(30);
    cout << intCnt2.getCount() << endl;

    PairOfNums<double> doubleCnt2;
    doubleCnt2.setCount(30.50);
    cout << doubleCnt2.getCount() << endl;

    return 0;
}