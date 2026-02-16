#include <iostream>
#include <string>
using namespace std;


class Car{
	private:
		int modelNum;
		string color;
	public:
		static int totalCars;
		
		Car(int modelNum, string color){
			this->modelNum = modelNum;
			this->color = color;
			totalCars++; 
		}
		
		void display() const{
			cout << "Model Number: " << modelNum << endl;
			cout << "Color: " << color << endl;
			cout << "------------------------------" << endl;
		}
		
		static void displayTotalCars(){
			cout << "Total Number Of Cars: " << totalCars << endl;
			cout << "------------------------------" << endl;
		}
};

int Car::totalCars = 0;

int main(){
	Car c1(23, "Red");
	Car c2(25, "Blue");
	Car c3(29, "Black");
	
	c1.display();
	c2.display();
	c3.display();
	
	Car::displayTotalCars();
	
	return 0;
}
