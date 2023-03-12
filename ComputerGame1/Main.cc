#include <iostream>

using namespace std;

int main()
{
    uint32_t LEN_X = 10;
    uint32_t START = 0;
    uint32_t GOAL = 9;

    char LEFT = 'a';
    char RIGHT = 'd';

    uint32_t player = START;
    char move;
    /*
    cin >> move;

    if (move == LEFT)
    {
        cout << "The player moved to the left" << endl;
    }
    else if (move == RIGHT)
    {
        cout << "The player moved to the right" << endl;
    }
    else
    {
        cout << "Unrecognized move" << endl;
    }
    */

    while (true)
    {
        if (player == GOAL)
        {
            break;
        }
        else
        {
            for (uint32_t i = 0; i < LEN_X; i++)
            {
                if (i == player)
                {
                    cout << "P";
                }
                else if (i == START || i == GOAL)
                {
                    cout << "|";
                }
                else
                {
                    cout << ".";
                }
            }
            cin >> move;

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
                cout << "Unrecognized move" << endl;
            }
        }
    }


    return 0;
}
