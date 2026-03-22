#include <iostream>
#include "Q4MyString.h"
using namespace std;

int main()
{
    int n;

    cout << "Enter size of string: ";
    cin >> n;

    MyString s1(n);   // Parameterized constructor

    cout << "Original ";
    s1.display();

    MyString s2 = s1;  // Copy constructor

    cout << "Copied ";
    s2.display();

    return 0;
}