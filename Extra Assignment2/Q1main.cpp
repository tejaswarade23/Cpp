#include<iostream>
#include<cstring>
#include "Q1Address.h"

using namespace std ;
 int main ()
 {
     Address a1 , a2;

     cout<<"Enter a First Address: "<<endl;
     a1.Accept();

     cout<<"Enter a Second Address: "<<endl;
     a2.Accept();

     cout<<"First Address: "<<endl;
     a1.display();

     cout<<"Second Address: "<<endl;
     a2.display();

     //using Function
     if (a1.isSame(a2))
         cout<<"----Address are Same----"<<endl;
     else 
         cout<<"----Address are Difference----"<<endl;

     // Operator ==
     if( a1==a2)
         cout<<"----Address are Same----"<<endl;
     else 
         cout<<"----Address are Difference----"<<endl;
    
     return 0;
 }