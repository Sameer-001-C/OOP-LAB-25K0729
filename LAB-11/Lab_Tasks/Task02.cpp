/*
Task
Count number of lines in a file
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("data.txt");
    string line;
    int count = 0;

    if (!inFile.is_open()) {
        cout << "Error: Could not open the file." << endl;
        return 1;
    }

    while (getline(inFile, line)) {
        count++;
    }

    cout << "Number of lines: " << count << endl;

    inFile.close();

    return 0;
}
