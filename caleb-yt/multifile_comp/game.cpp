#include <iostream>
#include "game_utils.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int choice;

    do
    {
        cout << "0) Exit" << endl
             << "1) Play Game" << endl
             << "2) See High Scores\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Fine don't play then.\n";
            return 0;
        case 1:
            cout << "Ayy let's play\n";
            run_round();
            break;
        case 2:
            cout << "Best Score: " << get_best_score() << endl
                 << endl;
            break;
        }
    } while (choice != 0);
}