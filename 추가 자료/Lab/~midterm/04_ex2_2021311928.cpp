#include <iostream>
#include <string>
using namespace std;

int main( )
{
	string a, ra;
	cout << "Input String: "; getline(cin, a);
	int len = a.size();
	for(int i=0; i<len; i++)
		ra += a.substr(len-i-1, 1);
	cout << "Reversed String: " << ra;
}