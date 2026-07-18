#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice) {

        case 1:
            printf("You chose Rock\n");
            break;

        case 2:
            printf("You chose Paper\n");
            break;

        case 3:
            printf("You chose Scissors\n");
            break;
    }

    switch (computerChoice) {

        case 1:
            printf("Computer chose Rock\n");
            break;

        case 2:
            printf("Computer chose Paper\n");
            break;

        case 3:
            printf("Computer chose Scissors\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice() {

    return (rand() % 3) + 1;
}

int getUserChoice() {

    int choice = 0;

    do {
        printf("\nChoose an option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        if (choice < 1 || choice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n\n");
        }

    } while (choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int computerChoice) {

    if (userChoice == computerChoice) {
        printf("\nIt's a tie! Throw again.\n");
    }
    else if (userChoice == 1 && computerChoice == 3) {
        printf("\nYou win!!\n");
    }
    else if (userChoice == 2 && computerChoice == 1) {
        printf("\nYou win!!\n");
    }
    else if (userChoice == 3 && computerChoice == 2) {
        printf("\nYou win!!\n");
    }
    else {
        printf("\nYou lose!!\n");
    }
}