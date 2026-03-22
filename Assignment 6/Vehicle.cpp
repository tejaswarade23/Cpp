#include<iostream>
#include<cstring>
#include<vector>
#include<fstream>
using namespace std ;

// Template Function to Validate Year

template <class T>
bool validateYear(T year)
{
  int currentYear = 2026;
  if(year >= 2000 && year <= currentYear)
    return true;
  else 
    return false;  
}

// Abstract Base Class
class Vehicle
{
    protected:
                char regNo[20];
                char model[20];
                char manufacturer[20];
                int year;

    public :
                static int count ;

            // setter Function
             void setRegNo(char r[])
             {
                strcpy(regNo,r);
             }
             void setmodel(char m[])
             {
                strcpy(model,m);
             }
             void setmanufacturer(char man[])
             {
                strcpy(manufacturer,man);
             }
             void setyear(int y)
             {
                if(validateYear(y))
                  year = y;
                else 
                  throw "Invalid Year";
             }

             //Getter Function

             char* getRegNo()
             {
                return regNo;
             }
             char* getModel()
             {
                return model;
             }
             char* getManufacturer()
             {
                return manufacturer;
             }
             int getYear()
             {
                return year;
             }

             // Virtual Function

    
    virtual void displayInfo()=0;  // pure virtual Function

    static void showcount()
    {
        cout<<"Total Vehicles Stored: "<<count<<endl;
    }
};

    int Vehicle::count = 0;
    // Car class
    class Car : public Vehicle
    {
        char fuelType[20];

    public:
            void setFuelType(char f[])
            {
                strcpy (fuelType,f);
            }
            char* getFuelType()
            {
                return fuelType;
            }

            void displayInfo()
            {
                cout<<"RegNo: "<<getRegNo()<<endl
                    <<"Model: "<<getModel()<<endl
                    <<"Manufacturer: "<<getManufacturer()<<endl
                    <<"Year: "<<getYear()<<endl
                    <<"FuelType: "<<getFuelType()<<endl;
            }
            void writeFile(ofstream &out)
            {
                out.write((char*)this,sizeof(*this));
            }
    };
      // Bike Class
      class Bike : public Vehicle
{
        char engineCapacity[20];

        public: 
                void setEngineCapacity(char e[])
                {
                    strcpy(engineCapacity,e);
                }
                char* getEngineCapacity()
                {
                    return engineCapacity;
                }

                void displayInfo()
                {
                   cout<<"RegNo: "<<getRegNo()<<endl
                    <<"Model: "<<getModel()<<endl
                    <<"Manufacturer: "<<getManufacturer()<<endl
                    <<"Year: "<<getYear()<<endl
                    <<"EngineCapacity: "<<getEngineCapacity()<<endl; 
                }

                void writeFile(ofstream &out)
                {
                    out.write((char*)this,sizeof(*this));
                }
    };
            // Main Function 

            int main()
            {
                    int n;
                    char type;

                    ofstream fout("Vehicle.Dat",ios::binary);

                    cout<<"Enter Number Of Vehicle: "<<endl;
                    cin>>n;

                    for(int i = 0; i < n; i++)
                    {
                        cout<<"Enter type of vehicle(C for Car, B for Bike): ";
                        cin>> type;

                        try 
                        {
                            if(type=='C' || type=='c')
                            {
                                Car c;

                                char reg[40],model[20],man[20],fuel[20];
                                int year;
                                
                                cout<<"Enter Registration Number: "<<endl;
                                cin>>reg;
                                c.setRegNo(reg);

                                cout<<"Enter Model Name: "<<endl;
                                cin>>model;
                                c.setmodel(model);

                                cout<<"Enter Manufacturer: "<<endl;
                                cin>>man;
                                c.setmanufacturer(man);

                                cout<<"Enter Year: "<<endl;
                                cin>>year;
                                c.setyear(year);

                                cout<<"Enter Fuel Type: "<<endl;
                                cin>>fuel;
                                c.setFuelType(fuel);

                                c.writeFile(fout);

                                c.displayInfo();

                                Vehicle::count++;
                                
                            }
                            else if(type == 'B' || type == 'b')
                            {
                                Bike b;

                                char reg[40],model[20],man[20],eng[20];
                                int year;

                                cout<<"Enter Registration Number: "<<endl;
                                cin>>reg;
                                b.setRegNo(reg);

                                cout<<"Enter Model Name: "<<endl;
                                cin>>model;
                                b.setmodel(model);

                                cout<<"Manufacturer: "<<endl;
                                cin>>man;
                                b.setmanufacturer(man);

                                cout<<"Enter Year: "<<endl;
                                cin>>year;
                                b.setyear(year);

                                cout<<"Enter Engine Capacity: "<<endl;
                                cin>>eng;
                                b.setEngineCapacity(eng);

                                b.writeFile(fout);

                                b.displayInfo();

                                Vehicle::count++;
                        
                            }
                        }
                        catch(const char* msg)
                        {
                            cout<<"Error: "<<msg<<endl;
                        }
                    }
                    fout.close();
                    cout<<"---------------------------------------"<<endl;
                    Vehicle::showcount();


                    return 0;

            }
