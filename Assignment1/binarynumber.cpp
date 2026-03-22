#include<iostream>
#include<math.h>
using namespace std;

  int binarytodecimal(long long n)
  {
    int decimal = 0, i = 0, remainder;

    while(n != 0)
    {
        remainder = n % 10;
        decimal += remainder + pow(2, i);
        n = n / 10;
        i++;
    }
    return decimal;
  } 

  long long decimaltobinary(int n)
  {
       long long binary = 0;
       int i = 1, remainder;

       while(n != 0){
        remainder = n % 2;
        binary += remainder * i ;
        n = n / 2 ;
        i = i * 10 ;
       }
       return binary;

  }

  int main()
{
    long long b1 , b2 ;
    cout<<"Enter First Binary Number: ";
    cin>>b1;

    cout<<"Enter second Binary Number: ";
    cin>>b2;

    int d1 = binarytodecimal(b1);
    int d2 = binarytodecimal(b2);

    int sumdecimal = d1 + d2 ;
    
    long long sumbinary = decimaltobinary(sumdecimal);

    cout<<" Binary Sum = "<<sumbinary;


    return 0 ;
}