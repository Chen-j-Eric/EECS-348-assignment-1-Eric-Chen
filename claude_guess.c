#include <stdio.h>

int main() {
    int secret = 7;      // Fixed secret number
    int guess; // Stores the number entered by the user
    int attempts = 3; // num of attempts
    int won = 0;         // Flag to track if the user guessed correctly

    printf("Guess a number between 1 and 10.\n"); // prints game statement

    for (int i = 1; i <= attempts; i++) { // i is the counter, attempts is 3 so it has to be 3 or less
        // and adds one each time
        printf("Attempt %d/%d. Enter your guess: ", i, attempts); // Prints the current attempt and total attempts
        scanf("%d", &guess); // reads a number typed by the user from the keyboard and stores it in the variable

        if (guess > secret) { // if guess is greater
            printf("Too high! Try again.\n"); // prints guess is too high
        } else if (guess < secret) { //if guess is too low
            printf("Too low! Try again.\n"); // prints guess is too low
        } else { // because those if statement took care of all other cases that means that else is true
            printf("Correct! You win!\n"); // prints that guess is the same as secret
            won = 1; // saves one as a int of 1
            break;   // Exit the loop early on a correct guess
        }
    }

    if (!won) { // if they didn't win
        printf("You lose! The number was %d.\n", secret); // prints secret num
    }

    return 0; // breaks and ends the gam 
}