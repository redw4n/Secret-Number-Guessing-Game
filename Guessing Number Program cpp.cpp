#include <iostream>
#include <cmath>

using namespace std;


int main()
{
   int secretNum = 11;
   int guess;
   int guessCount = 0;
   int guessLimit = 3;
   bool outOfGuesses = false;


   while(secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
        cout << "Enter The Guess Number: ";
        cin >> guess;
        guessCount++;
                                    } else {
                                    outOfGuesses = true;

                                    }

   }
   if(outOfGuesses) {
    cout << "You Lose";
   } else {
   cout << "You Win!";
   }



        return 0;
}
