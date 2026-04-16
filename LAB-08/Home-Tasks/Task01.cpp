/*

	Create a class Rectangle with private members length and width.
	Write a friend function to calculate the area and perimeter of the rectangle.
	Modify the program to take input from the user for length and width.
	Add validation: length and width must be positive numbers.
	
*/
#include <iostream>
#include <string>
using namespace std;

class Rectangle {
	private:
	    double length;
	    double width;
	
	public:
	    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}
	
	    friend double calculateArea(const Rectangle& rect);
	    friend double calculatePerimeter(const Rectangle& rect);
};
	
double calculateArea(const Rectangle& rect) 
{
    return rect.length * rect.width;
}

double calculatePerimeter(const Rectangle& rect) 
{
    return 2 * (rect.length + rect.width);
}

int main() {
    double l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    
    while (l <= 0) {
        cout << "Invalid input. Length must be a positive number: ";
        cin >> l;
    }

    cout << "Enter the width of the rectangle: ";
    cin >> w;
    
    while (w <= 0) {
        cout << "Invalid input. Width must be a positive number: ";
        cin >> w;
    }

    Rectangle rect(l, w);

    cout << "\nRectangle Details:\n";
    cout << "Area: " << calculateArea(rect) << "\n";
    cout << "Perimeter: " << calculatePerimeter(rect) << "\n";

    return 0;
}
