#include<iostream>
using namespace std;

   int Fact(int n ){
      if (n == 0)
      return 1;

      return n * Fact(n-1);
   }
   int main ()
{
   int num ;
   cout<<" Enter a Number : ";
   cin>>num;

   cout<<" Factorial Number is : "<< Fact(num);

   return 0;

   }