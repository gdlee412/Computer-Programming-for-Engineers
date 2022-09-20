#include <iostream>
#include <string>
using namespace std;

int main(){
	float math, science, average;
	string grade;
	cout << "Enter a math score:" <<endl;
	cin >> math;
	cout << "Enter a science score:" <<endl;
	cin >> science;
	average = (math+science)/2;
	cout << "Average score: " << average <<endl;
	if (90<=average)	grade="A";
	else if (80<=average && average<90)	grade="B";
	else if (70<=average && average<80)	grade="C";
	else if (60<=average && average<70)	grade="D";
	else	grade="F";
	cout << "Grade: " << grade<<endl;
	return 0;
}