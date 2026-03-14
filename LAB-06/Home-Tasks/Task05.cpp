/*
Task 5

Home Task 
Create:

Media
Book
Video
Audio
Demonstrate shared and specific features.
*/

#include <iostream>
#include <string>
using namespace std;


class Media{
	protected:
		string title;
		string releaseDate;
	public:
		Media(string title, string releaseDate) : title(title) , releaseDate(releaseDate) {
		}
		
		void displayMedia() {
			cout << "Title: " << title << endl;
			cout << "Release Date: " << releaseDate << endl;
		}
		
};



class Book : public Media {
	private:
		string author;
		string genre;
	public:
		Book(string title, string releaseDate, string author, string genre) : Media(title, releaseDate) , author(author) , genre(genre) {
		}
		
		void displayBook(){
			displayMedia();
			cout << "Author: " << author << endl;
			cout << "Genre: " << genre << endl;
		}
		
};


class Audio: public Media {
	protected:
		double audioLength;
		double audioSize;
	public:
		Audio(string title, string releaseDate, double audioLength, double audioSize) : Media(title, releaseDate), audioLength(audioLength) , audioSize(audioSize) {
		}
		
		void displayAudio(){
			displayMedia();
			cout << "Audio Length: " << audioLength << " seconds" << endl;
			cout << "Audio Size: " << audioSize << " MB" << endl;
		}
};

class Video : public Media {
	private:
		double videoLength;
		double videoSize;
	public:
		Video(string title, string releaseDate, double videoLength, double videoSize) : Media(title, releaseDate) , videoLength(videoLength) , videoSize(videoSize) {
		}
		
		void displayVideo(){
			displayMedia();
			cout << "Video Length: " << videoLength << " seconds" << endl;
			cout << "Video Size: " << videoSize << " MB" << endl;
		}
};


int main(){
	cout << "--- Book ---" << endl;
	Book b1("The Call Of The Wild", "1994", "Jack London", "Adventure");
	b1.displayBook();
	
	cout << "\n--- Video ---" << endl;
	Video v1("Me, at the zoo", "2005", 180, 77);
	v1.displayVideo();
	
	cout << "\n--- Audio ---" << endl;
	Audio a1("It's You", "2019", 220, 7.8);
	a1.displayAudio();
	
	return 0;
}










