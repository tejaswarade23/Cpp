#include <iostream>
using namespace std;

float average(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return (float)sum / n;
}

int main()
{
    int choice, n;

    do
    {
        cout << "1. Find Average"<<endl;
        cout << "2. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter number of elements: ";
                cin >> n;

                int arr[n];

                cout << "Enter numbers:"<<endl;
                for(int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                cout << "Average = " << average(arr,n) << endl;
                break;
            }

            case 2:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 2);

    return 0;
}