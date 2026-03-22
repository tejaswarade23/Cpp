#include <iostream>
#include<cstring>
#include"Q3Mp.h"

using namespace std;
  int main ()
  {
    MobilePhone M[50];
    int count = 0;
    int choice ;
    int searchModel;

    do
    {
       cout<<"1.Mobile Shop Menu"<<endl;
       cout<<"2.Add Mobile"<<endl;
       cout<<"3.Display list of Mobiles"<<endl;
       cout<<"4.Find Quantity of Mobile"<<endl;
       cout<<"5.Check Availability of Model"<<endl;
       cout<<"6.Exit"<<endl;
       cout<<"7.Enter Choice"<<endl;
       cin>> choice;

       switch(choice)
       {
        case 1:
                M[count].Accept();
                count++;
                break;

         case 2: 
                for(int i=0;i<count;i++)
                {
                    M[i].display();
                } 
                break;
                
         case 3:
                cout<<"Enter Model No to Find Quantity:";
                cin>>searchModel;
                for(int i=0; i<count; i++)
                {
                    if(M[i].getModelNo()==searchModel)
                    {
                        cout<<"Model Available"<<endl;
                    }
                  
                }
                  break;
       }
    }while(choice!=5);
    return 0;
}