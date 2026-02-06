#include <iostream>
using namespace std;

int main(){
	int *NumPtr = new int;
	
	cout << "Enter an Integer: ";
	cin >> *NumPtr;
	
	cout << "Value entered: " << *NumPtr << endl;
	
	delete NumPtr;
	NumPtr = NULL;
	
	return 0;
}
