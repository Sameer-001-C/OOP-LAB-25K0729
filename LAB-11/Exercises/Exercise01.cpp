/*
Exercise
Write a program to:

Take user name and age
Store it in a file
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    ofstream outFile("user_info.txt");

    if (outFile.is_open()) {
        outFile << name << "\n";
        outFile << age << "\n";
        outFile.close();
    }

    return 0;
}
