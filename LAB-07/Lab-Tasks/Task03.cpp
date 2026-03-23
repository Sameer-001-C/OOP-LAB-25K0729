/*
Task 3
Write a program that demonstrates operator overloading for complex numbers using:

+
-
*

*/

#include <iostream>
using namespace std;


class Complex{
	public:
		double real;
		double imaginary;
		
		Complex(double real, double imaginary) : real(real) , imaginary(imaginary) {}
		
		
		Complex operator + (Complex c1) // operator overloading for addition
		{
			Complex temp(0,0);
			
			temp.real = real + c1.real;
			temp.imaginary = imaginary + c1.imaginary;
			
			return temp;
		}
		
		
		Complex operator - (Complex c1) // operator overloading for subtraction
		{
			Complex temp(0,0);
			
			temp.real = real - c1.real;
			temp.imaginary = imaginary - c1.imaginary;
			
			return temp;
		}
		
		
		Complex operator * (Complex c1) // operator overloading for multiplication
		{
			Complex temp(0,0);
			
			temp.real = real*c1.real - (imaginary*(c1.imaginary));
			temp.imaginary = real*c1.imaginary + imaginary*c1.real;
			
			return temp;
		}
		
		void display() // function to display the complex number
		{
			if(imaginary < 0)
			{
				cout << real << " " << imaginary << "i" << endl;
			}
			else
			{
				cout << real << " + " << imaginary << "i" << endl;	
			}
			
		}
		
};


int main(){
	Complex c1(2,3);
	Complex c2(4,6);
	
	Complex c3 = c1 + c2;
	Complex c4 = c2 - c1;
	Complex c5 = c1*c2;
	
	c3.display();
	c4.display();
	c5.display();
	
	return 0;
}
