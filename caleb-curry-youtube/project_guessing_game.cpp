#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

int get_best_score()
{
    ifstream input("high_scores.txt");
    int top_score;
    input >> top_score;
    input.close();
    return top_score;
}

void write_best_score(int new_best_score)
{
    ofstream output("high_scores.txt");
    output << new_best_score;
    output.close();
}

void run_round()
{
    srand((unsigned int)time(NULL));
    int target = (rand() % 1000) + 1;
    int guess;
    vector<int> guesses;

    do
    {
        cout << "Guess: ";
        cin >> guess;
        guesses.push_back(guess);

        if (guess != target)
        {
            guess > target ? cout << "Too big!" : cout << "Too small!";
            cout << " Attempts: " << guesses.size() << endl;
        }
    } while (guess != target);

    cout << "You got it!\n";
    cout << "Here were your sequence of guesses: { ";

    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << ", ";
    }
    cout << " }\n";

    int best_score = get_best_score();
    
    if (guesses.size() < best_score)
    {
        write_best_score(guesses.size());
    }
}

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