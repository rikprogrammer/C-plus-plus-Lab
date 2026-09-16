#include <iostream>
using namespace std;
class Shape
{
  private:
          double leng, brdt, rad;
  
  public:
  		  Shape(double l, double b)
		  {
		    leng = l;
			brdt = b;	
		  }
		  
		  Shape(double r)
		  {
		    rad = r;	
		  }
		  
		  double rectanglePerimeter()
		  {
		    return (2*(leng+brdt));
		  }
		  
		  double circlePerimeter()
		  {
		    return (2*3.14*rad);	
		  }
		  
		  ~Shape()
		  {
		    cout << "Destructor called\n";
		  }		
};

int main()
{
  float l, b, r;
  
  cout << "Enter the length of rectangle:- ";
  cin >> l;
  
  cout << "Enter the breadth of rectangle:- ";
  cin >> b;
  
  Shape rect(l, b);
  cout << "Rectangle perimeter:- " << rect.rectanglePerimeter() << endl;
  
  cout << "Enter the radius of circle:- ";
  cin >> r;	
  
  Shape circ(r);
  cout << "Circle perimeter:- " << circ.circlePerimeter();
  
  return 0;
}
