#include<iostream>
#include<string>
using namespace std;

class Car{
    
    public :
            string carNo;
            string model;
            double price;


            // set function

           void setCarNo(string c)
           {
              carNo = c;
           }
           void setModel(string m)
           {
               model = m;
           }
           void setPrice(double p)
           {
              price = p;
           }

            //  get function
            string getCarNo()
            {
                return carNo;
            }
            string getModel()
            {
                return model;
            }
            float getPrice()
            {
                return price;
            }
            void display()
            {
                cout<<"Car No : "<<carNo<<endl;
                cout<<"Model : "<<model<<endl;
                cout<<"Price : "<<price<<endl;
            }
};
           int main()
           {
              int n;
              cout<<"Enter Number of Car: ";
              cin>>n;
              
              Car c[n];
              for(int i=0; i<n; i++)
              {
                   string carNo;
                   string model;
                   double price;
                   cout<<"Enter Car "<< i+1 <<" Detail : "<<endl;

                   cout<<"Car No: ";
                   cin>>carNo;

                   cout<<"Model: ";
                   cin>>model;

                   cout<<"Price: ";
                   cin>>price;

                   c[i].setCarNo(carNo);
                   c[i].setModel(model);
                   c[i].setPrice(price);
              }

              cout<<"------------------------------ "<<endl;
              cout<<"Car Details : "<<endl;
              for(int i=0; i<n; i++)
              {
                c[i].display();
              }
              return 0;
           }