/*
Task 9

Lab Task — Virtual Inheritance
Modify the previous diamond problem:

Add virtual
Verify no ambiguity
Print memory address of base class from both paths
*/

#include <iostream>
#include <string>
using namespace std;

class Machine {
public:
    int baseVariable;
    
    void powerOn() {
        cout << "Machine is powered on." << endl;
    }
};


class Printer : virtual public Machine {};

class Scanner : virtual public Machine {};

class AllInOne : public Printer, public Scanner {};

int main() {
    AllInOne myDevice;
    
    cout << "--- Verifying No Ambiguity ---" << endl;
    
    myDevice.powerOn(); // This, which was previously a compilation error, is now able to be compiled properly
    
    cout << "\n--- Verifying Memory Addresses ---" << endl;
    
    cout << "Address via Printer path: " << &(myDevice.Printer::baseVariable) << endl;
    cout << "Address via Scanner path: " << &(myDevice.Scanner::baseVariable) << endl; //will be the same for both
    
    return 0;
}




