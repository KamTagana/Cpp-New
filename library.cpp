#include <iostream>
#include <fstream>
#include "tictac.h"

char board[9] = {};

void clearscreen()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << std::endl;
    }
}



void clearboard()
{
    for (int i = 0; i < 9; i++)
    {
        board[i] = '-';
    }

}

bool has_wonQ(char player)
{
    int wins[][3] = {
        {0,1,2}, {3,4,5},
        {6,7,8}, {0,3,6},
        {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    for (int i = 0; i < 8; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board[wins[i][j]] == player)
                count++;
        }
        if (count == 3)
        {
            return true;
        }
    }
    return false;
}



void print_board(std::string indent)
{
    std::cout << "Game board\n";
    std::cout << indent << "-" << board[6] << "-|-" << board[7] << "-|-" << board[8] << "- \n";
    std::cout << indent << "-" << board[3] << "-|-" << board[4] << "-|-" << board[5] << "- \n";
    std::cout << indent << "-" << board[0] << "-|-" << board[1] << "-|-" << board[2] << "- \n";
}


int get_move()
{
    std::cout << "\nDesk: \n";
    std::cout << "-7-|-8-|-9-" << std::endl;
    std::cout << "-4-|-5-|-6-" << std::endl;
    std::cout << "-1-|-2-|-3-" << std::endl;
    std::cout << "\n";

    print_board("");
    std::cout << "\nEnter number: ";


    int move;
    std::cin >> move;
    while (move > 9 || move < 1 || board[move - 1] != '-')
    {
        std::cout << "Please enter number (1-9):\n";

    }
    return move;
}

char play_and_get_winner()
{
    int turn = 1;

    while (!has_wonQ('X') && !has_wonQ('0'))
    {
        clearscreen();
        int move = get_move();

        clearscreen();
        if (turn % 2 == 1)
        {
            board[move - 1] = 'X';
            if (has_wonQ('X'))
            {
                std::cout << "X,Congratulation!\n";
                return 'X';
            }

        }
        else
        {
            board[move - 1] = '0';
            if (has_wonQ('0'))
            {
                std::cout << "O,Congratulation!\n";
                return '0';
            }
        }
        turn++;
        if (turn == 10)
        {
            std::cout << "tie\n";
            return 'D';
        }
    }
}
