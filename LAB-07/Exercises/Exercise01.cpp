/*
Exercise 1
Create a class Calculator that overloads a function multiply() to perform:

Multiplication of two integers
Multiplication of three integers
Multiplication of two floating values
*/


#include <iostream>
using namespace std;


class Calculator{
	public:
		int Multiply(int num1, int num2){
			return num1*num2;
		}
		
		int Multiply(int num1, int num2, int num3){
			return num1*num2*num3;
		}
		
		float Multiply(float num1, float num2){
			return num1*num2;
		}
};

int main(){
	Calculator c1;
	
	cout << "5.5 * 10.5 = " << c1.Multiply(5.5f, 10.5f) << endl;
	cout << "5 * 10 = " << c1.Multiply(5, 10) << endl;
	cout << "5 * 10 * 20 = " << c1.Multiply(5, 10, 20) << endl;
	
	
	return 0;
}
