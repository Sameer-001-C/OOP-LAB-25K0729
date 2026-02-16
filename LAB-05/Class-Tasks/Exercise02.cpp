#include <iostream>
#include <string>
using namespace std;


class BankAccount{
	private:
		int accountNumber;
		string name;
	public:
		static float interestRate;
		
		BankAccount(int accountNumber, string name){
			this->accountNumber = accountNumber;
			this->name = name; 
		}
		
		void display() const{
			cout << "Account Number: " << accountNumber << endl;
			cout << "Account Holder Name: " << name << endl;
			cout << "------------------------------" << endl;
		}
		
		static void displayInterestRate(){
			cout << "Interest Rate: " << interestRate << endl;
			cout << "------------------------------" << endl;
		}
};

float BankAccount::interestRate = 2.5;

int main(){
	BankAccount a1(23, "Ali");
	BankAccount a2(25, "Yahya");
	BankAccount a3(29, "Sara");
	
	a1.display();
	a2.display();
	a3.display();
	
	BankAccount::displayInterestRate();
	
	return 0;
}
