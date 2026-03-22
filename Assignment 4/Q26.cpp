#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;       
    char name[50];    
};


void accept(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> arr[i].rollNo;

        cout << "Enter name for student " << i + 1 << ": ";

        cin >> arr[i].name;  
    }
}


void display(Student arr[], int size) {
    cout << "\n--- Student Data ---\n";
    for (int i = 0; i < size; i++) {
        cout << "Roll No: " << arr[i].rollNo
             << ", Name: " << arr[i].name << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[100];  


    accept(students, n);

    display(students, n);

    return 0;
}
