/*
Task 5

Lab Task — Hierarchical Inheritance
Create:

Class Account
Data: Account Number
Function: showAccount()
Class SavingsAccount
Function: calculateInterest()
Class CurrentAccount
Function: calculateOverdraft()
*/
#include <iostream>
#include <string>
using namespace std;


class Account{
	private:
		string accountNumber;
	public:
		Account(string accNum){
			accountNumber = accNum;
		}
		
		void showAccount(){
			cout << "Account Number: " << accountNumber << endl;
		}
		
};


class SavingsAccount: public Account {
	public:
		SavingsAccount(string accNum) : Account(accNum){
			
		}
		
		void calculateInterest(){
			cout << "Calculating Interest..." << endl;
		}
};


class CurrentAccount : public Account{
	public:
		CurrentAccount(string accNum) : Account(accNum) {
		}
		
		void calculateOverdraft(){
			cout << "Calculating Overdraft..." << endl;
		}
};


int main(){
	SavingsAccount s1("01234");
	s1.showAccount();
	s1.calculateInterest();
	
	CurrentAccount c1("56789");
	c1.showAccount();
	c1.calculateOverdraft();
	
	return 0;
}




