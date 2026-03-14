/*
Task 3

Lab Task — Multiple Inheritance

Create:

Class Write
Function: write()
Class Speaker
Function: speak()
Class Author
Inherits from both
Call both functions from Author.
*/



#include <iostream>
#include <string>
using namespace std;


class Write{
	private:
		string name;
		int age;
	public:
		Write(string name, int age){
			this->name = name;
			this->age = age;
		}
		
		void write(){
			cout << name << " is writing" << endl;
		}
		
};


class Speaker{
	private:
		string name;
		int age;
	public:
		Speaker(string name, int age){
			this->name = name;
			this->age = age;
		}
		void speak(){
			cout << name << " is speaking" << endl;
		}
		
};


class Author : public Write, public Speaker{
	
	public:
		Author(string name = "DEFAULT", int age = -1) : Write(name, age), Speaker(name, age){
		}
};


int main(){
	Author A1("Ali", 21);
	A1.write();
	A1.speak();
	
	return 0;
}


