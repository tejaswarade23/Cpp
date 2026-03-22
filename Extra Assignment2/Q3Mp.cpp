#include<iostream>
#include<cstring>
#include"Q3Mp.h"
using namespace std;

MobilePhone::MobilePhone()
{
        ModelNo = 0;
        Price = 0;
        Manufacturer = "";
        Quantity = 0;
}
 MobilePhone::MobilePhone(int M, float P, string Man, int Q)
{
        ModelNo = M;
        Price = P;
        Manufacturer = M;
        Quantity = Q;
}
void MobilePhone::Accept()
{
    cout<<" Enter a Model No: "<<endl;
      cin>>ModelNo;
      cout<<" Enter a Price: "<<endl;
      cin>>Price;
      cout<<" Enter a Manufacturer: "<<endl;
      cin>>Manufacturer;
      cout<<" Enter a Quantity: "<<endl;
      cin>>Quantity;
}
void MobilePhone::display()
{
    cout<<" Model No: "<<ModelNo<<endl;
    cout<<" Price: "<<Price<<endl;
    cout<<" Manufacturer: "<<Manufacturer<<endl;
    cout<<" Quantity: "<<Quantity<<endl;
}
int MobilePhone::getModelNo()
{
    return ModelNo;
}
int MobilePhone::getQuantity()
{
    return Quantity;
}