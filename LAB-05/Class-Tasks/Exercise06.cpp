#include <iostream>
#include <string>
using namespace std;

class Employee {
	private:
	    int id;
	    float salary;
	public:
	    void set(int id, float salary){
			this->id = id;
			this->salary = salary;
		}
		
	    void show() const {
	        cout << "Employee ID: " << id << endl;
	        cout << "Employee Salary: " << salary << endl;
	    }
	    
};

int main() {

    const int SIZE = 5;

    Employee e[SIZE];

	int i;
	
	float salary;
	int id;
	
    for (i = 0; i < SIZE; i++) {
    	cout << "Enter ID for Employee " << i+1 << ": ";
    	cin >> id;
    	
    	cout << "Enter Salary for Employee " << i+1 << ":";
    	cin >> salary;
    	
        e[i].set(id, salary);
        cout << "--------------------" << endl;
    }
	
    cout << "\nEmployee Records:\n";
    for (i = 0; i < SIZE; i++) {
        e[i].show();
        cout << "--------------------" << endl;
    }

    return 0;
}
