// Dynamic Allocation
// new and delete operators (C++)
#include <iostream>
using namespace std;

int main()
{
    // dynamically allocate 1 int to ptr
    //same as int* ptr = (int*)malloc(sizeof(int)* 1);
    int* ptr = new int;

    //release 1 int
    //same as if(ptr) free(ptr);
    //ptr = NULL;
    if(ptr!=nullptr) delete ptr;
    ptr = nullptr;

    //dynamically allocate 10 doubles
    //same as double* ptr = (double*)malloc(sizeof(double)* 10);
    double* ptr = new double[10];

    //release 10 doubles
    //same as if(ptr) free(ptr);
    //ptr = NULL;
    if(ptr!=nullptr) delete[] ptr;
    ptr = nullptr;

    typedef int* IntArrayPtr;
    //array of 5 pointers
    IntArrayPtr *m = new IntArrayPtr[5];

    for(int i = 0; i < 5; i++)
    {
        m[i] = new int[3];
    }//m is now a 5 by 3 array

    for(int i = 0; i < 5; i++)
    {
        //delete the 3 columns through for loop
        delete[] m[i];
    }
    //release the original array
    delete[] m;

    //NOTE: delete p; destroys dynamic memory, but p still points there (dangling pointer)
    //avoid dangling pointers by assigning pointer to nullptr after delete
}