#include <iostream>
#include <string>
using namespace std;

//stof = string to float value
//stod = string to double value
//stoi = string to int value
//stol = string to long value
//to_string = numerical to string value

int main()
{
    int i, j;
    double d;
    string s;
    i = stoi("35"); //string "35" to int 35
    d = stod("2.5"); //string "2.5" to double 2.5
    s = to_string(d * 2); //double 5.0 to string "5.0000"

    return 0;
}