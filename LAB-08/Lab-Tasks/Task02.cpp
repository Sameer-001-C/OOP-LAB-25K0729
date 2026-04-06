/*
1. Create classes LibraryBook and Librarian.

2. Allow Librarian to access private details of the book (e.g., title, availability).

3. Implement logic to issue and return books.

4. Add condition: a book cannot be issued if it is already issued.
*/

#include <iostream>
#include <string>
using namespace std;

class LibraryBook{
	private:
		string title;
		bool availability;
	public:
		LibraryBook(string title) 
		{
			this->title = title; 
			availability = true; // yes, the book is available at the start, until it has been issued
		}
		
		
		friend class Librarian;
		
		
};


class Librarian{
	private:
		string name;
	public:
		Librarian(string name) : name(name) {}
		
		void getName()
		{
			cout << "Librarian Name: " << name << endl;
		}
		
		void issueBook(LibraryBook &b)
		{
			if(b.availability == false)
			{
				cout << "Book is not available!" << endl;
			}
			else
			{
				b.availability = false;
			}
			
		}
		
		void returnBook(LibraryBook &b)
		{
			b.availability = true;  // make it available again after it has been returned
		}
		
		void showBook(LibraryBook b)
		{
			cout << "Book Title: " << b.title << endl;
			cout << "Availability: " << (b.availability ? "yes" : "no") << endl;
		}
};



int main(){
	LibraryBook b1("The Call of the Wild");
	LibraryBook b2("1984");
	
	Librarian L("Ali Azhar");
	
	L.issueBook(b1);
	
	L.showBook(b1);
	
	L.issueBook(b1);
	
	L.showBook(b1);
	
	L.returnBook(b1);
	
	L.showBook(b1);
	
	
	return 0;
}
