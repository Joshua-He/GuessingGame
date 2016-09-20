#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
 Joshua He 
This program is a guessing game
If you can guess the number right 4 times in a row,
Email 280166@bsd48.org for 100$

 */
int main(){
  
  int randomNumber;
  int counter = 0;
  int on = 0;
  int guess;
  char playAgain = '1';

  srand(time(NULL)); // randomize and initialize the random number
  
  while (playAgain=='1') {
    randomNumber = rand() % 101;  // generate random number from 0 - 100
    on = 0;
    
    while (on==0) {
      cout << "Guess a number from 0 - 100 (0 and 100 included)" << endl;
      cin >> guess;
      
      if (guess > randomNumber){
	counter++;
	cout << "Your guess was too big" << endl;
      }
      else if (guess < randomNumber){
	counter++;
	cout << "Your guess was too low" << endl;
      }
      else {
	counter++;
	cout << "Correct!" << endl;
	cout << "You won in " << counter << " guesses" << endl;
	on = 1;
      }
    }
    
    cout << "Do you want to play again (1 for yes 0 for no)" << endl;
    cin >> playAgain;
  }  
}
