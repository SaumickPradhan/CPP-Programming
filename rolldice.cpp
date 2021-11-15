//Author: Saumick Pradhan
// Filename: rolldice.cpp
// Description: Random 2 die roll game to get win, lose, continue probabilty
#include <iostream>
#include<cmath>
#include <ctime>
using namespace std;
int main()
{   //declare variables
    time_t seed = time(0);
    srand(seed);
    int no1;
    int no2;
    int sum;
    //generate game to win, lose, continue 
    while (true)
    {
        sum = 0;
        no1 = rand() % 6 + 1;
        no2 = rand() % 6 + 1;
        cout << "Die 1: " << no1 << "\t\t";
        cout << "Die 2: " << no2 << "\t\t";
        sum = no1 + no2;
        cout << "Total: " << sum << endl;
        if (sum == 7 || sum == 9 || sum == 11)// condition for the game
        {
            cout << "You're a WINNER!" << endl << "Game over." << endl; //printing
            break;
        }
        else if (sum == 2 || sum == 3 || sum == 5)
        {
            cout << "You LOST!!" << endl << "Game over." << endl;
            break;
        }
        else if (sum == 4 || sum == 6 || sum == 12 || sum == 8 || sum == 10)
        {
            cout << "Let's roll again..." << endl;
        }
    }
    return 0;
}