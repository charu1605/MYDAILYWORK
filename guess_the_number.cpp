#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guesscorrectnum() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));
    // a number between 1 and 100
    int random_num = rand() % 100 + 1; 
    int guess_num = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Can you guess what it is?" << endl;

    // Loop until the user guesses the correct number
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess_num;

        if (guess_num < random_num) {
            cout << "Too low!"<<endl<<"Try again." << endl;
        } else if (guess_num > random_num) {
            cout << "Too high!"<<endl<<"Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            break;
        }
    }
}

int main() {
    guesscorrectnum();
    return 0;
}
