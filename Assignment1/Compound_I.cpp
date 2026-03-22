# include <iostream>
  using namespace std ;
  int main()
  {
    double Principal, Rate, Time;
    double Amount, CI;
    double Base, Results = 1;

    cout<<" Enter Of Principle :"<<endl;
    cin>> Principal ;
    cout<<" Enter Of Rate :"<<endl;
    cin>> Rate ;
    cout<<" Enter Of Time :"<<endl;
    cin>> Time ;
    
         Base = 1 + (Rate/100);
        for (int i =1 ; i <= Time; i++)
        {
           Results = Results * Base;
        }
     
        Amount = Principal * Results;
        CI = Amount - Principal;

        cout<<" Amount is :"<<Amount<<endl;
        cout<<" Compound Is :"<<CI<<endl;

        return 0 ;

  }