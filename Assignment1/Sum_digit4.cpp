# include <iostream>
using namespace std;

int sumDigit(int n)
{
    int digit , sum =0;
    while (n>0)
    {
        digit = n % 10;
        sum =sum + digit;
        n = n / 10;
    }
    return sum;
}
  int main ()
  {
      int num ;
      cout<<" Enter 4 digit Number : ";
      cin>>num;

      cout<<" Sum of digit = "<< sumDigit(num)<<endl;

      return 0;
  }