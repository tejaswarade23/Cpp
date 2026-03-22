# include <iostream>
 using namespace std;

    int CheckSum(int n )
    {
       
       if(n == 0)
       return 0 ;
       
       return n + CheckSum(n-1) ;

    }
   int main ()
   {
       int num ;
       cout<<" Enter a Number : ";
       cin>>num;

       cout<<"Sum of Running Number : "<<CheckSum(num);

       return 0;
   }