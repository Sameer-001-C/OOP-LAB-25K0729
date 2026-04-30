/*
Exercise
Store 5 student records in file
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
};

int main() {
    const int NUM_STUDENTS = 5;
    Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> ws; 
        getline(cin, students[i].name);
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "------------------------" << endl;
    }

    ofstream outFile("students.txt");

    if (outFile.is_open()) {
        for (int i = 0; i < NUM_STUDENTS; ++i) {
            outFile << students[i].name << "\n";
            outFile << students[i].rollNumber << "\n";
        }
        outFile.close();
        cout << "5 student records successfully stored in students.txt" << endl;
    } else {
        cout << "Error: Could not open the file." << endl;
    }

    return 0;
}
