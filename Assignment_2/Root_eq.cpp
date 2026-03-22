#include <iostream>
#include <math.h>
using namespace std ;

 void RootEquation(float a, float b, float c)
 {
    float D, root1, root2, Rpart, imagepart;
    if ( a == 0)
    {
        cout<<" It is Not a Quadartic Equation ";
        return ;
    }

    D = b*b -4*a*c;

    if( D > 0)
    {
    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b + sqrt(D)) / (2*a);
    
    cout<<" Roots are real and different ";
    cout<<" Root1 = "<<root1<<endl;
    cout<<" Root2 = "<<root2<<endl;
    }

    else if (D == 0)
    {
       root1 = -b / (2*a);

       cout<<" Roots are Real And Equal ";
       cout<<" Root1 = Root2 = "<<root1<<endl;
    }

    else{ 
       Rpart = -b / (2*a);
       imagepart = sqrt(-D) / (2*a);
       
       cout<<" Root are imaginary "<<endl;
       cout<<" Root1 = "<<Rpart<<" +"<<imagepart<< "i "<< endl;
       cout<<" Root2 = "<<Rpart<<" -"<<imagepart<< "i "<< endl;
    }

 }
 int main ()

 {
    int a , b, c;

    cout<<" Enter a number : ";
    cin>>a>>b>>c;
    
    RootEquation(a, b, c);

    return 0;
 }