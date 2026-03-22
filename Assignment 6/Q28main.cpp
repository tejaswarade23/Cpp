#include<iostream>
#include<string>
#include"Q28.h"
 using namespace std ;

 int main ()
 {
    savingAccount s;
    CurrentAccount c;
    DematAccount d;

    cout<<"Saving Account"<<endl;
    s.acceptSaving();
    s.displaySaving();

    cout<<"Current Account"<<endl;
    c.acceptCurrent();
    c.displayCurrent();

    cout<<"Demat Account"<<endl;
    d.acceptDemat();
    d.displayDemat();
 }