# include <iostream>
# include <cstring>
using namespace std;

class Employee{
      private :
               int empid;
               string name ;
               float sal;

      public :
      void setdata(int I, string N, float S){

               empid = I;
               name = N;
               sal = S;

      }
      int getId()
      {
           return empid;
      }   
      string getName()
      {
          return name;
      }  
      float getsalary()
      {
        return sal;
      }   
    };     
       
void PrintEmployee(Employee emp[], int n){

  cout<< "\nId\tName\tSalary\n";

  for(int i=0; i<n; i++){

    cout << emp[i].getId()<<"\t"
          <<emp[i].getName()<<"\t" 
           <<emp[i].getsalary()<<endl;
  }  
                    
}

void SortSalary(Employee emp[], int n, int order){
      Employee temp;
      for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){

          if((order==1 && emp[i].getsalary()>emp[j].getsalary()) ||
           (order==2 && emp[i].getsalary()<emp[j].getsalary()))
           {

                    temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
            }
                   }
      }
}
  
  int main() {

       int n ,id, choice;
       string name ;
       float sal ;
       cout<<" Enter Number of Employee: ";
       cin>>n;

       Employee emp [n];

       for(int i=0; i<n; i++){

        cout<<" Enter Employee Details: "<<i+1<<endl;
        cout<<" Id: ";
        cin>> id;
        cout<<" Name: ";
        cin>> name;
        cout<<" Salary: ";
        cin>> sal;

        emp[i].setdata(id , name , sal);
       }

         cout<<" Sort Employee Salary"<<endl;
         cout<<" 1.Accending: "<<endl;
         cout<<" 2.Desending: "<<endl;
         cout<<" Enter Choice: ";
         cin>>choice;

         SortSalary(emp , n , choice);
         PrintEmployee(emp , n);

         return 0;
    }
  