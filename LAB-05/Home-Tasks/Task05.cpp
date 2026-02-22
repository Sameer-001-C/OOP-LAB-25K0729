#include <iostream>
#include <string>
using namespace std;

class SIM {
private:
    string carrier;

public:
    SIM(string c) : carrier(c) {}

    void showCarrier() const {
        cout << "SIM Carrier: " << carrier << endl;
    }
};

class Mobile {
private:
    string model;
    SIM sim;

public:
    Mobile(string m, string c) : model(m), sim(c) {}

    void displayDetails() const {
        cout << "Mobile Model: " << model << endl;
        sim.showCarrier();
        cout << "----------------------" << endl;
    }
};

int main() {
    Mobile m1("iPhone 15", "Verizon");
    Mobile m2("Galaxy S24", "AT&T");

    m1.displayDetails();
    m2.displayDetails();

    return 0;
}
