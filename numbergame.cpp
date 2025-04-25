#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        string name;

        int secretNumber;
        int guess;
        int attempts = 0;

        cout << "Enter your name: ";
        cin >> name;
        cout << "Hello, " << name << "!" << endl;

        secretNumber = rand() % 100 + 1;

        cout << "I've picked a number between 1 and 100. Try to guess it!" << endl;

        do {
            cout << "Your guess: ";
            cin >> guess;
            attempts++;

            if (guess < secretNumber) {
                cout << "Too low!" << endl;
            }
            else if (guess > secretNumber) {
                cout << "Too high!" << endl;
            }
            else {
                cout << "Congratulations, " << name << "! You guessed it in "
                    << attempts << " attempts." << endl;
            }
        } while (guess != secretNumber);

        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thank you for playing! Goodbye!" << endl;
    return 0;
}
