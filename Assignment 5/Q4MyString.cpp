#include "Q4MyString.h"

// Default Constructor
MyString::MyString()
{
    size = 0;
    p = NULL;
}

// Parameterized Constructor
MyString::MyString(int s)
{
    size = s;
    p = new char[size + 1];

    cout << "Enter string: ";
    cin >> p;
}

// Copy Constructor
MyString::MyString(const MyString &obj)
{
    size = obj.size;

    p = new char[size + 1];

    for(int i = 0; i <= size; i++)
    {
        p[i] = obj.p[i];
    }
}

// Destructor
MyString::~MyString()
{
    delete[] p;
}

// Display Function
void MyString::display()
{
    cout << "String: " << p << endl;
}