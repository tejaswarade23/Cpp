#ifndef Q1PAYSLIP_H
#define Q1PAYSLIP_H
#include<iostream>
using namespace std;
class Payslip
{
    private:
           int EmpNo;
           string EmpName;
           float DA;
           float HRA;
           float BasicSalary;
     
    public :
    
    Payslip(); //
    
    Payslip( int , string, float, float, float); //
    
    void Accept();

    void display();

    float calculateSalary();

};

#endif