#include"Q1Address.h"
#include<iostream>
#include<cstring>
using namespace std ;

Address::Address()
{
      House_No = 0 ;
      colony ="";
      Area = "";
      City = "";
      Pincode = '\0';
}

Address::Address(int H, string c, string A, string C , string P)
{
    House_No = H;
    colony = c;
    Area = A;
    City = C;
    Pincode = P;
}
  void Address::Accept()
  {
    cout<<"Enter a House No: "<<endl;
    cin>>House_No;
    cout<<"Enter a Colony: "<<endl;
    cin>>colony;
    cout<<"Enter a Area: "<<endl;
    cin>>Area;
    cout<<"Enter a City: "<<endl;
    cin>>City;
    cout<<"Enter a Pincode: "<<endl;
    cin>>Pincode;

  }
  void Address::display()
  {
    cout<<"House No: "<<House_No<<endl;
    cout<<"Colony: "<<colony<<endl;
    cout<<"Area: "<<Area<<endl;
    cout<<"City: "<<City<<endl;
    cout<<"Pincode: "<<Pincode<<endl;
  }

  bool Address::isSame(Address a)
  {
    if(House_No == a.House_No &&
    colony == a.colony &&
    Area == a.Area &&
    City == a.City &&
    Pincode == a.Pincode)
     return true;

     else
     return false;
    
  }
  bool Address::operator==(Address a)
  {
      if(House_No == a.House_No &&
        colony == a.colony &&
         Area == a.Area &&
        City == a.City &&
          Pincode == a.Pincode)
          return true;
    else 
          return false;
  }