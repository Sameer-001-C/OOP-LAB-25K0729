/*
Task 2
Create a base class Employee with function:

calculateSalary()
Create derived classes:

Manager
Developer
Intern

Override the salary calculation in each class.
*/

#include <iostream>
using namespace std;



class Employee{ // Base class
	public:
		double salary; //basic salary
		
		Employee() : salary(25000) {} // constructor to initialize basic employee salary
		
		
		virtual void calculateSalary() // virtual function to be overridden in the derived classes
		{
			cout << "Employee Salary: " << salary << endl;
		}
};



class Manager : public Employee{ // derived class 1
	private:
		double bonus;
	public:
		Manager() : Employee() , bonus(15000) {} // to initialize manager bonus
		
		void calculateSalary() // overridden function
		{
			cout << "Manager Salary: " << salary + bonus << endl;
		}
};


class Developer : public Employee{ // derived class 2
	private:
		double bonus;
	public:
		Developer() : Employee() , bonus(10000) {} // to initialize developer bonus
		
		void calculateSalary() // overridden function
		{
			cout << "Developer Salary: " << salary + bonus << endl;
		}
};


class Intern : public Employee{ // derived class 3
	private:
		double bonus;
	public:
		Intern() : Employee() , bonus(5000) {} // to initialize intern bonus
		
		void calculateSalary() // overridden function
		{
			cout << "Intern Salary: " << salary + bonus << endl;
		}
};



int main(){
	Employee e1;
	Manager m1;
	Developer d1;
	Intern I1;
	
	cout << "--- Method 1 ---\n" << endl;
	
	e1.calculateSalary();
	m1.calculateSalary();
	d1.calculateSalary();
	I1.calculateSalary();
	
	cout << "\n--- Method 2 ---\n" << endl;
	
	Employee *e2 = NULL;
	
	e2 = &e1;
	e2->calculateSalary();
	
	e2 = &m1;
	e2->calculateSalary();
	
	e2 = &d1;
	e2->calculateSalary();
	
	e2 = &I1;
	e2->calculateSalary();
	
	return 0;
}
