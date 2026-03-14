/*
Task 7

Home Task
Create:

BankAccount
Derive SavingsAccount using private inheritance
Try accessing base class data from main()
Explain the result.
*/


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	public:
		double balance;
		
		BankAccount(double initialBalance) : balance(initialBalance) {}
		
		void displayBalance() {
			cout << "Current Balance: $" << balance << endl;
		}
};

class SavingsAccount : private BankAccount {
	private:
		double interestRate;
		
	public:
		SavingsAccount(double initialBalance, double rate) 
			: BankAccount(initialBalance), interestRate(rate) {}
		
		void addInterest() {
			balance += (balance * interestRate); 
			displayBalance();    
		}
};

int main() {
	SavingsAccount mySavings(1000.0, 0.05);
	
	mySavings.addInterest(); 
	
	// mySavings.balance = 2000.0;     // will cause error since balance is a private member of BankAccount even though it was a public member for the base class
	// mySavings.displayBalance();     // will cause error since displayBalance is a private member function of BankAccount even though it is public in the base class
	
	return 0;
}






