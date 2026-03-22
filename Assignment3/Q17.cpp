#include<iostream>
 using namespace std ;
    int main ()
    {
        int n ;
        cout<<" Enter a Array Size : ";
        cin>>n;
        int arr[n];

        cout<<"Enter a Array : ";
        for( int i = 0; i < n; i++)
        {
           cin>>arr[i]; 
        }

         for(int i = 0; i < n-1; i++)
         {
            int minindex = i;
            for(int j = i+1; j < n ; j++){
              if(arr[j]< arr[minindex]){
               minindex = j;
              }
            }

             int temp = arr[minindex];
             arr[minindex] = arr[i];
                 arr[i] = temp;
         }

           cout<<" Sorted Array : ";
           for(int i = 0; i < n; i++){
              cout<<arr[i]<<" ";
           }
           cout<<endl;

           return 0;

    }