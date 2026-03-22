#include <iostream>
 using namespace std ;

 class Student{

 
       
     private :
          int Rollno;
          string Name ;
          string Course;
     public :
          Student(){
            Rollno = 0;           // Default Constructor
            Name = "";
            Course = "";
          }
          Student(int A, string B,string C )  {
            Rollno = A;
            Name = B;            // Parameterized Constructor
            Course = C;
          }   
          ~Student(){

          }
             // Accept data
          void Accept(){
            cout<<" Enter a RollNo :";
            cin>>Rollno;
            cout<<" Enter a Name :";
            cin>>Name;
            cout<<" Enter a Course :";
            cin>>Course;
          }

             // Display data
          void Display(){
              cout<<" Student RollNo :"<<Rollno<<endl;
              cout<<" Student Name :"<<Name<<endl;
              cout<<" Student Course :"<<Course<<endl;
          }

          int getRollno(){
             return Rollno;
          }
        
};
      
          void FindStudent( Student *s[], int n, int Roll ){
               for (int i=0; i<n; i++){
                  if (s[i]->getRollno()  == Roll){
                  cout<<" Student Found "; 
                  s[i]->Display(); 
                  return ;
               }

            }
             cout<<" Student Not Found ";
        }

  int main (){
     int n;
     cout<<" Enter a Number of Student :";
     cin>>n;

     Student *s[n];

     for(int i=0; i<n; i++){
        s[i]=new Student();
        cout<<"--Enter a Student Detail--:"<<i+1<<endl;    // Accept Data
        s[i]->Accept();
     }

     cout<<" Student Detail :"<<endl;
      for(int i=0; i<n; i++){
        s[i]->Display();                           // Display Data
      }
      cout<<endl;

      int roll;
      cout<<" Enter RollNo to search : ";     // Search Student 
      cin>>roll;

      FindStudent(s, n, roll);

      for(int i=0; i<n; i++){
         delete s[i];
      }

      return 0;

  }