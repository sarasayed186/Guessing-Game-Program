#include <iostream>  
#include <cstdlib>  
#include <ctime>  

using namespace std;

int main() {
    // Seed the random number generator  
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100  
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the user guesses the correct number  
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the number " << randomNumber << "!" << endl;
            cout << "It took you " << attempts << " attempts to win the game." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}