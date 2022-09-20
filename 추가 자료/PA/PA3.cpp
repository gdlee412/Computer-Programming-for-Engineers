#include <iostream>
using namespace std;

class Matrix {
private :
	int row, col;
public :
	int m[100][100];
	Matrix(int x=0, int y=0):row(x),col(y){}
	int getr() const	{	return row; }
	int getc() const	{	return col; }
	void print() const {
		cout << "Matrix Operation Results" << endl;
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
					cout << m[i][j] << " ";
			}
			cout << "\n";
		}
	}
	friend istream& operator>>(istream& ins, Matrix& m);
};
istream& operator>>(istream& ins, Matrix& m){
	cout << "Matrix : ";
	int row = m.getr();
	int col = m.getc();
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			int x;
			ins >> x;
			m.m[i][j] = x;
		}
	}
	return ins;
}

const Matrix operator+(const Matrix &m1, const Matrix &m2){
	int row = m1.getr();
	int col = m1.getc();
	Matrix tmp(row, col);
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			tmp.m[i][j] = m1.m[i][j] + m2.m[i][j];
		}
	}
	return tmp;
}
const Matrix operator-(const Matrix &m1, const Matrix &m2){
	int row = m1.getr();
	int col = m1.getc();
	Matrix tmp(row, col);
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			tmp.m[i][j] = m1.m[i][j] - m2.m[i][j];
		}
	}
	return tmp;
}
const Matrix operator*(const Matrix &m1, const Matrix &m2){ //m
	int r1 = m1.getr();	int c1 = m1.getc();	int c2 = m2.getc();
	Matrix tmp(r1, c2);
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			int sum = 0;
			for(int k=0; k<c1; k++){
				sum += m1.m[i][k] * m2.m[k][j];
			}
			tmp.m[i][j] = sum;
		}
	}
	return tmp;
}
const Matrix operator*(const Matrix &m1, int n){ //scalar
	int row = m1.getr();
	int col = m1.getc();
	Matrix tmp(row, col);
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			tmp.m[i][j] = m1.m[i][j] * n;
		}
	}
	return tmp;
}

int main() {
	int n, r1, r2, c1, c2;
	char op;
	cout << "Matrix Shape : ";
	cin >> r1 >> c1;
	Matrix m1(r1, c1);
	cin >> m1;
	cout << "Operation : ";
	cin >> op; //1번 행렬과 연산자까지 받음
	
	if(op == '+'){
		cout << "Matrix Shape : ";
		cin >> r2 >> c2;
		Matrix m2(r2, c2);
		cin >> m2;
		if(r1!=r2 || c1!=c2){
			cout << "Not matched shape : (" << r1 << "," << c1 << ")" << " + " << "("<< r2 << "," << c2 << ")" << endl;
		} else {
      // Matrix Addition
      Matrix m3 = m1 + m2;
			m3.print();
		}
	} else if(op == '-'){   
		cout << "Matrix Shape : ";
		cin >> r2 >> c2;
		Matrix m2(r2, c2);
		cin >> m2;
		if(r1!=r2 || c1!=c2){
			cout << "Not matched shape : (" << r1 << "," << c1 << ")" << " - " << "("<< r2 << "," << c2 << ")" << endl;
		} else {
      // Matrix Subtraction
      Matrix m3 = m1 - m2;
			m3.print();
		}
	} else if(op == '*'){
		cout << "Matrix Shape : ";
		cin >> r2 >> c2;
		Matrix m2(r2, c2);
		cin >> m2;
		if(c1 != r2){
			cout << "Not matched shape : (" << r1 << "," << c1 << ")" << " * " << "("<< r2 << "," << c2 << ")" << endl;
		} else {
      // Matrix Multiplication
      Matrix m3 = m1 * m2;
			m3.print();
		}
	} else {
		cout << "Int : ";
		cin >> n;
      // Scalar Multiplication
      Matrix m3 = m1 * n;
		m3.print();
	}
	return 0;
}