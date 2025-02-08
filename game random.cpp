#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 10 + 1;
    switch (num)
    {
    case 1:
        cout << "you win gift cart\n";
        break;
    case 2:
        cout << "you win player\n";
        break;
    case 3:
        cout << "you win gold\n";
        break;
    case 4:
        cout << "you win a teshirt\n";
        break;
    case 5:
        cout << "you win a skils\n";
        break;
    case 6:
        cout << "you win opp\n";
        break;
    case 7:
        cout << "you win ds\n";
        break;
    case 8:
        cout << "you win course\n";
        break;
    case 9:
        cout << "you win a web\n";
        break;
    case 10:
        cout << "you win a network\n";
        break;
    }
    return 0;
}
