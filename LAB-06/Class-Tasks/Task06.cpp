/*
Task 6

Lab Task — Hybrid Inheritance
Create:

University
Faculty (inherits University)
Administration
HOD (inherits Faculty + Administration)
Demonstrate all inherited functions.
*/
#include <iostream>
#include <string>
using namespace std;

class University {
	protected:
		string name;
		string address;
	public:
		University(string name, string address) : name(name), address(address) {
		}
		
		void displayUniversity(){
			cout << "University Name: " << name << endl;
			cout << "University Address: " << address << endl;
		}
};

class Faculty : public University {
	protected:
		string departmentName;
		string subjectTaught;
	public:
		Faculty(string name, string address, string departmentName, string subjectTaught) : University(name, address), departmentName(departmentName), subjectTaught(subjectTaught) {
			
		}
		
		void displayFaculty(){
			cout << "Department Name: " << departmentName << endl;
			cout << "Subject Taught: " << subjectTaught << endl;
		}
		
};

class Administration {
	protected:
		string officeRoom;
		string administrativeRole;
	public:
		Administration(string officeRoom, string administrativeRole) : officeRoom(officeRoom) , administrativeRole(administrativeRole) {
		}
		
		void displayAdministration(){
			cout << "Office Room: " << officeRoom << endl;
			cout << "Administrative Role: " << administrativeRole << endl;
		}
		
};

class HOD : public Faculty, public Administration {
	private:
		string hodName;
		int yearsExperience;
	public:
		HOD(string name, string address, string departmentName, string subjectTaught, string officeRoom, string administrativeRole, string hodName, int yearsExperience) : Faculty(name, address, departmentName, subjectTaught) , Administration(officeRoom, administrativeRole) , hodName(hodName) , yearsExperience(yearsExperience) {
		}
		
		void displayHOD(){
			cout << "HOD Name: " << hodName << endl;
			cout << "Experience: " << yearsExperience << " Years" << endl;
		}
		
};



int main(){
	HOD H1("FAST NUCES", "Shah Latif Town, Karachi", "CS", "OOP", "AB1 A2", "HOD", "Ali", 12);
	
	H1.displayUniversity();
	H1.displayFaculty();
	H1.displayAdministration();
	H1.displayHOD();
	
	return 0;
}
