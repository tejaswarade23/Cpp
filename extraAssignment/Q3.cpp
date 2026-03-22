#include <iostream>
#include <cstring>
using namespace std ;

  class Student 
  {
     private :
      string name ;
      int mark1 , mark2 , mark3;
     

     public :
         void getdata()
         {
            cout<<" Enter a Student Name :";
             cin>>name;
            
            cout<<" Enter a Mark1 :";
            cin>>mark1;

            cout<<" Enter a Mark2 :";
            cin>>mark2;

            cout<<" Enter a Mark3 :";
            cin>>mark3;
         }
         void result()
         {
            cout<<" Student Result :"<<endl;
             cout<<" Mark 1 :"<<mark1<<endl;
              cout<<" Mark 2 :"<<mark2<<endl;
               cout<<" Mark 3 :"<<mark3<<endl;

               if (mark1 >= 50 && mark2 >= 50 && mark3 >= 50 ){
                   cout<<" Result : Pass ";
               }else{
                   cout<<" Result : Fail ";
               }
         }
  };
    
  int main (){
    int n ;
    cout<<" Enter a Number of Student : ";
    cin>>n;

    Student s[n];
         for( int i=0; i<n; i++){
            cout<<" Student Detail : "<<i+1<<endl;
               s[i].getdata();
    }
          cout<<" Result : ";
           for(int i=0; i<n; i++){
            s[i].result();
      
    }

    return 0;

  }