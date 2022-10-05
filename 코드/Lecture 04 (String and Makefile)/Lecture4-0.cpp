#include <iostream>
using namespace std;

int main()
{
    string str = "Mary";

    cout << str[3] << " " << str.at(3) << endl;

    //from starting position 0, erase 1 character from string
    str.erase(0, 1);

    cout << str << endl;

    /*
    //c string
    char aCString[] = "My C-string";
    //string class
    string stringVar = "C++";
    strcpy(aCString, stringVar, cstr()); //allowed
    //aCString = stringVar; //illegal
    //aCString = stringVar.c_str(); //error cannot assign from string class to cstring type
    */

    return 0;
}