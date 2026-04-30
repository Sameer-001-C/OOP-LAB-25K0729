/*
Final Task
Requirements
Add student
View students
Search student
Store data in file
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    void addStudent() {
        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        ofstream outFile("students.txt", ios::app);
        if (outFile.is_open()) {
            outFile << name << endl;
            outFile << rollNumber << endl;
            outFile.close();
            cout << "Student added successfully!" << endl;
        }
    }

    static void viewStudents() {
        ifstream inFile("students.txt");
        string name, roll;
        
        if (!inFile.is_open()) {
            cout << "No records found." << endl;
            return;
        }

        cout << "\n--- Student List ---" << endl;
        while (getline(inFile, name) && getline(inFile, roll)) {
            cout << "Name: " << name << " | Roll No: " << roll << endl;
        }
        inFile.close();
    }

    static void searchStudent() {
        ifstream inFile("students.txt");
        string searchRoll, name, roll;
        bool found = false;

        cout << "Enter Roll Number to search: ";
        cin >> searchRoll;

        while (getline(inFile, name) && getline(inFile, roll)) {
            if (roll == searchRoll) {
                cout << "\nStudent Found!" << endl;
                cout << "Name: " << name << endl;
                cout << "Roll Number: " << roll << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with Roll Number " << searchRoll << " not found." << endl;
        }
        inFile.close();
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n1. Add Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: s.addStudent(); break;
            case 2: Student::viewStudents(); break;
            case 3: Student::searchStudent(); break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
