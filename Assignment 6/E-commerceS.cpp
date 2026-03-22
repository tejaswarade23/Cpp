#include<iostream>
#include<vector>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name=n;
    }

    string getName()
    {
        return name;
    }
};

class Product
{
public:
    int id;
    string pname;
    double price;

    void input()
    {
        cout<<"Enter Product ID: ";
        cin>>id;

        cout<<"Enter Product Name: ";
        cin>>pname;

        cout<<"Enter Price: ";
        cin>>price;
    }

    void display()
    {
        cout<<"ID:"<<id<<" Name:"<<pname<<" Price:"<<price<<endl;
    }
};

class Seller : public Person
{
public:
    int sid;
    vector<Product> products;

    void inputSeller()
    {
        cout<<"Enter Seller ID: ";
        cin>>sid;

        cout<<"Enter Seller Name: ";
        cin>>name;
    }

    void addProduct(Product p)
    {
        products.push_back(p);
    }

    void displayProducts()
    {
        for(int i=0;i<products.size();i++)
            products[i].display();
    }
};

int main()
{
    vector<Seller> sellers;
    int choice;

    do
    {
        cout<<"\n1.Add Seller\n2.Add Product\n3.Display Products of Seller\n4.Display All Sellers\n5.Display All Products\n6.Exit\n";
        cin>>choice;

        if(choice==1)
        {
            Seller s;
            s.inputSeller();
            sellers.push_back(s);
        }

        else if(choice==2)
        {
            int id;
            cout<<"Enter Seller ID: ";
            cin>>id;

            for(int i=0;i<sellers.size();i++)
            {
                if(sellers[i].sid==id)
                {
                    Product p;
                    p.input();
                    sellers[i].addProduct(p);
                }
            }
        }

        else if(choice==3)
        {
            int id;
            cout<<"Enter Seller ID: ";
            cin>>id;

            for(int i=0;i<sellers.size();i++)
            {
                if(sellers[i].sid==id)
                    sellers[i].displayProducts();
            }
        }

        else if(choice==4)
        {
            for(int i=0;i<sellers.size();i++)
                cout<<"Seller: "<<sellers[i].getName()<<endl;
        }

        else if(choice==5)
        {
            for(int i=0;i<sellers.size();i++)
                sellers[i].displayProducts();
        }

    }while(choice!=6);

    return 0;
}