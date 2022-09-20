#include <iostream>
#include <string>

using namespace std;

int main(){
		float celsius, f;
    cout << "How many Celsius now?" <<endl;
    cin >> celsius;
		f = celsius*9/5+32;
    cout << "Then it is " << f << " degrees Fahrenheit" <<endl;
    return 0;
}
