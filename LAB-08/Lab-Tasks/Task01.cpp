/*
Create a class Student with private marks.
Write a friend function to calculate average.
Modify program to accept input from user.
Add validation (marks should be between 0–100).
*/

#include <iostream>
using namespace std;

class Student{
	private:
		int marks[5];
		int subjectEntered;
	public:
		Student()  
		{
			subjectEntered = 0;
		}
		
		friend double calculateAverage(Student s);
		
	
		void setMarks(int marks)
		{
			if(marks >= 0 && marks <= 100)
			{
				if(subjectEntered < 5)
				{
					this->marks[subjectEntered] = marks;
					subjectEntered++;
				}
				else
				{
					cout << "All marks already entered!" << endl;
				}
				
			}
			else
			{
				cout << "Invalid Input! Marks can only be between 0 and 100." << endl;
			}
			
		}
		
		int getMarks(int i)
		{
			return marks[i];
		}
};



double calculateAverage(Student s)
{
	int total = 0;
	int i;
	for(i = 0; i < 5; i++)
	{
		total += s.getMarks(i);
	}
	return total/5;
}


int main(){
	Student s1;
	cout << "--- Please enter Marks For Student 1 ---\n" << endl;
	int temp;
	
	int i;
	for(i = 0; i < 5; i++)
	{
		cout << "Subject " << i+1 << ": ";
		cin >> temp;
		s1.setMarks(temp);
	}
	
	cout << "Average Marks: " << calculateAverage(s1) << endl;
	
	
	return 0;
}
