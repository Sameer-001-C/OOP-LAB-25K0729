#include <iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter size: ";
	cin >> size;
	
	int *arr = new int[size];
	
	int i;
	for(i = 0; i < size; i++){
		cout << "Enter element " << i << ": ";
		cin >> arr[i];
	}
	
	int max = arr[0];
	int min = arr[0];
	
	for(i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		else if(arr[i] < min){
			min = arr[i];
		}
	}
	
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	
	delete[] arr;
	arr = NULL;
	
	return 0;
}
