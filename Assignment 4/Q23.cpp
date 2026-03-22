#include<iostream>
using namespace std;
struct Student{
    int id;
    char sname[20];
    int age;
};
void printarray(Student array[],int n){
    for(int i=0;i<n;i++){
        cout<<"id: "<<array[i].id 
            <<" Name: "<<array[i].sname
            <<" Age: " <<array[i].age<<endl;
    
    }

}
int main(){
    Student s1[3]={{1,"Abc",20},{2,"Xyz",21},{3,"Pqr",22}};
    int n=3;
    printarray(s1,n);
    return 0;
    
}