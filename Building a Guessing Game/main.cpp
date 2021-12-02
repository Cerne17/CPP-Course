#include <iostream>
using namespace std;
/// User is supposed to guess the Secret Number
int main()
{
    int secretNum = 7;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    int outOfGuesses = false;
    while(secretNum != guess && !outOfGuesses){
        if (guessCount < guessLimit){
        cout << "Enter guess: ";
        cin >> guess;
        guessCount++;
        }else {
        outOfGuesses = true;
        }
    }
    if (outOfGuesses){
        cout << "You Lose!";
    }else{
        cout << "You win!!!!";
    }
    return 0;
}
