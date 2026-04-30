/*
Task
Read and display all objects
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    Employee() {}
    Employee(int i, string n, double s) : id(i), name(n), salary(s) {}
};

int main() {
    const int NUM_EMPLOYEES = 3;
    Employee employees[NUM_EMPLOYEES];

    ifstream inFile("employees.dat", ios::binary);

    if (inFile.is_open()) {
        inFile.read((char*)&employees, sizeof(employees));
        inFile.close();

        for (int i = 0; i < NUM_EMPLOYEES; i++) {
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            cout << "-----------------------" << endl;
        }
    } else {
        cout << "Error: Could not open file." << endl;
    }

    return 0;
}
