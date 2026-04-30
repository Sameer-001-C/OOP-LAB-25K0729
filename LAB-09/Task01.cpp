/*
Task 1: Online Banking Transaction System

Description
Design a banking system where different transaction types are processed differently using abstraction.

Requirements
Create an abstract class Transaction
Data Members:
accountNumber
amount



Pure Virtual Function:
processTransaction()



Derived Classes:
Deposit
Withdrawal
Transfer



Functionality Requirements:

Each class must:

Implement processTransaction()
Display:
Transaction type
Account number
Amount
Final message after processing



Expected Output

Deposit Transaction
Account: 12345
Amount: 5000
Status: Amount Deposited Successfully



Concepts Tested

Abstraction in financial systems
Runtime polymorphism
Real-world modeling
*/
#include <iostream>
#include <string>

using namespace std;

class Transaction {
protected:
    string accountNumber;
    double amount;

public:
    Transaction(string accNum, double amt) : accountNumber(accNum), amount(amt) {}

    virtual ~Transaction() {}

    virtual void processTransaction() const = 0;
};

class Deposit : public Transaction {
public:
    Deposit(string accNum, double amt) : Transaction(accNum, amt) {}

    void processTransaction() const override {
        cout << "Deposit Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Deposited Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

class Withdrawal : public Transaction {
public:
    Withdrawal(string accNum, double amt) : Transaction(accNum, amt) {}

    void processTransaction() const override {
        cout << "Withdrawal Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Withdrawn Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

class Transfer : public Transaction {
private:
    string destinationAccount;

public:
    Transfer(string accNum, double amt, string destAcc) 
        : Transaction(accNum, amt), destinationAccount(destAcc) {}

    void processTransaction() const override {
        cout << "Transfer Transaction" << endl;
        cout << "Account: " << accountNumber << endl;
        cout << "Destination: " << destinationAccount << endl;
        cout << "Amount: " << amount << endl;
        cout << "Status: Amount Transferred Successfully" << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    const int NUM_TRANSACTIONS = 3;
    
    Transaction* transactions[NUM_TRANSACTIONS];

    transactions[0] = new Deposit("12345", 5000);
    transactions[1] = new Withdrawal("98765", 1500);
    transactions[2] = new Transfer("11223", 2500, "99887");

    for (int i = 0; i < NUM_TRANSACTIONS; ++i) {
        transactions[i]->processTransaction();
    }

    for (int i = 0; i < NUM_TRANSACTIONS; ++i) {
        delete transactions[i];
    }

    return 0;
}




