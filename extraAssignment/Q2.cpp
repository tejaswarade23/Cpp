# include <iostream>
using namespace std ;
 int main (){
    int row , col;
    cout<<" Enter a row :";
    cin>>row;
    cout<<" Enter a Col :";
    cin>>col;

    int matrix [10][10] , transpose[10][10] ;
    
    cout<<" Enter a element :"<<endl;
    for(int i =0; i<row ; i++){
        for(int j =0; j<col ; j++){
             cin>>matrix[i][j] ;  
        }
    }

    for(int i =0; i<row ; i++){
        for(int j =0 ; j< col ; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
      // display matrix
      cout<<" original Matrix :"<<endl;
       for(int i =0; i<row ; i++){
        for(int j =0 ; j< col ; j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
      // display Transpose
      cout<<" Transpose Matrix :"<<endl;
       for(int i =0; i<col ; i++){
        for(int j =0 ; j< row ; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

 }