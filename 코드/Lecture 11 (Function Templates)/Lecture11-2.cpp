#include <iostream>
using namespace std;

template <class T, int N>
//<class T, class N> //ILLEGAL
//constant integers cannot be type parameters
void SwapValues(T (&var1)[N], T (&var2)[N])
{
    for (int i = 0; i < N; i++)
    {
        T temp = var1[i];
        var1[i] = var2[i];
        var2[i] = temp;
    }
}

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {5, 6, 7};

    SwapValues(arr1, arr2);

    for (int i = 0; i < 3; i++)
    {
        cout << "arr1: " << arr1[i] << " arr2: " << arr2[i] << endl;
    }

    double arrd1[3] = {1.1, 2.2, 3.3};
    double arrd2[3] = {5.5, 6.6, 7.7};

    SwapValues(arrd1, arrd2);

    for (int i = 0; i < 3; i++)
    {
        cout << "arrd1: " << arrd1[i] << " arrd2: " << arrd2[i] << endl;
    }

    return 0;
}