#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int guess, num = rand() % 100 + 1; // Generate a random number between 1 and 100

    cout << "Guess the number (1-100): ";
    while (cin >> guess) {
        if (guess == num) {
            cout << "Congratulations! You guessed it right!" << endl;
            break;
        } else if (guess < num) {
            cout << "Try a larger number." << endl;
        } else {
            cout << "Try a smaller number." << endl;
        }
        cout << "Guess again: ";
    }

    return 0;
}