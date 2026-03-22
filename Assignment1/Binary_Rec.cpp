# include <iostream>
using namespace std;

void binary (int n){
    if (n == 0)
    return ;
    binary (n/2);
    cout<<n % 2 ;
}    
int main ()
{
    int num;
    cout<<" Enter Decimal Number : ";
    cin>>num;

    cout<<" Binary Equivalent = ";
    binary(num);

    return 0;
}