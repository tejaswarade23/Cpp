#include<iostream>
using namespace std;

 float area( float length , float breadth){
    return length * breadth ;
 }
  int main ()
  {
    float Num1, Num2;
    cout<<" Enter of two Number : "<<endl;
    cin>> Num1 >> Num2 ;

    float result = area(Num1, Num2);
    cout<<"Calculation of Rectangle : "<<result<<endl;

    return 0 ;
  }