#include <iostream>
using namespace std;

//works for C++17
int main()
{
    /*
    int a[2] = {1, 2};
    //structure binding
    auto [x, y] = a;
    auto& [xr, yr] = a;
    cout << x << "," << y << endl;

    xr = 3;
    yr = 4;

    //what will be the result?
    cout << x << "," << y << endl;
    cout << a[0] << "," << a[1] << endl;
    cout << xr << "," << yr << endl;
    */
    /*
    //structure binding using structures
    struct
    {
            int i = 1;
            double d = 2;
    }f;
    auto [i, d] = f;
    cout << i << " " << d << endl;
    */

    //if structure binding doesnt exist
    struct
    {
        int i = 1;
        double d = 2;
    } f;
    int x = f.i;
    int y = f.d;
    cout << x << " " << y << endl;
    
    return 0;
}