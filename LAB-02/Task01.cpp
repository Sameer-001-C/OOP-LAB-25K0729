#include <iostream>
using namespace std;

int main(){
	int a = 15;
	int *aPtr = &a;
	
	cout << "Value of a: " << a << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Value using pointer: " << *aPtr << endl;
	
	return 0;
}
