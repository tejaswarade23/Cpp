# include<iostream>
using namespace std;
  int sumdigit(int n)
  {
    if (n == 0)
    return 0;
    return (n % 10) + sumdigit(n / 10);
  }

  int main()
  {
    int num ;
     cout<<" Enter $ digit Number : ";
     cin>>num;

     cout<<" Sum of digit = "<< sumdigit(num);

     return 0;
  }