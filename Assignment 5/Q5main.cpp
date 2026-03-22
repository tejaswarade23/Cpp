#include <iostream>
#include "Q5Player.h"
using namespace std;

int main()
{
    int n;

    cout << "Enter number of players: ";
    cin >> n;

    Player p[n];

    // Accept player data
    for(int i=0;i<n;i++)
    {
        cout << "\nEnter details of player " << i+1 << endl;
        p[i].accept();
    }

    // Sort by name
    sortByName(p,n);

    cout << "\n-----Players Sorted By Name-----\n";

    for(int i=0;i<n;i++)
    {
        p[i].display();
    }

    return 0;
}