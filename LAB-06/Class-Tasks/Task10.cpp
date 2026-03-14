/*
Task 10

Final Lab Exercise (Comprehensive)
Design a complete system of your choice that must include:

At least 3 types of inheritance
Use of all access specifiers
One diamond structure
One virtual inheritance solution
Proper output demonstration
Examples:

School Management System
Banking System
Hospital System
Transport Management System

*/


//Designing the Hospital System:



#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    int nationalID; 
protected:
    string name;    
public:
    Person(int id, string n) : nationalID(id), name(n) {}
    
    void displayPerson() {
        cout << "Name: " << name << " | ID: " << nationalID << endl;
    }
};


class Doctor : virtual public Person {
protected:
    string specialty;
public:
    Doctor(int id, string n, string spec) : Person(id, n), specialty(spec) {}
    
    void displayDoctor() {
        cout << "Specialty: " << specialty << endl;
    }
};


class Manager : virtual public Person {
protected:
    string department;
public:
    Manager(int id, string n, string dept) : Person(id, n), department(dept) {}
    
    void displayManager() {
        cout << "Department: " << department << endl;
    }
};


class MedicalDirector : public Doctor, public Manager {
private:
    double executiveBonus; 
public:
    
    MedicalDirector(int id, string n, string spec, string dept, double bonus) 
        : Person(id, n), Doctor(id, n, spec), Manager(id, n, dept), executiveBonus(bonus) {}
        
    void displayDirector() {
        cout << "--- Medical Director Profile ---" << endl;
        
        displayPerson(); 
        displayDoctor();
        displayManager();
        cout << "Executive Bonus: $" << executiveBonus << endl;
    }
};


int main() {
    MedicalDirector dir(998877, "Dr. Sarah Khan", "Neurology", "Hospital Administration", 50000.0);
    
    dir.displayDirector();
    
    return 0;
}




