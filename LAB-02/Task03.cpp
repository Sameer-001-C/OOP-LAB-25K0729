#include <iostream>
using namespace std;

void square(int *num){
	*num = (*num) * (*num);
}

int main(){
	int a = 5;
	
	square(&a);
	
	cout << a << endl;
	return 0;
}
