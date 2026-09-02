#include <iostream>
using namespace std;

void swap_Call_By_Value(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
  
  cout << "After CALL BY VALUE: a = " << x << " b = " << y << endl;
}

void swap_Call_By_Reference(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a, b;
  
  cout << "Enter the 1st integer:- ";
  cin >> a;
  
  cout << "Enter the 2nd integer:- ";
  cin >> b;
  
  cout << "Before CALL BY VALUE: a = " << a << " b = " << b << endl;
  swap_Call_By_Value(a, b);
  
  cout << "Before CALL BY REFERNCE: a = " << a << " b = " << b << endl;
  swap_Call_By_Reference(&a, &b);
  cout << "After CALL BY REFERNCE: a = " << a << " b = " << b << endl;
  
  return 0;
}
