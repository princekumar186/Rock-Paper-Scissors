 #include <stdio.h>

#include <stdlib.h>

#include <time.h>



void printChoice(int choice) {

    if (choice == 0) {

        printf("Rock\n");

    } else if (choice == 1) {

        printf("Paper\n");

    } else if (choice == 2) {

        printf("Scissors\n");

    }

}



int main() {

    int userChoice, computerChoice;

    int result;



    // Seed the random number generator

    srand(time(NULL));



    // Instructions for the user

    printf("Rock, Paper, Scissors Game\n");

    printf("Choose one: \n");

    printf("0 for Rock\n1 for Paper\n2 for Scissors\n");



    // Get the user's choice

    printf("Enter your choice (0, 1, or 2): ");

    scanf("%d", &userChoice);



    // Validate the user's input

    if (userChoice < 0 || userChoice > 2) {

        printf("Invalid choice! Please enter a number between 0 and 2.\n");

        return 1;  // Exit if invalid input

    }



    // Get the computer's choice (random)

    computerChoice = rand() % 3;



    // Display both choices

    printf("You chose: ");

    printChoice(userChoice);

    printf("Computer chose: ");

    printChoice(computerChoice);



    // Determine the result

    if (userChoice == computerChoice) {

        printf("It's a tie!\n");

    } else if ((userChoice == 0 && computerChoice == 2) || 

               (userChoice == 1 && computerChoice == 0) || 

               (userChoice == 2 && computerChoice == 1)) {

        printf("You win!\n");

    } else {

        printf("You lose!\n");

    }



    return 0;

}