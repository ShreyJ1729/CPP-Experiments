#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include "game_utils.h"

int get_best_score()
{
    std::ifstream input("high_scores.txt");
    int top_score;
    input >> top_score;
    input.close();
    return top_score;
}

void write_best_score(int new_best_score)
{
    std::ofstream output("high_scores.txt");
    output << new_best_score;
    output.close();
}

void run_round()
{
    srand((unsigned int)time(NULL));
    int target = (rand() % 1000) + 1;
    int guess;
    std::vector<int> guesses;

    do
    {
        std::cout << "Guess: ";
        std::cin >> guess;
        guesses.push_back(guess);

        if (guess != target)
        {
            guess > target ? std::cout << "Too big!" : std::cout << "Too small!";
            std::cout << " Attempts: " << guesses.size() << std::endl;
        }
    } while (guess != target);

    std::cout << "You got it!\n";
    std::cout << "Here were your sequence of guesses: { ";

    for (int i = 0; i < guesses.size(); i++)
    {
        std::cout << guesses[i] << ", ";
    }
    std::cout << " }\n";

    int best_score = get_best_score();
    
    if (guesses.size() < best_score)
    {
        write_best_score(guesses.size());
    }
}