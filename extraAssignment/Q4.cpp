#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    int count = 0;
    float average;

    cout << "Enter 5 grades: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum = sum + marks[i];

        if(marks[i] < 65)
        {
            count++;
        }
    }

    average = sum / 5.0;

    cout << "Average Marks = " << average << endl;
    cout << "Number of marks less than 65 = " << count << endl;

    return 0;
}