#include <iostream>
using namespace std;

int a = 1;
int b = 2;
int c = 3;

int main()
{
    auto& arr1 = (int (&)[3])a;
    int (&arr2)[3] = (int (&)[3])a;

    for(int i = 0; i < 3; i++)
    {
        cout << arr1[i] << endl;
        cout << arr2[i] << endl;
    }
}