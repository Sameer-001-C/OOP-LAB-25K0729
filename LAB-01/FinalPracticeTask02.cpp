#include <iostream>
#include <string>
using namespace std;

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
	
	int idx;
	int max = array[0];
	
	for(i = 0; i < s; i++){
		if(array[i] > max){
			max = array[i];
			idx = i;
		}
	}
	
	cout << "\nMaximum Element is: " << max << ", at index: " << idx << endl;
	
	return 0;
}
