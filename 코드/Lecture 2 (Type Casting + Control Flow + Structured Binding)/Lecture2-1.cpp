#include <iostream>
using namespace std;

int main()
{
    cout << endl << "different stypes of casting" << endl;
    int myInt = 1;
    double myDouble = 2;
    //c style
    cout << (double) 1/2 << endl;
    cout << (double) (1/2) << endl;
    cout << 1/(double)2 << endl;
    //c++ style
    cout << double(1)/2 << endl;
    cout << myInt/myDouble << endl; //implicit type casting
    cout << double(myInt)/myDouble << endl;

    return 0;
}