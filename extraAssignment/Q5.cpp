#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:

    void accept()
    {
        cout << "Enter elements of 3x3 matrix:"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator + (Matrix m)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator - (Matrix m)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator * (Matrix m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = 0;
                for(int k=0;k<3;k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1, m2, result;
    int choice;

    cout << "Enter Matrix 1"<<endl;
    m1.accept();

    cout << "Enter Matrix 2"<<endl;
    m2.accept();

    do
    {
        cout << "Menu"<<endl;
        cout << "1. Addition"<<endl;
        cout << "2. Subtraction"<<endl;
        cout << "3. Multiplication"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                result = m1 + m2;
                cout << "Addition Result:"<<endl;
                result.display();
                break;

            case 2:
                result = m1 - m2;
                cout << "Subtraction Result:"<<endl;
                result.display();
                break;

            case 3:
                result = m1 * m2;
                cout << "Multiplication Result:"<<endl;
                result.display();
                break;

            case 4:
                cout << "Exiting--"<<endl;
                break;

            default:
                cout << "Invalid choice";
        }

    }while(choice != 4);

    return 0;
}