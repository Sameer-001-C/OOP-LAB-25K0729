/*
Task 3

Home Task
Create:

Driver
Mechanic
Technician (inherits both)
Demonstrate both abilities.
*/


#include <iostream>
using namespace std;

class Driver{
	public:
		void drive(){
			cout << "I am driving" << endl;
		}
};


class Mechanic{
	public:
		void repair(){
			cout << "I am repairing" << endl;
		}
};

class Technician: public Driver, public Mechanic {
	
};



int main(){
	Technician T1;
	T1.drive();
	T1.repair();
	
	return 0;
}




