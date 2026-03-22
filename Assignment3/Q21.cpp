# include <iostream>
#include <climits>
 using namespace std ;
   int main (){

      int n ;
      cout<<" Enter a Number ";
      cin>>n;

      int arr[n];

      cout<<" Enter Elements: ";

      for(int i = 0; i<n; i++){
         cin>>arr[i];
      }
       
      int min , max, secondmin , secondmax ;
      max =min = arr[0];
      secondmin = INT_MAX;
      secondmax = INT_MIN;
        // for minimum
      for(int i = 1; i < n; i++)
      {
        if( arr[i] < min)
        {
            secondmin = min ;
            min = arr[i];
        }
        else if ( arr[i] > min && arr[i] < secondmin)
        {
            secondmin = arr[i] ;
        }
        // for maximum
        if (arr[i] > max)
        {
            secondmax = max ;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondmax)
        {
            secondmax = arr[i] ;
        }
      }
         cout<<" min : "<<min<<endl;
         cout<<" secondmin :"<<secondmin<<endl;
         cout<<" secondmax :"<<secondmax<<endl;
         cout<<" max : "<<max<<endl;
         return 0;
   }
