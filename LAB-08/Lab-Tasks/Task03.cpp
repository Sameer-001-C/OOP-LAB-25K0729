/*

Create base class Person.
Derive Student and Employee.
Create TeachingAssistant inheriting both.
Demonstrate ambiguity and resolve using virtual inheritance.
Add attributes like ID, name, salary, GPA.

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
	protected:
		string name;
		int id;
	public:
		Person(int id, string name) 
		{
	        this->id = id;
	        this->name = name;
    	}
    	
    	void displayPerson() 
		{
        	cout << "ID: " << id << ", Name: " << name << endl;
    	}
};


class Student : virtual public Person {
	private:
		double gpa;
	public:
		Student(int id, string name, double gpa) : Person(id, name) 
		{
        	this->gpa = gpa;
    	}
    	
    	void displayStudent() 
		{
        	cout << "GPA: " << gpa << endl;
    	}
};


class Employee : virtual public Person {
	private:
		double salary;
	public:
		Employee(int id, string name, double salary) : Person(id, name) 
		{
        	this->salary = salary;
    	}

    	void displayEmployee() 
		{
        	cout << "Salary: " << salary << endl;
    	}
};


class TeachingAssistant : public Employee, public Student {
	public:
	    TeachingAssistant(int id, string name, double gpa, double salary) : Person(id, name), Student(id, name, gpa), Employee(id, name, salary) {}
	
	    void display() 
		{
	        displayPerson();
	        displayStudent();
	        displayEmployee();
	    }
};



int main()
{
	TeachingAssistant ta(101, "Ali", 3.8, 50000);

    ta.display();

    return 0;
}


