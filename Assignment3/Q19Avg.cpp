# include <iostream>
 using namespace std ;
 float FindAverage(int arr [], int n){
    int sum = 0;
     for(int i=0; i<n ; i++){
       sum = sum + arr[i] ;
     }
     float Avg = (float)sum / n;
     return Avg ;
 }
  int main (){
     int n ;
     cout<<" Enter a Array Size :";
     cin>>n;
     int arr[n]; 

     for(int i = 0; i<n; i++){
        cin>>arr[i];
     }
      float Average = FindAverage(arr , n);
     
     cout<<" Sum o Average : "<<Average;

     return 0;


  }