#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
	int age;
	public:
		setName(string n){
			name = n;
		}
		
		setAge(int a){
			age = a;
		}
		
		displayInfo(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

class Student : public Person{
	int rollNo;
	public:
		setRollNo(int r){
			rollNo = r;
		}
		
		displayStudent(){
			displayInfo();
			cout << "Roll No: " << rollNo << endl;
		}
};

int main(){
	Student s1;
	s1.setName("Ali");
	s1.setAge(21);
	s1.setRollNo(250727);
	
	s1.displayStudent();
}
