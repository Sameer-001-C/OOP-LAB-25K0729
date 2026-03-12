#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	string brand;
	int speed;
	public:
		setBrand(string b){
			brand = b;
		}
		
		setSpeed(int s){
			speed = s;
		}
		
		showVehicle(){
			cout << "Brand: " << brand << endl;
			cout << "Speed: " << speed << endl;
		}
};

class Car : public Vehicle{
	string fuelType;
	public:
		setFuelType(string f){
			fuelType = f;
		}
		
		showCarDetails(){
			showVehicle();
			cout << "Fuel Type: " << fuelType << endl;
		}
};

int main(){
	Car c1;
	c1.setBrand("Mercedes");
	c1.setSpeed(160);
	c1.setFuelType("High Octane");
	
	c1.showCarDetails();
}
