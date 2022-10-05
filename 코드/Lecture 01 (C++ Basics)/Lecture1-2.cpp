#include <iostream>
using namespace std;

int main()
{
    //R = raw string literals: literally prints given string 
    string s = R"(s\t\\t\na)";
    //string s = "s\t\\t\na"; will print s - tab - \t - \n - a
    cout << s << endl;
}