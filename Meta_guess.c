#include <stdio.h>

int main() { // starts main function 
    int secret = 7; // declares secret as a int
    int guess; // guess declared but there is nothing inside

    printf("Guess a number between 1 and 10.\n");

    for (int attempt = 1; attempt <= 3; attempt++) { // starts attempts at 1 and goes up to 3
        // and adds one after each iteration
        printf("Attempt %d/3. Enter your guess: ", attempt);  // prints number of attempts here
        
        // read integer from user
        if (scanf("%d", &guess) != 1) { // error checking, input must be an integer
            printf("Invalid input. Please enter a number.\n"); // prints error message
            return 1; // kicks the program out
        }

        if (guess == secret) { // if guess is the same as the number
            printf("Correct! You win!\n"); // prints this
            break; // exits the for loop
        } else if (guess < secret) { // if your guess is too low
            printf("Too low! Try again.\n"); // prints too low
        } else { // another case
            printf("Too high! Try again.\n"); // prints this if guess is too hgih
        }

        // if this was the last attempt and they didn't win
        if (attempt == 3) {
            printf("You lose! The number was %d.\n", secret);// prints the number
        }
    }

    return 0; //ends program 
}