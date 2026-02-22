#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    const int vehicleID;
    
    string modelName;

public:
    Vehicle(int id, string name) : vehicleID(id), modelName(name) {
    }

    void displayDetails() {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Vehicle v1(1, "Tesla Model S");
    Vehicle v2(12, "Ford Mustang");

    v1.displayDetails();
    v2.displayDetails();

    return 0;
}
