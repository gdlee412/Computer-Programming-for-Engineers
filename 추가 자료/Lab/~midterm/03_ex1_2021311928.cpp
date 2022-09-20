#include <iostream>
using namespace std;
void increase(int &a) {
	a++;
}
void inverse(int &a) {
	a=0-a;
}

int main()
{
	int a;
	cout << "input integer :";
	cin >> a;
	increase(a);
	cout << "increased src :" << a << endl;
	inverse(a);
	cout <<"inversed src :" << a;
	return 0;
}