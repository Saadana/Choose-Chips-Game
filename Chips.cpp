#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

int main()
{
    bool Player1Turn    = true;
    bool gameOver       = false;
    int chipsInPile     = 0;
    int chipsTaken      = 0;
    int chipsRand       = 0;
    string player1;
    string player2;

    cout<<"********************";
    cout<<"GAME : Choose Chips!";
    cout<<"********************\n";
    Sleep(1*1000);
    cout<<"\nEnter Player 1's name : ";
    getline(cin,player1);
    cout<<"\nEnter Player 2's name : ";
    getline(cin,player2);

    srand(time(0));

    chipsInPile         = (rand() % 100) + 1;
    cout<<"\nGame starts! Brace yourselves!!\n";
    Sleep(1*1000);
    cout<<"\nChips in Pile this time is "<<chipsInPile;
    Sleep(1*1000);
    while(!gameOver)
    {
        chipsRand       = (rand() % chipsInPile) + 1;
        chipsTaken      += chipsRand;

        (Player1Turn) ? cout<<"\n\n"<<player1<<"'s turn :" : cout<<"\n\n"<<player2<<"'s turn :";
        Sleep(1*1000);
        cout<<"\nYou took "<<chipsRand;
        cout<<"\nTotal chips taken till now is "<<chipsTaken;
        Sleep(1*1000);
        if(chipsInPile <= chipsTaken)
        {
            (Player1Turn) ? cout<<"\n\n***Congrats "<<player2<<"! You won!***\n" : cout<<"\n\n***Congrats "<<player1<<"! You won!***\n";
            gameOver    = true;
        }
        Player1Turn     = !(Player1Turn);
    }

    return 0;
}
