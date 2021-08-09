#include <iostream>
// #include<windows.h>
using namespace std;

char Tictactoe[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char current_marker;
int current_player;

void drawBoard()
{
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << Tictactoe[0][0] << "  |  " << Tictactoe[0][1] << "  |  " << Tictactoe[0][2] << endl;
    cout << "\t\t   __|_____|__" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << Tictactoe[1][0] << "  |  " << Tictactoe[1][1] << "  |  " << Tictactoe[1][2] << endl;
    cout << "\t\t   __|_____|__" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << Tictactoe[2][0] << "  |  " << Tictactoe[2][1] << "  |  " << Tictactoe[2][2] << endl;
    cout << "\t\t     |     |     " << endl;
    cout << endl;
    // cout << "                  " << Tictactoe[0][0] << " | " << Tictactoe[0][1] << " | " << Tictactoe[0][2] << endl;
    //cout << "                 ---+---+---\n";
    // cout << "                  " << Tictactoe[1][0] << " | " << Tictactoe[1][1] << " | " << Tictactoe[1][2] << endl;
    //cout << "                 ---+---+---\n";
    //cout << "                  " << Tictactoe[2][0] << " | " << Tictactoe[2][1] << " | " << Tictactoe[2][2] << endl;
}

bool placeMarker(int slot)
{
    int row = slot / 3;
    int col;

    if (slot % 3 == 0)
    {
        row = row - 1;
        col = 2;
    }
    else
    {
        col = slot % 3 - 1;
    }
    if (Tictactoe[row][col] != 'X' && Tictactoe[row][col] != 'O')
    {
        Tictactoe[row][col] = current_marker;
        return true;
    }
    else
    {
        return false;
    }
}

char winner()
{
    for (int i = 0; i < 3; i++)
    {
        //for rows
        if (Tictactoe[i][0] == Tictactoe[i][1] && Tictactoe[i][1] == Tictactoe[i][2])
        {
            return current_player;
        }
        //for columns
        if (Tictactoe[0][i] == Tictactoe[1][i] && Tictactoe[1][i] == Tictactoe[2][i])
        {
            return current_player;
        }
    }
    // diagnol conditions;
    if (Tictactoe[0][0] == Tictactoe[1][1] && Tictactoe[1][1] == Tictactoe[2][2])
    {
        return current_player;
    }
    if (Tictactoe[0][2] == Tictactoe[1][1] && Tictactoe[1][1] == Tictactoe[2][0])
    {
        return current_player;
    }
    return 0;
}

void swap_player_and_marker()
{
    if (current_marker == 'X')
    {
        current_marker = 'O';
    }
    else
    {
        current_marker = 'X';
    }
    if (current_player == 1)
    {
        current_player = 2;
    }
    else
    {
        current_player = 1;
    }
}

void game()
{
    int cp;
    cout << "1. Player Vs Player\t2. Player Vs Computer ";
    cin >> cp;
    cout << "Player one, choose your marker: ";
    char marker_p1;
    cin >> marker_p1;
    current_player = 1;
    current_marker = marker_p1;

    //drawBoard();

    int player_won;

    if (cp == 2)
    {
        for (int i = 0; i < 9; i++)
        {
            int slot;
            if (current_player == 1)
            {
                cout << "It`s player 1`s turn. Enter your slot: \n";
                cin >> slot;
            }

            else if (current_player == 2)
            {

                cout << "Computer's turn \n";
                slot = rand() % 9;
            }

            if (slot < 1 || slot > 9)
            {
                cout << "That slot is invalid! please place marker in another slot!";
                i--;
                continue;
            }

            if (!placeMarker(slot))
            {
                cout << "That slot is occupied! please place marker in another slot!";
                i--;
                continue;
            }
            drawBoard();

            player_won = winner();

            if (player_won == 1)
            {
                cout << "Player one won! Congratulations!";
                break;
            }
            if (player_won == 2)
            {
                cout << "Player two won! Congratulations!";
                break;
            }

            swap_player_and_marker();
        }
        if (player_won == 0)
        {
            cout << "That is a Tie game !";
        }
    }

    if (cp == 1)
    {
        for (int i = 0; i < 9; i++)
        {
            cout << "It`s player " << current_player << "`s turn. Enter your slot: ";
            int slot;
            cin >> slot;

            if (slot < 1 || slot > 9)
            {
                cout << "That slot is invalid! please place marker in another slot!";
                i--;
                continue;
            }

            if (!placeMarker(slot))
            {
                cout << "That slot is occupied! please place marker in another slot!";
                i--;
                continue;
            }
            drawBoard();

            player_won = winner();

            if (player_won == 1)
            {
                cout << "Player one won! Congratulations!";
                break;
            }
            if (player_won == 2)
            {
                cout << "Player two won! Congratulations!";
                break;
            }

            swap_player_and_marker();
        }
        if (player_won == 0)
        {
            cout << "That is a Tie game !";
        }
    }
}

int main()
{
    // HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

    // SetConsoleTextAttribute(h,13);
    cout << "===============================================" << endl;
    cout << "|        Welcome To the Tic Tac Toe Game      |" << endl;
    cout << "===============================================" << endl;
    drawBoard();
    game();
}