#ifndef Q4MYSTRING_H
#define Q4MYSTRING_H

#include <iostream>
using namespace std;

class MyString
{
    char *p;
    int size;

public:
    MyString();                
    MyString(int);             
    MyString(const MyString&);  
    ~MyString();                

    void display();
};

#endif