#include <iostream>
#include <string>
using namespace std;

int sum(int size, int array[]){
	int total = 0;
	int i;
	for(i = 0; i < size; i++){
		total += array[i];
	}
	return total;
}

int main(){
	cout << "Please enter array size: ";
	int s;
	cin >> s;
	
	int array[s];
	
	int i;
	for(i = 0; i < s; i++){
		cout << "Enter Element " << i << ": ";
		cin >> array[i];
	}
	
	int total = sum(s, array);
	
	cout << "\nSum of the array is: " << total << endl;
	
	return 0;
}
