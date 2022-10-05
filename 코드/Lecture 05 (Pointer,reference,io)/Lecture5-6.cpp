#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4;
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cin.get(c4);
    cout << "Output: " << c1 << c2 << c3 << c4 << endl;
    //just to take out the '\n'
    cin.get(c1);
    //using loop to iterate get function
    cout << "Enter a line of input and I will echo it: " << endl;
    char symbol;
    do{
        cin.get(symbol);
        cout << symbol;
    } while(symbol != '\n');
    //using getline to receive cstring input
    //cin.getline(variable, cstring size);
    char cstring[5];
    cout << "Input for C String: ";
    cin.getline(cstring, 5);
    cout << cstring << endl;

    //using getline for string class
    //getline.(cin, variable);

    string classstring;
    cout << "Input for class string: ";
    getline(cin, classstring);
    cout << classstring << endl;

    return 0;
}