#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

int main()
{
    set<char> s;
    //set automatically sorts ins ert values
    s.insert('A');
    s.insert('D');
    s.insert('B');
    s.insert('C');
    s.insert('C');
    s.insert('D');
    cout << "The set contains:\n";

    set<char>::const_iterator p;
    for(p = s.begin(); p != s.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Set contains 'C': ";
    if(s.find('C') == s.end())
    {
        cout << " no " << endl;
    }
    else
    {
        cout << " yes " << endl;
    }

    cout << "Removing C \n";
    s.erase('C');
    for(p = s.begin(); p != s.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Set contains 'C': ";
    if(s.find('C') == s.end())
    {
        cout << " no " << endl;
    }
    else
    {
        cout << " yes " << endl;
    }

    return 0;
}