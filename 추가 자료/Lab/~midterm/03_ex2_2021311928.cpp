#include <iostream>
#include <string>
using namespace std;

void change(string& b_n, string& n_n){
	b_n = n_n;
}
void change(int& b_a, int& n_a){
	b_a = n_a;
}
void change(int& b_a, int& n_a, double& b_s, double& n_s){
	b_a = n_a;
	b_s = n_s;
}
int main(){
	string name = "minsu";
	int age = 20;
	double score = 80.0;

	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl << endl;
	string n_name;
	int n_age;
	double n_score;

	cout << "input new name: ";
	cin >> n_name;
	change(name, n_name);
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl << endl;

	cout << "input new age: ";
	cin >> n_age;
	change(age, n_age);
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl << endl;

	cout << "input new age and new score: ";
	cin >> n_age >> n_score;
	change(age, n_age, score, n_score);
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "score: " << score << endl;

	return 0;
}
