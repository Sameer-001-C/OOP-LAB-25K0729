/*
Task 4

Lab Task — Multilevel Inheritance
Create:

Person
Employee (inherits Person)
Developer (inherits Employee)
Display:

Name
Salary
Programming Language
*/

#include <iostream>
#include <string>
using namespace std;


class Person{
	private:
		string name;
	public:
		void setName(string n){
			name = n;
		}
		
		void displayName(){
			cout << "Name: " << name << endl;
		}
	
};

class Employee: public Person {
	private:
		double salary;
	public:
		void setSalary(double s){
			salary = s;
		}
		
		void displaySalary(){
			cout << "Salary : " << salary << endl;
		}
};

class Developer: public Employee {
	private:
		string programmingLanguage;
	public:
		void setPLanguage(string p){
			programmingLanguage = p;
		}
		
		void displayPLanguage(){
			cout << "Programming Language: " << programmingLanguage << endl;
		}
	
};



int main(){
	Developer D1;
	D1.setName("Ali");
	D1.setSalary(75000);
	D1.setPLanguage("C++");
	
	D1.displayName();
	D1.displaySalary();
	D1.displayPLanguage();
	
	return 0;
}


