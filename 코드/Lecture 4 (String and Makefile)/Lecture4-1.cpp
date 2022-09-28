#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phrase;//initialize an empty string

    //two equivalent ways of initializing a string variable
    string adjective("fried"), noun("ants");
    string wish = "Bon appetite!";

    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl << wish << endl;

    //instead of strcpy, we can use str1 == str2 for string class
}