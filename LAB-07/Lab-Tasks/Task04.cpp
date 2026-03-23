/*

Task 4
Create a virtual function example where:

Base Class -> Vehicle

Derived Classes -> Car, Bike, Truck

Each class should override the function: startEngine()

Use base class pointer to call functions dynamically.

*/

#include <iostream>
using namespace std;




class Vehicle{ //Base class
	
	public:
		virtual void startEngine()
		{
			cout << "Vehicle Engine Started." << endl;
		}
		
};



class Car : public Vehicle { //derived class 1
	
	public:
		void startEngine()
		{
			cout << "Car Engine Started." << endl;
		}
		
};



class Bike : public Vehicle { //derived class 2
	
	public:
		void startEngine()
		{
			cout << "Bike Engine Started." << endl;
		}
		
};



class Truck : public Vehicle { //derived class 3
	
	public:
		void startEngine()
		{
			cout << "Truck Engine Started." << endl;
		}
		
};


int main(){
	Vehicle *v1;
	
	Car c1;
	Bike b1;
	Truck t1;
	
	v1 = &c1;
	v1->startEngine();
	
	v1 = &b1;
	v1->startEngine();
	
	v1 = &t1;
	v1->startEngine();
	
	return 0;
}
