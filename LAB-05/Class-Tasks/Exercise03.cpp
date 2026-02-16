#include <iostream>
#include <string>
using namespace std;


class Book{
	private:
		const int ISBN;
		string title;
		string author;
	public:
		
		Book(int ISBN, string title, string author) : ISBN(ISBN){
			this->title = title;
			this->author = author;
		}
		
		void display() const{
			cout << "Book Title: " << title << endl;
			cout << "Author Name: " << author << endl;
			cout << "ISBN: " << ISBN << endl;
			cout << "------------------------------" << endl;
		}
		
};


int main(){
	Book b1(1003, "The Other Side Of Truth", "Beverly Naidoo");
	Book b2(1004, "1984", "George Orwell");
	Book b3(1005, "Pride And Prejudice", "Jane Austin");
	
	b1.display();
	b2.display();
	b3.display();
	
	return 0;
}
