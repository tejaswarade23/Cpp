#include<iostream>
using namespace std;

  int Cal_Rectangle(int l , int b){
       return l * b ;
  }

  int Cal_Circle(int r){
       return 3.14 * r * r ;
  }

  int Cal_Square(int r){
      return r * r ;
  }
  int main (){

    int num1, num2, num3, num4 ;
    cout<<" Enter a Length : "<<endl;
    cin>>num1;
    cout<<" Enter a Breadth : "<<endl;
    cin>>num2;
    cout<<" Enter a Radius : "<<endl;
    cin>>num3;
    cout<<" Enter a Radius : "<<endl;
    cin>>num4;

    cout<<" Area of Rectangle : "<< Cal_Rectangle(num1 , num2)<<endl;
    cout<<" Area of Circle : "<< Cal_Circle( num3)<<endl;
    cout<<" Area of Square : "<< Cal_Square(num4)<<endl;

    return 0;

  }