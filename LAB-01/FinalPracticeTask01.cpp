#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cout << "Please enter a string: ";
	getline(cin, str);
	
	int i = 0, count = 0;
	
	while(str[i] != '\0')	{
		switch(str[i]){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
		}
		i++;
	}
	
	cout << "Numebr of vowels: " << count << endl;
	return 0;
}
