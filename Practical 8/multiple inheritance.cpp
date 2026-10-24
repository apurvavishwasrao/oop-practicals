#include <iostream>  // Header file for input and output
using namespace std; // To use cout and cin without std::

 // Base class for basic information
class basicInfo
{
public:
    string name; // Variable to store employee name
    int age;     // Variable to store employee age

    // Function to accept basic information
    void acceptBasicInfo()
    {
        cout << "Enter name: ";
        cin >> name; // Accept employee name

        cout << "Enter age: ";
        cin >> age; // Accept employee age
    }

    // Function to display basic information
    void displayBasicInfo()
    {
        cout << "Name: " << name << endl; // Display name
        cout << "Age: " << age << endl;   // Display age
    }
};

// Base class for department information
class deptInfo
{
public:
    string department; // Variable to store department name

    // Function to accept department information
    void acceptDeptInfo()
    {
        cout << "Enter department: ";
        cin >> department; // Accept department name
    }

    // Function to display department information
    void displayDeptInfo()
    {
        cout << "Department: " << department << endl; // Display department
    }
};

// Derived class inheriting from two base classes
class Employee : public basicInfo, public deptInfo
{
public:
    // Function to accept all employee information
    void acceptEmpInfo()
