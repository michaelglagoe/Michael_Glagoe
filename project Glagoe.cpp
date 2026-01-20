#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    // 1. Initialize Randomness
    srand(static_cast<unsigned int>(time(0))); 
    int secret_number = rand() % 100 + 1;
    int player_guess = 0;
    int attempts = 0;

    cout << "--- Welcome to the Number Guessing Game! ---" << endl;
    cout << "I have picked a number between 1 and 100." << endl;

    // 2. The Game Loop
    while (player_guess != secret_number) {
        cout << "Enter your guess: ";
        
        // Check if the input is a valid integer
        if (!(cin >> player_guess)) {
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(1000, '\n'); // Skip the bad input
            continue;
        }

        attempts++;

        // 3. Logic for Hints
        if (player_guess > secret_number) {
            cout << "Too High! Try again." << endl;
        } 
        else if (player_guess < secret_number) {
            cout << "Too Low! Try again." << endl;
        } 
        else {
            cout << "Correct! You got it in " << attempts << " tries." << endl;
        }
    }

    return 0;
}