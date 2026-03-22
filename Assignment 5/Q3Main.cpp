#include<iostream>
#include"Q3Date.h"
using namespace std;
 int main()
    
 {
    Date d1(5,3,2026);
    Date d2(1,3,2026);

    cout<<" Date 1: ";
    d1.display();

    cout<<" Date 2: ";
    d2.display();

    // compare dates

    if(d1 == d2)
       cout<<"Dates are equal"<<endl;
    else 
       cout<<"Dates are not equal"<<endl;
    if(d1 != d2)
       cout<<"Dates are Difference"<<endl;


     // Difference
    
    int diff = d1 -d2 ;
    cout<<" Difference Between Dates: "<< diff << "days" << endl; 

    // Add Days
    Date d3 = d1 + 10;
    cout<<" Date After adding 10 days: ";
    d3.display();

    return 0;
}