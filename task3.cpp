#include<iostream>
#include <windows.h>
using namespace std;

void printBoard(char* spaces);
void playermove(char* spaces, char* player);
bool checkWinner(char* spaces, char* player);


void printBoard(char* spaces)
{
    cout << "Current Board:" << endl;
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << endl;
}

void playermove(char* spaces, char* player)
{
    int number;
    do
    {

        cout << "Enter the number between 1-9" << endl;
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = *player;
            system("cls");
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    } while ((!number > 0) || !number < 8); 
}

bool checkWinner(char* spaces, char* player)
{
    if (spaces[0] == *player && spaces[1] == *player && spaces[2] == *player)
        return true;
    if (spaces[3] == *player && spaces[4] == *player && spaces[5] == *player)
        return true;
    if (spaces[6] == *player && spaces[7] == *player && spaces[8] == *player)
        return true;
    if (spaces[0] == *player && spaces[3] == *player && spaces[6] == *player)
        return true;
    if (spaces[1] == *player && spaces[4] == *player && spaces[7] == *player)
        return true;
    if (spaces[2] == *player && spaces[5] == *player && spaces[8] == *player)
        return true;
    if (spaces[0] == *player && spaces[4] == *player && spaces[8] == *player)
        return true;
    if (spaces[2] == *player && spaces[4] == *player && spaces[6] == *player)
        return true;
    return false;
}

int main()
{
    char player1 = 'X';
    char player2 = 'O';
    bool running = true;

    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    printBoard(spaces);
    while (running)
    {
        cout << "Player 1's Turn:" << endl;
        playermove(spaces, &player1);
        printBoard(spaces);
        if (
            checkWinner(spaces, &player1))
        {
            cout << "Player 1 wins!" << endl;
            running = false;
            break;
        }
        cout << "Player 2's Turn:" << endl;
        playermove(spaces, &player2);
        printBoard(spaces);
        if (
            checkWinner(spaces, &player2))
        {
            cout << "Player 2 wins!" << endl;
            running = false;
            break;
        }
        bool draw = true;
        for (int i = 0; i < 9; i++)
        {
            if (spaces[i] == ' ')
            {
                draw = false;
                break;
            }
        }
    }



    return 0;
}
