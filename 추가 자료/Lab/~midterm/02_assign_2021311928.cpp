#include <iostream>

using namespace std;

struct Student
{
	int mathScore;
	int scienceScore;
	float averageScore;
};
void SwapScore(int &score1, int &score2){
	int temp = score1;
	score1 = score2;
	score2 = temp;
}
int main(){
	Student Minsu;
	Student Haeun;
	
	cout << "Enter Minsu's math score: ";
	cin >> Minsu.mathScore;
	cout << "Enter Minsu's science score: ";
	cin >> Minsu.scienceScore;
	cout << "Enter Haeun's math score: ";
	cin >> Haeun.mathScore;
	cout << "Enter Haeun's science score: ";
	cin >> Haeun.scienceScore;
	SwapScore(Minsu.mathScore, Haeun.mathScore);
	Minsu.averageScore = (float)(Minsu.mathScore+Minsu.scienceScore)/2;
	Haeun.averageScore = (float)(Haeun.mathScore+Haeun.scienceScore)/2;
	cout << "Minsu average score: " << Minsu.averageScore << endl;
	cout << "Haeun average score: " << Haeun.averageScore << endl;
	if(Minsu.averageScore > Haeun.averageScore)	
		cout << "Minsu got a higher score" << endl;
	else if(Minsu.averageScore < Haeun.averageScore)
		cout << "Haeun got a higher score" << endl;
	else	cout << "Minsu and Haeun got a same score" << endl;
  return 0;
}