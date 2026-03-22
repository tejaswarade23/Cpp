#include<iostream>
#include<string>
#include"Q28.h"
 using namespace std;

 void AccountHolder :: acceptHolder(){

    cout<<" Enter First Name: ";
    cin>>fname;

    cout<<" Enter Last Name: ";
    cin>>lname;

    cout<<" Enter Mobile Number: ";
    cin>>mobile;

    cout<<" Enter email: ";
    cin>>email;
 }

 void AccountHolder :: displayHolder(){

    cout<<" Name: "<<fname<<lname<<endl;
    cout<<" Mobile Number: "<<mobile<<endl;
    cout<<" Email: "<<email<<endl;
 }
 
 savingAccount::savingAccount()
 {
    interestRate = 4;
    minBalance = 20000;
 }

 void savingAccount::acceptSaving()
 {
    acceptHolder();
    cout<<" Enter Cheque Book Number: ";
    cin>>chequeBookNo;
 }

 void savingAccount::displaySaving()
 {
    displayHolder();
    cout<<"\n -----Account Type : Saving Account----- "<<endl;
    cout<<" InterestRate : "<<interestRate<<endl;
    cout<<" MinBalance : "<<minBalance<<endl;
    cout<<" Cheque Book Number : "<<chequeBookNo<<endl;
 }

 CurrentAccount::CurrentAccount()
 {
    interestRate = 1;
    minBalance = 1000;
 }
  
 void CurrentAccount::acceptCurrent()
 {
   acceptHolder();
   cout<<" Enter Transactions Per Day : ";
   cin>>transactionsPerDay;
 }

 void CurrentAccount::displayCurrent()
 {
    displayHolder();
    cout<<"\n -----Account Type : Current Account----- "<<endl;
    cout<<" InterestRate : "<<interestRate<<endl;
    cout<<" Minbalance : "<<minBalance<<endl;
    cout<<" Transactions Per Day : "<<transactionsPerDay<<endl;
 }

 void DematAccount::acceptDemat()
 {
   acceptHolder();
   cout<<" Enter a ShareName : ";
   cin>>shareName;
   cout<<" Enter a Number of Share: ";
   cin>>numShares;
   cout<<" Enter a Buy Price : ";
   cin>>buyPrice;
   cout<<" Enter a Sell Price : ";
   cin>>sellPrice;
   cout<<" Enter a Buy Date : ";
   cin>>buyDate;
   cout<<" Enter a Sell Date :"<<endl;
   cin>>sellDate;
 }

 float DematAccount::calculateaprofitLoss()
 {
   return(sellPrice - buyPrice) * numShares;
 }

 void DematAccount::displayDemat()
 {
    displayHolder();
    cout<<"\n -----Account Type : Demat Account----- "<<endl;
    cout<<" ShareName : "<<shareName <<endl;
    cout<<" Number of Shares : "<<numShares <<endl;
    cout<<" Buy Price : "<<buyPrice <<endl;
    cout<<" Sell Price : "<<sellPrice <<endl;
    cout<<" Buy Date : "<<buyDate <<endl;
    cout<<" Sell Date : "<<sellDate <<endl; 

    float result = calculateaprofitLoss();

    if(result > 0)
         cout<<"Profit: "<<result<<endl;
      else if (result < 0)
          cout<<"Loss: "<<result<<endl;
         else
            cout<<"No Profit No Loss"<<endl;
 }