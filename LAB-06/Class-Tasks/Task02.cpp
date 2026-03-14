#include <iostream>
using namespace std;

class Employee{
	protected:
		int ID;
		double Salary;
	public:
		void setData(int id, double salary){
			ID = id;
			Salary = salary;
		}
		
		void showEmployee(){
			cout << "ID: " << ID << endl;
			cout << "Base Salary: " << Salary << endl;
		}
		
};

class Manager : public Employee {
	private:
		double Bonus;
	public:
		void setBonus(double b){
			Bonus = b;
		}
		
		void showManager(){
			showEmployee();
			cout << "Bonus: " << Bonus << endl;
			cout << "Complete Salary: " << Salary + Bonus << endl;
		}
		
};


int main(){
	Manager m1;
	m1.setData(1234, 25000);
	m1.setBonus(5000);
	m1.showManager();
	
	return 0;
}








