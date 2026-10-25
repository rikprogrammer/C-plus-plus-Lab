#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Unary increment operator
    void operator++()
    {
        real++;
        imag++;
    }

    // Unary decrement operator
    void operator--()
    {
        real--;
        imag--;
    }

    // Binary addition operator
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Binary subtraction operator
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result;
    int choice;
    char ch = 'y';

    while (ch == 'y' || ch == 'Y')
    {
        cout << "--- Complex Number Operations ---\n";
        cout << "1. Increment a complex number\n";
        cout << "2. Decrement a complex number\n";
        cout << "3. Add two complex numbers\n";
        cout << "4. Subtract two complex numbers\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter a complex number:\n";
                c1.input();

                ++c1;

                cout << "After increment: ";
                c1.display();
                break;

            case 2:
                cout << "\nEnter a complex number:\n";
                c1.input();

                --c1;

                cout << "After decrement: ";
                c1.display();
                break;

            case 3:
                cout << "\nEnter first complex number:\n";
                c1.input();

                cout << "Enter second complex number:\n";
                c2.input();

                result = c1 + c2;

                cout << "Sum: ";
                result.display();
                break;

            case 4:
                cout << "\nEnter first complex number:\n";
                c1.input();

                cout << "Enter second complex number:\n";
                c2.input();

                result = c1 - c2;

                cout << "Difference: ";
                result.display();
                break;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;
    }

    cout << "\nProgram terminated.\n";

    return 0;
}
