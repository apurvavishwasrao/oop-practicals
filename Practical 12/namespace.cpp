#include <iostream> // Header file for input and output

// First namespace
namespace P1
{
    // Function to add two numbers
    int add(int m, int n)
    {
        return m + n; // Return the sum
    }
}

// Second namespace
namespace P2
{
    // Function to subtract two numbers
    int subtract(int m, int n)
    {
        return m - n; // Return the difference
    }
}

int main()
{
    // Display the addition result
    std::cout << "Addition = ";
    std::cout << P1::add(5, 5) << std::endl;

    // Display the subtraction result
    std::cout << "Subtraction = ";
    std::cout << P2::subtract(5, 2);

    return 0; // End the program successfully
}
