#include <stdio.h>
void temp1() {
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
void temp2() {
    #include <stdio.h>
    int n[7];
    float sum = 0, avg;

    printf("Enter temperatures of the last 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 7; i++) {
        sum += n[i];
    }
    avg = sum / 7;
    printf("Average temperature = %.2f\n", avg);
}
int main(){
    int choice;
    
    do{
        printf("1.Temp Convo\n");
        printf("2.Temp Count w/Array\n");
        printf("0.Exit choice\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: temp1(); break;
            case 2: temp2(); break;
            case 0: printf("Exiting ......\n"); break;
            default: printf("invalid choice\n");
        }
    }
    while (choice != 0);
}
