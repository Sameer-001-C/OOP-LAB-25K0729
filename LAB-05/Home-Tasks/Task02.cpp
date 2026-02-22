#include <iostream>
#include <string>
using namespace std;

class SchoolAccount {
	private:
	    string studentName;
	    int grade;
	
	    static int tuitionFee;
	
	public:
	    SchoolAccount(string name, int grade) : studentName(name), grade(grade) {}
	
	    static void showFee() {
	        cout << "Current School Tuition Fee: $" << tuitionFee << endl;
	    }
	
	    void displayStudentInfo() {
	        cout << "Student: " << studentName << " | Grade: " << grade << endl;
	    }
};

int SchoolAccount::tuitionFee = 5000;

int main() {
    SchoolAccount s1("Abid", 10);
    SchoolAccount s2("Hareem", 12);

    s1.displayStudentInfo();
    s2.displayStudentInfo();

    cout << "-------------------------------" << endl;

    SchoolAccount::showFee();

    return 0;
}
