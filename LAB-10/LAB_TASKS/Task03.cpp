/*
LAB TASK 3
Create a student grading system:

Input marks
Throw exception if:

marks < 0
marks > 100
Display appropriate message
*/
#include <iostream>

using namespace std;

int main() {
    int marks;

    cout << "Enter student marks: ";
    cin >> marks;

    try {
        if (marks < 0) {
            throw "Error: Marks cannot be less than 0.";
        }
        if (marks > 100) {
            throw "Error: Marks cannot be greater than 100.";
        }
        
        cout << "Marks recorded successfully: " << marks << endl;
    } catch (const char* errorMessage) {
        cout << errorMessage << endl;
    }

    return 0;
}
