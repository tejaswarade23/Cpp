#ifndef Q5PLAYER_H
#define Q5PLAYER_H

#include <iostream>
using namespace std;

class Player
{
    string name;
    int age;
    string country;

public:
    Player();                     
    Player(string,int,string);      

    void accept();               
    void display();               

    string getName();             
    int getAge();                   
};

// Global sorting 
void sortByName(Player[], int);
void sortByAge(Player[], int);

#endif