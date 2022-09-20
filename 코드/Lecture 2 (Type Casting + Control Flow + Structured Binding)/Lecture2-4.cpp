#include <iostream>
using namespace std;

int main()
{
    //for loop using a range
    //ex1
    int arr[] = {20, 30, 40, 50};

    for( auto x: arr ) //beautiful
        cout << x << " ";
    cout << endl;

    /*
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) //messy :(
        cout << arr[i] << " ";
    cout << endl;
    */

   //ex2
   /*
   //cannot use range based for loop for pointers
   char* str = "abcd";
   for( auto c : str )
        cout << c << endl; 
    */
return 0;
}