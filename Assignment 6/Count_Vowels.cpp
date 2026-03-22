#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    int a=0,e=0,i=0,o=0,u=0;

    cout<<"Enter String: ";
    cin>>str;

    for(int k=0;str[k]!='\0';k++)
    {
        char ch=tolower(str[k]);

        if(ch=='a') a++;
        else if(ch=='e') e++;
        else if(ch=='i') i++;
        else if(ch=='o') o++;
        else if(ch=='u') u++;
    }

    int total=a+e+i+o+u;

    cout<<"No of vowels: "<<total<<endl;
    cout<<"Occurrence of vowels"<<endl;
    cout<<"a="<<a<<" e="<<e<<" i="<<i<<" o="<<o<<" u="<<u;

    return 0;
}