#include <iostream>
#include <string>
using namespace std;

struct Book{
	string title;
	string author;
	float price;
};

int main(){
	Book b;
	
	cout << "Enter title of Book: ";
	getline(cin, b.title);
	
	cout << "Enter author of the Book: ";
	getline(cin, b.author);
	
	cout << "Enter price of the Book: ";
	cin >> b.price;
	
	cout << "\nInformation Entered: \n" << endl;
	
	cout << "Title: " << b.title << endl;
	cout << "Author Name: " << b.author << endl;
	cout << "Price: " << b.price << endl;
	
	return 0;
}
