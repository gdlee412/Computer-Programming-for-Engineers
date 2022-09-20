#include <iostream>
#include <string>
using namespace std;

int main( )
{
	string name, score, id;
	cout << "Type student ID: ";getline(cin, id);
	cout << "Type name and score: ";getline(cin, name, ':');
	getline(cin, score);
	cout << name.append("(").append(id).append(")") << "'s score is " << score;
}