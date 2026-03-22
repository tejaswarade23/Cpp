
#ifndef Q2MP_H
#define Q2Mp_H
#include <iostream>
#include<cstring>
 using namespace std;

class MobilePhone
{
    private:
         int ModelNo;
         float Price;
         string Manufacturer;
         int Quantity;

    public:
           
        MobilePhone();

        MobilePhone(int, float , string, int);

        void Accept ();

        
        void display();

        int getModelNo();

        int getQuantity();

};
#endif