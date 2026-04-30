/*
Exercise
Store multiple objects in binary file
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
    
    Employee employees[NUM_EMPLOYEES] = {
        Employee(1, "Alice", 55000.0),
        Employee(2, "Bob", 62000.5),
        Employee(3, "Charlie", 48000.0)
    };

    ofstream outFile("employees.dat", ios::binary);

    if (outFile.is_open()) {
        outFile.write((char*)&employees, sizeof(employees));
        outFile.close();
    }

    return 0;
}
