#include <iostream>
using namespace std;
//default arguments must always start from the end of the parameter
void show_volume(int length, int width = 1, int height = 1)
{
    cout << length * width * height << endl;
}

int main()
{
    show_volume(2,4,6); //all arguments supplied
    show_volume(3,5);  //height defaulted to 1
    show_volume(7);  //width & height defaulted to 1
}