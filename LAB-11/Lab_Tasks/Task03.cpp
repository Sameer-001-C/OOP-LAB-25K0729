/*
Task
Add a function (in exercise 3) to display all students
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    Student() {}
    Student(string n, int r) : name(n), rollNumber(r) {}
};

void displayAllStudents() {
    ifstream inFile("students.txt");
    string name;
    string rollNumber;

    if (!inFile.is_open()) {
        cout << "Error: Could not open students.txt" << endl;
        return;
    }

    cout << "--- Student Records ---" << endl;
    while (getline(inFile, name) && getline(inFile, rollNumber)) {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "-----------------------" << endl;
    }

    inFile.close();
}

int main() {
    displayAllStudents();

    return 0;
}
