#include <iostream>
using namespace std;

//HSJ defined
#define HSJ

int main()
{
    //if HSJ not defined
    //this will be deleted in assembly code if defined
    #ifndef HSJ
    cout << "HSJ not defined" << endl;
    #endif  //ends the ifndef

    //if CPE not defined
    #ifndef CPE
    cout << "CPE not defined" << endl;
    #endif  //ends the ifndef

    return 0;
}