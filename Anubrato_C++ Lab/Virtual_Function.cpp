#include <iostream>
#include <string>
using namespace std;

class Media
{
  public:
          string title, publication;
		  
		  virtual void read()
		  {
		    cout << "Enter title:- ";
			getline(cin, title);
			
			cout << "Enter publication:- ";
			getline(cin, publication);	
		  }	
		  
		  virtual void show()
		  {
		  	cout << "Title:- " << title;
		  	cout << "Publication:- " << publication;
		  }
};

class Book: public Media
{
  public:
          int pages;
		  
		  void read() override
		  {
		    cout << "Enter Book Details:- " << endl;
		    
			cout << "Enter title:- ";
			getline(cin, title);
			
			cout << "Enter publication:- ";
			getline(cin, publication);
			
			cout << "Enter the number of pages:- ";
			cin >> pages;	
		  }	
		  
		  void show() override
		  {
		  	cout << "Book Details:- " << endl;
		    cout << "Title:- " << title << endl;
		  	cout << "Publication:- " << publication << endl;
			cout << "Number of pages:- " << pages << endl;	
		  }
};

class Tape: public Media
{
  public:
          double playtime;
		  
		  void read() override
		  {
		    cout << "Enter Video Tape Details:- " << endl;
		    
			cout << "Enter title:- ";
			getline(cin, title);
			
			cout << "Enter publication:- ";
			getline(cin, publication);
			
			cout << "Enter the playtime in minutes:- ";
			cin >> playtime;	
		  }	
		  
		  void show() override
		  {
		  	cout << "Video Tape Details:- " << endl;
		    cout << "Title:- " << title << endl;
		  	cout << "Publication:- " << publication << endl;
			cout << "Playtime:- " << playtime << " minutes" << endl;	
		  }
};

int main()
{
  Book b;
  Tape t;
  Media *ptr;
  
  ptr = &b;
  ptr->read();
  ptr->show();
  
  cout << endl;
  
  ptr = &t;
  ptr->read();
  ptr->show();
  
  return 0;	
}
