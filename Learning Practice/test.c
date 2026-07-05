#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void variablesPractice() {
    int age = 30;
    float pi = 3.14f;
    double gravity = 9.81;
    char grade = 'A';
    char name[] = "John Doe";
    bool isStudent = true;

    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Gravity: %.2f\n", gravity);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    printf("Is Student: %s\n", isStudent ? "true" : "false");

    int x = 2;
    int y = 3;

    y--;
    x += 2;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
}

void userInputPractice() {
    int age = 0;
    float height = 0.0f;
    char grade = '\0';
    char name[20] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
}

int main() {
    int choice;

    printf("=== C Practice Programs ===\n");
    printf("1. Variables Practice\n");
    printf("2. User Input Practice\n");
    printf("Choose a program: ");
    scanf("%d", &choice);

    printf("\n");

    if (choice == 1) {
        variablesPractice();
    }
    else if (choice == 2) {
        userInputPractice();
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
