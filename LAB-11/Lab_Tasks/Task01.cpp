/*
Task
Modify the program (in exercise 1) to:

Append data instead of overwriting
Use ios::app
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

    ofstream outFile("user_info.txt", ios::app);

    if (outFile.is_open()) {
        outFile << name << "\n";
        outFile << age << "\n";
        outFile.close();
    }

    return 0;
}
