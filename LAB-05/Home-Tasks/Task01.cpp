#include <iostream>
#include <string>
using namespace std;


class LibraryMember{
	private:
		static int totalMembers;
		string memberName;
		
	public:
		LibraryMember(string name) :memberName(name){
			totalMembers++;
		}
		
		static void displayTotalMembers(){
			cout << "Total Library Members: " << totalMembers << endl;
			cout << "---------------" << endl;
		}
		
		void displayName(){
			cout << "Member Name: " << memberName << endl;
			cout << "---------------" << endl;
		}
};

int LibraryMember::totalMembers = 0;

int main(){
	LibraryMember m1("Ali");
	LibraryMember m2("Hamza");
	LibraryMember m3("Ahmed");
	LibraryMember m4("Shayan");
	
	m1.displayName();
	m2.displayName();
	m3.displayName();
	m4.displayName();
	
	LibraryMember::displayTotalMembers();
	
}
