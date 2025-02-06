#include <iostream>
#include <string>
#include <ctime>
using namespace std;

char getuserchoice()
{
    char player;
    do
    {
        cout << "Choose rock, paper, or scissors:" << endl;
        cout << "r: for rock" << endl;
        cout << "p: for paper" << endl;
        cout << "s: for scissors" << endl;
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}

char getchoicecomputer()
{
    srand(time(0));
    int number = rand() % 3 + 1;
    switch (number)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        return 'r';
    }
}
char winer(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a tie!" << endl;
        }
        else if (computer == 'p')
        {
            cout << "Computer wins!" << endl;
        }
        else if (computer == 's')
        {
            cout << "Player wins!" << endl;
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            cout << "It's a tie!" << endl;
        }
        else if (computer == 's')
        {
            cout << "Computer wins!" << endl;
        }
        else if (computer == 'r')
        {
            cout << "Player wins!" << endl;
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "It's a tie!" << endl;
        }
        else if (computer == 'r')
        {
            cout << "Computer wins!" << endl;
        }
        else if (computer == 'p')
        {
            cout << "Player wins!" << endl;
        }
        break;

    default:
        break;
    }
}

int main()
{
    char player;
    char computer;
    cout << "Game of Rock, Paper, Scissors" << endl;
    player = getuserchoice();
    computer = getchoicecomputer();
    cout << "Player chose: " << player << endl;
    cout << "Computer chose: " << computer << endl;
    winer(player, computer);

    

    return 0;
}
