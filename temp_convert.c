#include <stdio.h>
int main() {
    char choice = '\0';
    float F = 0.0f, C = 0.0f;
    printf("Temperature Conversation\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    printf("Is the temperature in C or F?: ");
    scanf("%c", &choice);
    if(choice == 'C'){
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &C);
        F=C*9/5+32;
        printf("The temperature in Fahrenheit is %.2f deg F", F);
    }
    else if(choice == 'F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &F);
        C=(F-32)*5/9;
        printf("The temperature in Celcius is %.2f deg C", C);
    }
}