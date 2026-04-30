/*
Exercise
Read a file containing 10 numbers
Display only even numbers
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("numbers.txt");
    int number;

    if (inFile.is_open()) {
        cout << "Even numbers from the file:" << endl;
        for (int i = 0; i < 10 && inFile >> number; ++i) {
            if (number % 2 == 0) {
                cout << number << endl;
            }
        }
        inFile.close();
    } else {
        cout << "Error: Could not open the file." << endl;
    }

    return 0;
}
