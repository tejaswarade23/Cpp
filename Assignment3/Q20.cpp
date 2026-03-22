# include<iostream>
  using namespace std ;

  int mul (int arr [] , int n ){
    for (int i=0 ; i<n; i++){
        arr[i] = arr[i] * 2 ;
    }
  }
  int main (){
    int n ;

    cout<<" Enter a Array Size : ";
    cin>>n;

    int arr [n];

    cout<<" Enter a Elements :";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

       mul(arr , n);

     cout<<" Result Array : ";
     for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }

    return 0;
  }