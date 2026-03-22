#include<iostream>
using namespace std;

  void CheckEvenOdd( int num)
  {
    if( num % 2 == 0 )
       cout<<" It is Even Number :";
     else
       cout<<" It is Odd Number : "<< num;  
  }
  int main ()
  {
    int n ;
    cout<<"Enter a  Number : ";
    cin>>n;
    
    CheckEvenOdd(n);

    return 0;
  }
