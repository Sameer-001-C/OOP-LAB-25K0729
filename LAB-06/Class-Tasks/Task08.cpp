/*
Task 8

Lab Task — Diamond Problem
Implement the above structure.
Observe the compilation error.
Fix temporarily using:
obj.Student::show();

*/


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person" << endl;
    }
};

class Student : public Person {};

class Employee : public Person {};

class TeachingAssistant : public Student, public Employee {};

int main() {
    TeachingAssistant obj;
    
    // obj.show(); // will cause error here: request for member 'show' is ambiguous
    
    // Temporary fix using scope resolution operator:
    obj.Student::show(); 
    
    return 0;
}






