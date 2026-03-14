/*
Home Task
Create:

Shape
Circle
Calculate area of circle using inherited radius.
*/
#include <iostream>
using namespace std;

class Shape{
	protected:
		double radius;
	public:
	Shape(double r) : radius(r){}
	
};

class Circle : Shape {
	public:
		Circle(double r) : Shape(r) {}
		
		double CalculateArea(){
			return 3.14159265 * radius * radius;
		}
};



int main(){
	Circle c1(5.5);
	cout << "Area of Circle: " << c1.CalculateArea() << endl;
}




