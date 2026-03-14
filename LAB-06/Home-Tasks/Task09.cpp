/*
Task 9

Home Task
Create hybrid + virtual inheritance together:

Device
Camera
Phone
SmartPhone
Ensure only one Device exists.
*/

#include <iostream>
#include <string>
using namespace std;

class Device {
public:
    int deviceID; 
    
    Device() : deviceID(101){
	}
    void powerOn() {
        cout << "Device is powered on." << endl;
    }
};


class Camera : virtual public Device {
};


class Phone : virtual public Device {
};


class SmartPhone : public Camera, public Phone {
};

int main() {
    SmartPhone mySmartPhone;
    
    cout << "--- Testing Function Ambiguity ---" << endl;
    
    mySmartPhone.powerOn(); //will run properly since ambiguity eliminated through virtual keyword
    
    cout << "\n--- Verifying Memory Addresses ---" << endl;
    
    cout << "Device ID Address via Camera: " << &(mySmartPhone.Camera::deviceID) << endl;
    cout << "Device ID Address via Phone:  " << &(mySmartPhone.Phone::deviceID) << endl; //both will have the same address
    
    return 0;
}




