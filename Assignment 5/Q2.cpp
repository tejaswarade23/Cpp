#include<iostream>
using namespace std;

 class Time {
      private:
              int hr, min, sec ;

      public:

                 //Default Constructor
             Time (){
                hr = 0;
                min = 0;    
                sec = 0;
             }  
               //Parameterized Constructor
             Time(int H, int M, int S){
                hr = H;
                min = M;     
                sec = S; 
             } 
             ~Time(){

             }  
                        // Display 
             void Display(){
                cout<< hr << " : " << min << " : " << sec <<endl;
             }   
              
             // operator overloading difference
             Time operator-(Time t)
             {
                Time temp ;
                int t1 = hr*3600 + min*60 + sec;
                int t2 = t.hr*3600 + t.min*60 + t.sec;

                int diff = abs(t1 - t2);

                temp.hr = diff / 3600;
                  diff = diff % 3600;

                  temp.min = diff / 60;
                  temp.sec = diff % 60;

        return temp;
    }

                 // operator overloading comparsion
                  bool operator > (Time t)
              {
                 int t1 = hr*3600 + min*60 + sec;
                 int t2 = t.hr*3600 + t.min*60 + t.sec;

                   return t1>t2;
    }
};
             
 
  int main (){
       Time t1 (5, 20, 30);
       Time t2 (3, 10, 15);

       cout<<" Time1 : ";
       t1.Display();
       cout<<" Time2 : ";
       t2.Display();


       //Compare Time
       if(t1 > t2)
         cout<<" Time1 is greater"<<endl;
       else                                  
         cout<<" Time2 is greater"<<endl;


         // Differences between time
         Time t3;
         t3 =t1 - t2;
         cout<<" Difference Between Time ";
         t3.Display();

         return 0;

         
  }