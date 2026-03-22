#include <iostream>
using namespace std;

    void CheckLetter(char n)
  {
     if(n  >= 'A' && n <= 'Z')
       cout<<" It is Capital Letter : "<<n<<endl;
    else if  (n  >= 'a' && n <= 'z')  
       cout<<" It is Small Letter : "<<n<<endl;
     else
       cout<<" It is Not Alphabet ";  
  }
    int main ()
 
 {
    char ch ;
    cout<<" Enter a Letter : ";
    cin>> ch;

    CheckLetter(ch);

    return 0;
 }