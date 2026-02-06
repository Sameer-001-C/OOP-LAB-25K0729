#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	int registrationNum;
	int semesterNum;
	
	cout << "Please Enter Your Full Name: ";
	getline(cin, name);
	
	cout << "Please Enter Regisration Number: ";
	cin >> registrationNum;
	
	cout << "Please Enter Semester Number: ";
	cin >> semesterNum;
	
	cout << "\nFull Name: " << name << endl;
	cout << "Registration Number: " << registrationNum << endl;
	cout << "Semester Number: " << semesterNum << endl;
	
	return 0;
}
