/*
Task 7

Lab Task — Access Modifiers
Create:

Base class with:
public variable
protected variable
private variable
Create:

Public inheritance class
Protected inheritance class
Private inheritance class
Test accessibility inside and outside the class.

*/


#include <iostream>
#include <string>
using namespace std;


class Base {
	public:
		int pubVar;
	protected:
		int protVar;
	private:
		int privVar;
		
	public:
		Base() : pubVar(1), protVar(2), privVar(3) {}
};



class PublicDerived : public Base {
	public:
		void testInside() {
			cout << "--- Inside PublicDerived ---" << endl;
			cout << "Public Variable: " << pubVar << " (Accessible)" << endl;
			cout << "Protected Variable: " << protVar << " (Accessible)" << endl;
			
			cout << "Private Variable: Inaccessible" << endl;
			
			// privVar = 10; // will cause and error since private members are not accessible in a derived class
		}
};



class ProtectedDerived : protected Base {
	public:
		void testInside() {
			cout << "--- Inside ProtectedDerived ---" << endl;
			
			cout << "Public Variable: " << pubVar << " (Accessible, but it is now protected)" << endl;
			
			cout << "Protected Variable: " << protVar << " (Accessible)" << endl;
			
			cout << "Private Variable: Inaccessible" << endl;
			
			// privVar = 10; // error here for the same reason as for the above class
		}
};


class PrivateDerived : private Base {
	public:
		void testInside() {
			cout << "--- Inside PrivateDerived ---" << endl;
			
			cout << "Public Variable: " << pubVar << " (Accessible, but it is now private)" << endl;
			
			cout << "Protected Variable: " << protVar << " (Accessible, but it is now private)" << endl;
			
			cout << "Private Variable: Inaccessible" << endl;
			
			// privVar = 10; // error here for the same reason as for the above class
		}
};



int main() {
	PublicDerived obj1;
	ProtectedDerived obj2;
	PrivateDerived obj3;
	
	
	obj1.testInside();
	obj2.testInside();
	obj3.testInside();
	
	cout << "\n--- Testing Outside Accessibility (in main) ---" << endl;
	
	
	cout << "obj1.pubVar: " << obj1.pubVar << " (Accessible because it stayed public)" << endl;
	// obj1.protVar = 10; // will cause error since protected as well as private variables are inaccessible outside of a class
	

	// obj2.pubVar = 10; // will cause error since now due to 'protected Base', pubVar is now protected and hidden from main()
	
	
	// obj3.pubVar = 10; // will cause error since now due to 'private Base', pubVar is now private and hidden from main()

	return 0;
}




