#include<iostream>
#define SIZE 30
using namespace std;
 
void Swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}
void BubbleSort(int* arr, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1])	Swap(arr[j], arr[j+1]);
		}
	}
}
int main(void){
	int seed;
	cout << "Input Seed: ";
	cin >> seed;
	srand(seed);
	int arr[SIZE];
	cout << "Before" << endl;
	for(int i=0; i<SIZE; i++) {
		arr[i]=rand()%100;
		cout << arr[i] << ' ';
	}
	cout << endl;
	BubbleSort(arr,SIZE);
	cout << "After" << endl;
	for(int i=0; i<SIZE; i++)
		cout << arr[i] << ' ';
	return 0;
}