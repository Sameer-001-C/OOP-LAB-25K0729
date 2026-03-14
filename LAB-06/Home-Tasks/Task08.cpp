/*
Task 8

Home Task
Create your own diamond structure using:

Machine
Printer
Scanner
AllInOne
Show ambiguity problem.
*/


#include <iostream>
#include <string>
using namespace std;

class Machine {
public:
    void powerOn() {
        cout << "Machine is powered on." << endl;
    }
};

class Printer : public Machine {};

class Scanner : public Machine {};

class AllInOne : public Printer, public Scanner {};

int main() {
    AllInOne myDevice;
    
    // myDevice.powerOn(); // will cause the error: request for member 'powerOn' is ambiguous
    
    // Temporary fix using scope resolution
    myDevice.Printer::powerOn(); 
    myDevice.Scanner::powerOn();
    
    return 0;
}
