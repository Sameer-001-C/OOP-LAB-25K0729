/*
Create classes CarEngine and Mechanic.
Make Mechanic a friend class of CarEngine.
Implement functions in Mechanic to:
Display engine horsepower
Upgrade engine horsepower
Add validation: upgraded horsepower must be between 100 and 1000.
(Optional) Add a Car class that contains CarEngine objects and show how Mechanic can access engines through Car.
*/

#include <iostream>
#include <string>

using namespace std;

class CarEngine {
	private:
	    int horsepower;
	
	public:
	    CarEngine(int hp) : horsepower(hp) {}
	
	    friend class Mechanic;
};

class Car {
	private:
	    string model;
	    CarEngine engine;
	
	public:
	    Car(string m, int hp) : model(m), engine(hp) {}
	
	    string getModel() { return model; }
	    CarEngine& getEngine() { return engine; }
};

class Mechanic {
	public:
	    void displayHorsepower(CarEngine& engine) {
	        cout << "Current Engine Horsepower: " << engine.horsepower << " HP" << endl;
	    }
	
	    void upgradeHorsepower(CarEngine& engine, int newHp) {
	        if (newHp >= 100 && newHp <= 1000) {
	            engine.horsepower = newHp;
	            cout << "Engine upgraded successfully to " << newHp << " HP." << endl;
	        } else {
	            cout << "Error: Invalid horsepower! Must be between 100 and 1000." << endl;
	        }
	    }
	
	    void serviceCar(Car& car, int newHp) {
	        cout << "Servicing car: " << car.getModel() << endl;
	        displayHorsepower(car.getEngine());
	        upgradeHorsepower(car.getEngine(), newHp);
	    }
};

int main() {
    string carModel;
    int initialHp, upgradeHp;

    cout << "Enter car model: ";
    getline(cin, carModel);
    cout << "Enter initial engine horsepower: ";
    cin >> initialHp;

    Car myCar(carModel, initialHp);
    Mechanic myMechanic;

    cout << "\n--- Mechanic Inspection ---" << endl;
    myMechanic.displayHorsepower(myCar.getEngine());

    cout << "\nEnter new horsepower value to upgrade: ";
    cin >> upgradeHp;
    
    myMechanic.serviceCar(myCar, upgradeHp);

    cout << "\n--- Final Status ---" << endl;
    myMechanic.displayHorsepower(myCar.getEngine());

    return 0;
}
