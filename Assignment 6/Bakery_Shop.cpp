#include<iostream>
#include<vector>
using namespace std;

class Cake
{
protected:
    string cakename;
    double price;

public:
    virtual void input()
    {
        cout<<"Enter Cake Name: ";
        cin>>cakename;

        cout<<"Enter Base Price: ";
        cin>>price;
    }

    virtual void display()
    {
        cout<<"Cake Name: "<<cakename<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class ChocolateCake : public Cake
{
    string type;

public:
    double calculate_chocolateprice()
    {
        cout<<"Enter Chocolate Type (Fudge/BlackForest): ";
        cin>>type;

        if(type=="Fudge")
            price = price + price*0.05;
        else
            price = price + price*0.10;

        return price;
    }

    void display()
    {
        cout<<"Chocolate Cake: "<<cakename<<endl;
        cout<<"Final Price: "<<price<<endl;
    }
};

class VanillaCake : public Cake
{
    int discount;

public:
    double calculate_vanillaprice()
    {
        discount = price*0.10;
        price = price - discount;
        return price;
    }

    void display()
    {
        cout<<"Vanilla Cake: "<<cakename<<endl;
        cout<<"Final Price: "<<price<<endl;
    }
};

int main()
{
    vector<Cake*> cakes;
    int choice;

    do
    {
        cout<<"\n1.Add Chocolate Cake\n2.Add Vanilla Cake\n3.Display Cakes\n4.Exit\n";
        cin>>choice;

        if(choice==1)
        {
            ChocolateCake *c = new ChocolateCake();
            c->input();
            c->calculate_chocolateprice();
            cakes.push_back(c);
        }

        else if(choice==2)
        {
            VanillaCake *v = new VanillaCake();
            v->input();
            v->calculate_vanillaprice();
            cakes.push_back(v);
        }

        else if(choice==3)
        {
            for(int i=0;i<cakes.size();i++)
                cakes[i]->display();
                
        }

    }while(choice!=4);
      cout<<"Program Ended"<<endl;
    
          for(int i=0;i<cakes.size();i++)
            {
                delete cakes[i];
                }

                    cakes.clear();

    return 0;
}