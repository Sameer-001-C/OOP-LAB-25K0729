/*
Task 1
Create a program that demonstrates function overloading for calculating area:

Functions required:

area(int side) : square
area(int length, int width) : rectangle
area(double radius) : circle
*/


#include <iostream>
using namespace std;

class Shape{
	public:
		int area(int side){
			return side*side;
		}
		
		int area(int length, int width){
			return length*width;
		}
		
		double area(double radius){
			return 3.14159265*radius*radius;
		}
};


int main(){
	Shape s1;
	
	cout << "Area of square of side 5: " << s1.area(5) << endl;
	cout << "Area of rectangle of side 5 by 10: " << s1.area(5,10) << endl;
	cout << "Area of circle of radius 5.0: " << s1.area(5.0) << endl;
	
	return 0;
}
