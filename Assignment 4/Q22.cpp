#include<iostream>
using namespace std;
void swapnum(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;

}
int main(){
    int num1=10;
    int num2=20;
    cout<<"Numbers before Swapping:"<<endl;
    cout<<" Num 1 :"<<num1;
    cout<<" Num 2 :"<<num2<<endl;
    swapnum(num1,num2);
    cout<<"Numbers after Swapping:"<<endl;
    cout<<" Num 1 :"<<num1;  
    cout<<" Num 2 :"<<num2;
    return 0;

}