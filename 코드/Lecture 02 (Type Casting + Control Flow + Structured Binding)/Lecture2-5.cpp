#include <iostream>
using namespace std;

// for(auto& x : arr) x++;
// example of range-based for loop

//ex1: pass by value
/*
int main()
{
    int arr[] = {20, 30, 40, 50};
    for( auto x : arr )
        x++;
    for( auto x : arr )
        cout << x << " ";
    cout << endl;
}
*/

//ex1: pass by reference 
///*
int main()
{
    int arr[] = {20, 30, 40, 50};
    for( auto& x : arr )
        x++;
    for( auto x : arr )
        cout << x << " ";
    cout << endl;
}
//*/