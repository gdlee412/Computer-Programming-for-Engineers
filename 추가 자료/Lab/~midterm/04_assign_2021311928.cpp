#include <iostream>
#include <string>
using namespace std;

int main( )
{
	string name, one, two, three, ntwo, nthree;
	cout << "Input name and phone number: ";getline(cin, name, ' ');
	getline(cin, one, '-');
	getline(cin, two, '-');
	getline(cin, three);
	int two_size = two.size();
	for(int i=0; i<two_size; i++)
		ntwo += "*";
	int three_size = three.size();
	for(int i=0; i<three_size; i++)
		nthree += "*";
	cout << "Name: " << name << endl;
	cout << "Masked Phone Number: " << one.append("-") << ntwo.append("-") << nthree;
}