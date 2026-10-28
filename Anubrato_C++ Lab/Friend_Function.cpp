#include <iostream>
using namespace std;

class B;

class A
{
  public:	
  
  int x;
  
  void getData()
  {
    cout << "Enter the 1st number:- ";
	cin >> x;	
  }
  
  void display()
  {
    cout << x;	
  }
  
  friend void swap(A &, B &);
};

class B
{
  public:
  	
  int y;
  
  void getData()
  {
    cout << "Enter the 2nd number:- ";
	cin >> y;	
  }
  
  void display()
  {
    cout << y;	
  }
  
  friend void swap(A &, B &);	
};

void swap(A &a, B &b)
{
  int temp = a.x;
  a.x = b.y;
  b.y = temp;	
}

int main()
{
  A obj1;
  B obj2;
  
  obj1.getData();
  obj2.getData();
  
  cout << "Before Swapping, the numbers:- " << endl;
  cout << "First Number:- ";
  obj1.display();
  cout << endl;
  cout << "Second Number:- ";
  obj2.display();
  
  swap(obj1, obj2);
  cout << endl;
  
  cout << "After Swapping, the numbers:- " << endl;
  cout << "First Number:- ";
  obj1.display();
  cout << endl;
  cout << "Second Number:- ";
  obj2.display();	
}
