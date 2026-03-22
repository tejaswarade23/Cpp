#include "Q5Player.h"

// Default constructor
Player::Player()
{
    name = "";
    age = 0;
    country = "";
}

// Parameterized constructor
Player::Player(string n, int a, string c)
{
    name = n;
    age = a;
    country = c;
}

// Accept function
void Player::accept()
{
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Country: ";
    cin >> country;
}

// Display function
void Player::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
    cout << endl;
}

// Getter functions
string Player::getName()
{
    return name;
}

int Player::getAge()
{
    return age;
}

// Sort players by name
void sortByName(Player p[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i].getName() > p[j].getName())
            {
                Player temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

// Sort players by age
void sortByAge(Player p[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i].getAge() > p[j].getAge())
            {
                Player temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}