#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    int temp;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, n;
    int *arr = NULL;

    do
    {
        cout << "MENU";
        cout << "1. Accept Numbers"<<endl;
        cout << "2. Sort and Display"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                arr = new int[n];

                cout << "Enter elements: "<<endl;
                for(int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                break;

            case 2:
                if(arr == NULL)
                {
                    cout << "Please enter numbers first"<<endl;
                }
                else
                {
                    sortArray(arr, n);
                }
                break;

            case 3:
                delete[] arr;
                cout << "Program Ended"<<endl;
                break;

            default:
                cout << "Invalid choice"<<endl;
        }

    } while(choice != 3);

    return 0;
}