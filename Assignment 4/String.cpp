#include <iostream>
using namespace std;

void printString()
{
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    char str[n];

    cout << "Enter characters:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    cout << "String is: ";
    for(int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "1. Enter Characters"<<endl;
        cout << "2. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                printString();
                break;

            case 2:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 2);

    return 0;
}