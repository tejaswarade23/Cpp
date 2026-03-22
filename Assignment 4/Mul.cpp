#include <iostream>
using namespace std;

void multiply(int arr[], int n)
{
    cout << "Result:"<<endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;
}

int main()
{
    int choice, n;

    do
    {
        cout << "1. Multiply Numbers by 2"<<endl;
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

                multiply(arr,n);
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