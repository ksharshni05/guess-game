#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Guess the number (1-100): ";
    do {
        cin >> guess;
        tries++;
        if (guess > number)
            cout << "Too high! Try again: ";
        else if (guess < number)
            cout << "Too low! Try again: ";
        else
            cout << "Correct! You guessed it in " << tries << " tries.\n";
    } while (guess != number);

    return 0;
}