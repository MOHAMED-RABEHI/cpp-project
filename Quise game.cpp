#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    char answer;
    int score = 0;
    string question[] = {"What is  name seo of  amason?",
                         "What is the hight languge programing?",
                         "What is the languich programing for web?",
                         "What is the languich of brazile?"};
    string answerkey[] = {"A", "D", "B", "C"};
    string response[][4] = {
        {"A .jife besose", "B. lamine", "C. jack", "D. cr7"},
        {"A .js", "B. pyton", "C. java", "D. C++"},
        {"A .c", "B. js", "C. My rust", "D. go"},
        {"A . english", "B.arabic", "C. portgal", "D.spanish"}};
    for (int i = 0; i < 4; i++)
    {
        cout << question[i] << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << response[i][j] << endl;
        }
        cout << "Enter your answer: ";
        cin >> answer;
        answer = toupper(answer);
        if (string(1, answer) == answerkey[i])
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Incorrect!" << endl;
        }
    }
    cout << "Your score is: " << score << "/4" << endl;

    return 0;
}
