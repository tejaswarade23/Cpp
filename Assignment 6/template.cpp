#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

// Template function for year validation
template<class T>
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

public:
    static int count;

    // Setter Functions
    void setRegNo(char r[])
    {
        strcpy(regNo,r);
    }

    void setModel(char m[])
    {
        strcpy(model,m);
    }

    void setManufacturer(char man[])
    {
        strcpy(manufacturer,man);
    }

    void setYear(int y)
    {
        if(validateYear(y))
            year = y;
        else
            throw "Invalid Year";
    }

    // Getter Functions
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

    virtual void displayInfo() = 0;

    static void showCount()
    {
        cout<<"Total Vehicles stored: "<<count<<endl;
    }
};

int Vehicle::count = 0;

// Car Class
class Car : public Vehicle
{
    char fuelType[20];

public:

    void setFuelType(char f[])
    {
        strcpy(fuelType,f);
    }

    char* getFuelType()
    {
        return fuelType;
    }

    void displayInfo()
    {
        cout<<"RegNo: "<<getRegNo()
        <<", Model: "<<getModel()
        <<", Manufacturer: "<<getManufacturer()
        <<", Year: "<<getYear()
        <<", FuelType: "<<getFuelType()<<endl;
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
        cout<<"RegNo: "<<getRegNo()
        <<", Model: "<<getModel()
        <<", Manufacturer: "<<getManufacturer()
        <<", Year: "<<getYear()
        <<", EngineCapacity: "<<getEngineCapacity()<<endl;
    }

    void writeFile(ofstream &out)
    {
        out.write((char*)this,sizeof(*this));
    }
};

int main()
{
    int n;
    char type;

    ofstream fout("vehicle.dat",ios::binary);

    cout<<"Enter number of vehicles: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter type of vehicle (C for Car, B for Bike): ";
        cin>>type;

        try
        {
            if(type=='C' || type=='c')
            {
                Car c;

                char reg[20],model[20],man[20],fuel[20];
                int year;

                cout<<"Enter Registration Number: ";
                cin>>reg;
                c.setRegNo(reg);

                cout<<"Enter Model Name: ";
                cin>>model;
                c.setModel(model);

                cout<<"Enter Manufacturer: ";
                cin>>man;
                c.setManufacturer(man);

                cout<<"Enter Year: ";
                cin>>year;
                c.setYear(year);

                cout<<"Enter Fuel Type: ";
                cin>>fuel;
                c.setFuelType(fuel);

                c.writeFile(fout);

                c.displayInfo();

                Vehicle::count++;
            }
            else if(type=='B' || type=='b')
            {
                Bike b;

                char reg[20],model[20],man[20],eng[20];
                int year;

                cout<<"Enter Registration Number: ";
                cin>>reg;
                b.setRegNo(reg);

                cout<<"Enter Model Name: ";
                cin>>model;
                b.setModel(model);

                cout<<"Enter Manufacturer: ";
                cin>>man;
                b.setManufacturer(man);

                cout<<"Enter Year: ";
                cin>>year;
                b.setYear(year);

                cout<<"Enter Engine Capacity: ";
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

    cout<<"-----------------------------------"<<endl;
    Vehicle::showCount();

    return 0;
}