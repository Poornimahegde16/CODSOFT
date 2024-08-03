#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int x = rand() % 100 + 1;

    int input;

    cout << "Guess a number between 1 and 100: ";
    while (cin >> input) {
        if (input == x) {
            cout << "Congratulations! You guessed the number." << endl;
            break;
        } else if (input < x) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
        cout << "Guess again: ";
    }

    return 0;
}
