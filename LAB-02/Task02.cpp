#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *aPtr = &a;
	
	int temp = a;
	
	cout << "Before modification:\n" << endl;
	
	cout << "Value of a: " << a << endl;
	cout << "Value of aPtr: " << aPtr << "\n" << endl;
	
	*aPtr = 20;
	
	cout << "After Modification:\n" << endl;
	
	cout << "Value of a: " << a << endl;
	cout << "Value of aPtr: " << aPtr << endl;
	
	if(temp == a){
		cout << "\nTherefore, value of 'a' has not been modified" << endl;
	}
	else{
		cout << "\nTherefore, value of 'a' changed from " << temp << " to " << a << endl;
	}
	return 0;	
}
