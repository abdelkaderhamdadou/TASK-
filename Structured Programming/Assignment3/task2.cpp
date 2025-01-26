#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int target = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target)
            cout << "Too high! Try again." << endl;
        else if (guess < target)
            cout << "Too low! Try again." << endl;
        else
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;

    } while (guess != target);

    return 0;
}
