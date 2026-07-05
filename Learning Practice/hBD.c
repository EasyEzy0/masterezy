#include <stdio.h>
#include <string.h>

void hBD(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYour %d years old.\n", age);
}

int main() {
    char name[100] = "";
    int age = 0; 

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    hBD(name, age);

    return 0;
}