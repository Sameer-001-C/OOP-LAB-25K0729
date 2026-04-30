/*
Task
Combine file handling + exception handling
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName = "data.txt";
    string line;
    ifstream inFile;

    try {
        inFile.open(fileName.c_str());

        if (!inFile.is_open()) {
            throw "Error: The file could not be opened. Ensure the file exists.";
        }

        bool hasData = false;
        while (getline(inFile, line)) {
            cout << line << endl;
            hasData = true;
        }

        if (!hasData) {
            throw "Warning: The file is empty.";
        }

        inFile.close();

    } catch (const char* errorMessage) {
        if (inFile.is_open()) {
            inFile.close();
        }
        cout << errorMessage << endl;
    }

    return 0;
}
