#include<iostream>
using namespace std;

int main() {
    int secret_num = 3;
    int guess;
    int guess_count = 0;
    bool outOfGuess = true;

    cout << "You have 3 attempts to guess...\n";

    while( guess != secret_num && outOfGuess) {
        
        if(guess_count < 3) {
            cout << "Guess the number: ";
            cin >> guess;
            guess_count++;
        }
        else {
            outOfGuess = false;
        }
    }

    if(outOfGuess) {
        cout << "You Won!! in " << guess_count << " attempts.";
    }
    else{
        cout << "You loose!!.";
    }

    return 0;

}