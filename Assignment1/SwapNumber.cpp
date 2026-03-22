#include<iostream>
using namespace std;
  
void SwapNumbers(int &a, int &b )
{
     int temp ;
    temp =a;
     a = b ;
    b = temp;
}

int main ()
{
    int num1 , num2 ;
    cout<<"Enter Two number: "<<endl;
    cin>>num1>>num2;

    cout<<"Before Swapping : "<<endl;
    cout<<" num1 : "<<num1<< " num2 : "<<num2<<endl;
    
    SwapNumbers(num1 , num2);
    {
       cout<<"After Swapping  : "<<endl;
       cout<<" num1 : "<<num1<< " num2 : "<<num2<<endl;
    }

    return 0;

}