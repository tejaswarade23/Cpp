#include<iostream>
#include<string>
#include"Q2Payslip.h"
 using namespace std ;
   
   Payslip::Payslip ()
 {
    EmpNo = 0;
    EmpName ="";
    DA = 0;       //
    HRA = 0;
    BasicSalary = 0;
 }
  Payslip::Payslip(int Eno, string Ena, float D, float H, float Bs)
  {
     EmpNo = Eno;
     EmpName = Ena;
     DA = D;         //
     HRA = H;
     BasicSalary = Bs;
  }

  void Payslip::Accept ()
  {
      cout<<" Enter a Employee No: "<<endl;
      cin>>EmpNo;
      cout<<" Enter a Employee Name: "<<endl;
      cin>>EmpName;
      cout<<" Enter a DA: "<<endl;
      cin>>DA;
      cout<<" Enter a HRA: "<<endl;
      cin>>HRA;
      cout<<" Enter a Basic Salary: "<<endl;
      cin>>BasicSalary;
  }

  float Payslip::calculateSalary()
  {
     return BasicSalary + HRA + DA ; 
  }

  void Payslip::display()
  {
    cout<<" Employee No: "<<EmpNo<<endl;
    cout<<" Employee Name: "<<EmpName<<endl;
    cout<<" DA: "<<DA<<endl;
    cout<<" HRA: "<<HRA<<endl;
    cout<<" Basic Salary: "<<BasicSalary<<endl;
    cout<<" Total Salary: "<<calculateSalary()<<endl;

  }

  