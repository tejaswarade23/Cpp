#include<iostream>
#include<cstring>
using namespace std;
 class consumer{
    protected:
    int units;
    public:
    template<typename t>
    bool isvalidate(t units){
        if(units>0){
            return true;
        }
        return false;
    }
    virtual void input(){
        while(true){
            try{
                cout<<"Enter units"<<endl;
                cin>>units;
                if(isvalidate(units)){
                    break;
                }
                else{
                    throw units;
                }
        }catch(int units){
            cout<<"Invalid input"<<endl;
        }
    }
    }
    virtual void display(){
        cout<<"Units :"<<units;
    }
 };

 class commercial: public consumer{
    int totalbill;
    public:
    void input(){
        consumer::input();
    }
    void calculate(){
        if(units<100){
            totalbill = units* 3.50;
        }
        else{
            totalbill = units*3.50+((units-100)*5.50);
        }
    }
    void display(){
        consumer::display();
        calculate();
        calculate();
        cout<<"total bill: "<<totalbill<<endl;
    }
 };
 class domestic: public consumer{
    int totalbill;
    public :
    char couponcode[8];
    void input(){
        consumer::input();
        cout<<"Enter the coupon code else enter"<<endl;
        cin>>couponcode;
    }
    void calculate(){
        if(units <200){
            totalbill=units*7.5;
        }
        else{
            totalbill = units*7.5+((units-200)*9.5);
        }
    }
    void validate(char* couponcode){
        if((strcmp(couponcode,"GREEN20"))==0){
            totalbill -=200;
        }
    }
    void display(){
        consumer::display();
        calculate();
        cout<<"total bill"<<totalbill<<endl;
        validate(couponcode);
        cout<<"After Applying coupon"<<totalbill<<endl;
    }
 };
 int main(){
    char choice;
    int count=0;
    consumer *c[10];
    
    do{
        cout<<"---------------------Menu--------------------"<<endl;
        cout<<"Enter D for domestic And Enter C commercial"<<endl;
        cout<<"E for exit"<<endl;
        cout<<"Choice"<<endl;
        cin>>choice;
        switch(choice){
            case 'D':{
            c[count] = new domestic();
            c[count]->input();
            count++;
            break;}
            case 'C':{
            c[count] = new commercial();
            c[count]->input();
            count++;
            break;
            }
            case 'E':
            break;
        }
       
    }
     while(choice != 'E');

        for(int i=0;i<count;i++){
            c[i]->display();
        }
    return 0;
 }