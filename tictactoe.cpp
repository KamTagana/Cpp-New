

#include <iostream>
#include <fstream>

#include "tictac.h"

using namespace std;

int main()                         
{
    std::cout << "Welcome!\n\n";
    std::string reply = "y";
    int x_wins = 0, o_wins = 0, ties = 0;

    while (reply == "y") 
    {
        clearboard();
        char winner = play_and_get_winner();
        print_board("\t  ");

        switch (winner) 
        {
        case 'X':   
            x_wins++;  
            break;     
        case '0':     
            o_wins++; 
            break;    
        case 'D':     
            ties++;    
            break;     
        }

        std::cout << "\n\t*Winer statistic*\nPlayer X: " << x_wins
            << ", Player 0: " << o_wins << " and Ties: " << ties << "\n\n";
        std::cout << "\n would you like to play again? (y/n): ";
        std::cin >> reply;
        while (reply != "y" && reply != "n") 
        {
            std::cout << "please inter a valid reply (y/n):";
            std::cin >> reply;
        }

    }


    return 0;
}
