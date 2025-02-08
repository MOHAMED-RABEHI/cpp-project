#include <iostream>
using namespace std;
void bord(char *spaces)
{
    cout << "\n";
    cout << "    |      |    " << '\n';
    cout << "" << spaces[0] << "   |  " << spaces[1] << "   |  " << spaces[2] << "   " << '\n';

    cout << "____|______|_____" << endl;
    cout << "    |      |     " << endl;
    cout << "" << spaces[3] << "   |  " << spaces[4] << "   |  " << spaces[5] << "   " << '\n';
    cout << "____|______|_____" << endl;
    cout << "    |      |   " << endl;
    cout << "" << spaces[6] << "   |  " << spaces[7] << "   |  " << spaces[8] << "   " << '\n';
    cout << "    |      |    " << endl;
    cout << "\n";
}
void user(char *spaces, char player)
{
    int choise;
    do
    {
        cout << "Enter your choise from 1 to 9" << endl;
        cin >> choise;
        choise--;
        if (spaces[choise] == ' ')
        {
            spaces[choise] = player;
            break;
        }
    } while (!choise > 0 || !choise < 8);
}
void computere(char *spaces, char computer)
{
    int choise;
    srand(time(0));
    while (true)
    {
        choise = rand() % 9;
        if (spaces[choise] == ' ')
        {
            spaces[choise] = computer;
            break;
        }
    }
}

bool checkwinner(char *spaces, char player, char computer)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        if (spaces[0] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        if (spaces[3] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        if (spaces[6] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        if (spaces[0] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        if (spaces[1] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        if (spaces[2] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        if (spaces[0] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        if (spaces[2] == player)
        {
            cout << "Player wins" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
    else
    {

        return false;
    }
    return true;
}
bool checktie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    cout << "Game is tie" << endl;
    return true;
}
int main()
{
    char player = 'X';
    char computer = 'O';
    bool running = true;
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    cout << "Welcome to Tic Tac Toe Game" << endl;
    bord(spaces);
    while (running)
    {
        user(spaces, player);

        bord(spaces);
        if (checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }
        computere(spaces, computer);
        bord(spaces);
        if (checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }
        }
    cout << "Game Over" << endl;

    return 0;
}
