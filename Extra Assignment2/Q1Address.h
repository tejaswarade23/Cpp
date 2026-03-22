#ifndef Q1ADDRESS_H
#define Q1ADDRESS_H

#include<iostream>
using namespace std;

class Address{
    private:
    int House_No ;
    string colony;
    string Area;
    string City;
    string Pincode;
     
    public:
    Address();

    Address(int , string , string , string , string );

    void Accept();

    void display();

    bool isSame(Address);

    bool operator==(Address);

};
#endif