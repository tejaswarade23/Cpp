#include <iostream>
#include<math.h>
using namespace std ;

 float simpleinterest(float P, float R, float T){
    return P * R * T / 100 ;
 }

 float compoundInterest(float P, float R, float T){
    float Amount = P;
     for(int i = 1 ; i < T; i++)
     {
        Amount = Amount * (1 + R / 100);
        return Amount - P;
     }
 }
  int main ()
  {
    float P , R , T ;
    cout<<" Enter a Principal :";
    cin>>P;
    cout<<" Enter a Rate :";
    cin>>R;
    cout<<" Enter a Time :";
    cin>>T;
 
    float SI = simpleinterest(P ,R , T);
    float CI = compoundInterest(P , R, T);
     
    cout<<" Simple  Interest : "<<SI<<endl;
    cout<<" Compound Interest : "<<CI<<endl;

    return 0;
  }