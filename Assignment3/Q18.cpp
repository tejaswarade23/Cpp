# include <iostream>
using namespace std ;

  int main (){
     int n , count;
     count = 1;
     char ch ;
     cout<<" Enter a Array Size : ";
     cin>> n ;
     char arr [n];
     cout<<" Enter a Character : ";
     for(int i=0; i<=n-1; i++){
        cin>>arr[i];
     }
     cout<<" Enter a Character Search : ";
      cin>>ch;
     for(int i=0; i<n-1; i++){
        if(ch==arr[i]){
          count+=1;
        }
     }

     cout<<" Array Count : "<<ch<<" is " <<count<<endl;

     return 0;


  }