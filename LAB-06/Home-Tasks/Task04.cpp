/*
Task 4

Home Task
Create:

Appliance
WashingMachine
SmartWashingMachine
Add a smart control function.

*/
#include <iostream>
using namespace std;

class Appliance{
	public:
		void turnOn(){
			cout << "Appliance Turned On..." << endl;
		}
	
};

class WashingMachine: public Appliance{
	public:
		void washClothes(){
			cout << "Washing Clothes..." << endl;
		}
};

class SmartWashingMachine: public WashingMachine{
	public:
		void smartControl(){
			cout << "Smart Control System Activated..." << endl;
		}
};



int main(){
	
	SmartWashingMachine M1;
	M1.turnOn();
	M1.washClothes();
	M1.smartControl();
	return 0;
	
}


