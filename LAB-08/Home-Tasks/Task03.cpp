/*
Create a base class Person with private attributes: ID and name.
Derive two classes from Person: Student and Employee.
Create a class TeachingAssistant that inherits from both Student and Employee.
Demonstrate ambiguity when accessing ID or name in TeachingAssistant.
Resolve the ambiguity using virtual inheritance.
Add additional attributes:
Student -> GPA
Employee -> Salary
TeachingAssistant -> both GPA and Salary
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
	private:
	    int id;
	    string name;
	
	public:
	    Person(int i, string n) : id(i), name(n) {}
	
	    int getId() const { return id; }
	    
	    string getName() const { return name; }
	
	    void displayPerson() const 
		{
	        cout << "ID: " << id << "\nName: " << name << endl;
	    }
};

class Student : virtual public Person 
{
	private:
	    double gpa;
	
	public:
	    Student(int i, string n, double g) : Person(i, n), gpa(g) {}
	
	    void displayStudent() const 
		{
	        cout << "GPA: " << gpa << endl;
	    }
};

class Employee : virtual public Person {
	private:
	    double salary;
	
	public:
	    Employee(int i, string n, double s) : Person(i, n), salary(s) {}
	
	    void displayEmployee() const 
		{
	        cout << "Salary: $" << salary << endl;
	    }
};

class TeachingAssistant : public Student, public Employee {
	public:
	    TeachingAssistant(int i, string n, double g, double s) : Person(i, n), Student(i, n, g), Employee(i, n, s) {}
	
	    void displayTA() const 
		{
	        cout << "--- Teaching Assistant Details ---" << endl;
	        
	        cout << "Demonstrating resolved ambiguity:" << endl;
	        cout << "Accessing ID directly: " << getId() << endl; 
	        cout << "Accessing Name directly: " << getName() << endl << endl;
	
	        displayPerson();
	        displayStudent();
	        displayEmployee();
	    }
};

int main() 
{
    int id;
    string name;
    double gpa, salary;

    cout << "Enter Teaching Assistant ID: ";
    cin >> id;
    cin.ignore(); 

    cout << "Enter Teaching Assistant Name: ";
    getline(cin, name);

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n";

    TeachingAssistant ta(id, name, gpa, salary);
    ta.displayTA();

    return 0;
}

