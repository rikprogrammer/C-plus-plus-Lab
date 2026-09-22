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
        rad = 0;
    } 

    Shape(double r)
    {
        leng = 0;
        brdt = 0;
        rad = r;
    }

    double rectanglePerimeter()
    {
        return 2 * (leng + brdt);
    }

    double circlePerimeter()
    {
        const double PI = 3.141592653589793;
        return 2 * PI * rad;
    }

    ~Shape()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    double l, b, r;

    cout << "Enter the length of rectangle: ";
    cin >> l;

    cout << "Enter the breadth of rectangle: ";
    cin >> b;

    Shape rect(l, b);

    cout << "Rectangle perimeter: " << rect.rectanglePerimeter() << endl;

    cout << "Enter the radius of circle: ";
    cin >> r;

    Shape circ(r);

    cout << "Circle perimeter: " << circ.circlePerimeter() << endl;

    return 0;
}
