#include<iostream>
#include "Q3Date.h"
using namespace std ;
Date::Date()
{
   dd = 1;             // Defalut Constructor
   mm = 1;
   yyy = 2000;
}

Date::Date (int d,int m ,int y)
{
     dd = d;
     mm = m;           // Parameterized Constructor
     yyy = y;
}

Date::~Date()
{
    // Destructor
}
 
void Date::display()
{
    cout<< dd << " "<< mm << " "<< yyy <<endl;     //display function
}

int Date::operator-(Date d)
{
    int d1 = dd + mm*30 + yyy*365;             //Difference between two dates
    int d2 = d.dd + d.mm*30 + d.yyy*365;

    return abs(d1-d2);
}

bool Date::operator==(Date d)
{
    return (dd == d.dd && mm == d.mm && yyy == d.yyy);  //Equal operator
}

bool Date::operator!=(Date d)
{                                         // Not Equal operator
    return !(*this == d);
}

Date Date::operator+(int d)
{
    Date temp = *this;
    temp.dd += d;

    while( temp.dd > 30)
    {
      temp.dd -= 30;
      temp.mm++ ;

      if(temp.mm > 12){
        temp.mm = 1;
        temp.yyy++;
      }
    }
    return temp;
}