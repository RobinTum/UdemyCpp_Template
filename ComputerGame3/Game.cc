#include <cstdint>
#include <iostream>

#include "Game.h"

void game()
{
    std::uint32_t player = START;
    char move;

    while (true)
    {
        if (player == GOAL)
        {
            break;
        }
        else
        {
            for (std::uint32_t i = 0; i < LEN_X; i++)
            {
                if (i == player)
                {
                    std::cout << "P";
                }
                else if (i == START || i == GOAL)
                {
                    std::cout << "|";
                }
                else
                {
                    std::cout << ".";
                }
            }
            std::cin >> move;

            if (move == LEFT && player != START)
            {
                // cout << "The player moved to the left" << endl;
                player--;
            }
            else if (move == RIGHT && player != GOAL)
            {
                // cout << "The player moved to the right" << endl;
                player++;
            }
            else
            {
                std::cout << "Unrecognized move" << std::endl;
            }
        }
    }
}
