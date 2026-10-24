#include <iostream>  // Header file for input and output
using namespace std; // To use cout and cin without std::

class shape
{
public:
    // Virtual function to draw a shape
    virtual void Draw()
    {
        cout << "Drawing the shape\n";
    }
};

// Circle class inherits from shape
class circle : public shape
{
public:
    // Override Draw() function for circle
    void Draw
