#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    const int patientId; 
    string name;

public:
    Patient(int id, string n) : patientId(id), name(n) {}

    void displayPatient() const {
        cout << "Patient ID: " << patientId << endl;
        cout << "Patient Name: " << name << endl;
    }
};

class Hospital {
private:
    static int totalPatients;
    Patient* patients[10];

public:
    Hospital() {
        for (int i = 0; i < 10; i++) {
            patients[i] = NULL;
        }
    }

    void addPatient(int id, string patientName) {
        if (totalPatients < 10) {
            patients[totalPatients] = new Patient(id, patientName);
            totalPatients++;
        } else {
            cout << "Hospital capacity reached!" << endl;
        }
    }

    static void displayTotal() {
        cout << "Total Patients in Hospital: " << totalPatients << endl;
    }

    void displayAll() const {
        cout << "\n--- Hospital Patient Records ---" << endl;
        for (int i = 0; i < totalPatients; i++) {
            cout << "Record #" << i + 1 << ":" << endl;
            
            patients[i]->displayPatient();
            cout << "--------------------" << endl;
        }
    }

    ~Hospital() {
        for (int i = 0; i < totalPatients; i++) {
            delete patients[i];
        }
    }
};

int Hospital::totalPatients = 0;

int main() {
    
    Hospital myHospital;

    myHospital.addPatient(1024, "Hamza");
    myHospital.addPatient(7767, "Wasif");
    myHospital.addPatient(6343, "Tahir");

    myHospital.displayAll();

    Hospital::displayTotal();

    return 0;
}
