/*
Exercise
Handle file opening error
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("non_existent_file.txt");

    if (!inFile.is_open()) {
        cout << "Error: Failed to open the file. Please check if the file exists and you have the correct permissions." << endl;
        return 1;
    }

    cout << "File opened successfully." << endl;
    
    inFile.close();

    return 0;
}
