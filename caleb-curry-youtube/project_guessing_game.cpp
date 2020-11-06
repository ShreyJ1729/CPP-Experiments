#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void run_round() {
    srand((unsigned int)time(NULL));
    int target = (rand() % 1000) + 1;
    int guess;
    vector<int> guesses;

    do
    {
        cout << "Guess: ";
        cin >> guess;
        guesses.push_back(guess);
        if (guess != target) {
            guess > target ? cout << "Too big!" : cout << "Too small!";
            cout << " Attempts: " << guesses.size() << endl;
        }
    }
    while(guess != target);

    cout << "You got it!\n";
    cout << "Here were your sequence of guesses: { ";
    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << ", ";
    }
    cout << " }\n";
}


int main() {
    int choice;

    do
    {
        cout << "0) Exit" << endl << "1) Play Game" << endl;
        cin >> choice;
        switch(choice)
        {
            case 0:
                cout << "Fine don't play then.\n";
                return 0;
            case 1:
                cout << "Ayy let's play\n";
                run_round();
                break;
        }
    } while(choice!=0);
}