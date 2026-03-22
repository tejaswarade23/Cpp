#include<iostream>
using namespace std;
void reversestring(char str[],int start,int end){
   
    if(start>=end){
        return;
    }
    
    int temp=str[start];
    str[start]=str[end];
    str[end]=temp;

    reversestring(str,start+1,end-1);
    


}
int main(){
    char str[6]="HELLO";
    int length=0;
    cout<<"Actual String:"<<str<<endl;
    while(str[length]!='\0'){
        length++;
    }

    reversestring(str,0,length-1);
    
    cout<<"Reversed String:"<<str<<endl;
    return 0;

}