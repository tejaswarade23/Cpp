#ifndef Q3DATE_H
#define Q3DATE_H
#include <iostream>
using namespace std ;
  class Date 
  {
    int dd, mm , yyy;

     public:
              Date();
              Date(int , int , int );
              ~Date();


              void display ();

              int operator-(Date);
              bool operator==(Date);
              bool operator!=(Date);
              Date operator+(int);
  };

  #endif