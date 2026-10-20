#include <iostream>
using namespace std;

class complex
{
    int real, img;  // Real and imaginary parts

public:
    // Function to accept the complex number
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    // Function to display the complex number
    void display()
    {
        cout << "The complex number is: ";

        if(img > 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << img << "i" << endl;
    }

    // Overload + operator for addition
    complex operator+(complex c)
    {
        complex add;

        add.real = real + c.real;
        add.img = img + c.img;

        return add;
    }

    // Overload - operator for subtraction
    complex operator-(complex c)
    {
        complex subtract;

        subtract.real = real - c.real;
        subtract.img = img - c.img;
