/*
EXERCISE 3
Write a program that:

Takes user age
Throws exception if age < 18
*/
#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw "Exception: Age must be 18 or older.";
        }
        cout << "Age verified. Access granted." << endl;
    } catch (const char* errorMessage) {
        cout << errorMessage << endl;
    }

    return 0;
}
