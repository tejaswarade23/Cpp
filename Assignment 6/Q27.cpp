#include<iostream>
#include<string>
using namespace std;

  class Student {
       
        private:
                 int RollNo;
                 string Name;
        public:
                void setdata(int R, string N){ 

                    RollNo = R;
                    Name = N;
                }
                
                void display(){
                    cout<<" RollNo: "<< RollNo << endl;
                    cout<<" Name: "<< Name << endl;
                }

  };

  void Accept(Student s[], int &count){
           
    int r;
    string n;

    cout<<" Enter Roll No: ";
    cin>>r;
    cout<<" Enter Name: ";
    cin>>n;
    s[count].setdata(r,n);
    count++;
  }

  void Display(Student s[], int count)
  {
    cout<<"----Student Detail----"<<endl;

    for(int i=0; i<count; i++){
        s[i].display();
        cout<<endl;
    }
  }

   int main(){

           Student s[50];
           int count = 0;
           int choice;

           do
           {
            cout<<" 1.Add Student: "<<endl;
            cout<<" 2.Display Student: "<<endl;
            cout<<" 3.Exit "<<endl;
            cout<<" 4.Enter Choice: "<<endl;
            cin>>choice;

            switch (choice){
                case 1:
                       Accept(s, count);
                       break;
                case 2:
                      Display(s, count);
                      break;
                case 3:
                      cout<<" Exiting ";
                      break;
                default:
                      cout<<" Invalid choice ";          
            }
            
           }while(choice != 3);

    return 0;

   }