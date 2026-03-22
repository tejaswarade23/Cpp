#include<iostream>
#include<math.h>
using namespace std;

  int Power(int base, int Exp)
  {
    int results = 1;
    for(int i = 1; i<=Exp; i++)
    {
       results = results * base;
    }
    return results;
  }
  int main ()
{
   int base, Exponient;

   cout<<" Enter Base : "<<endl;
   cin>>base;

   cout<<" Enter Exponient : "<<endl;
   cin>>Exponient;

   cout<<" Power : "<<Power(base,Exponient);

}