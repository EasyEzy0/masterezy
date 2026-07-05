#include <stdio.h>

int main() {
    int choice = 0;
    float kg, pounds;
    printf("Weight Conversion\n");
    printf("1.KG to Pounds\n");
    printf("2.Pounds to KG\n");
    printf("Please, enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter your weight in KG: ");
        scanf("%f", &kg);
        pounds = kg * 2.205;
        printf("%.2f kg is equal to %.2f pounds.", kg, pounds);
    }
    else if(choice == 2){
        printf("Enter your weight in Pounds: ");
        scanf("%f", &pounds);
        kg = pounds / 2.205;
        printf("%.2f pounds is equal to %.2f kg.", pounds, kg);
    }
    else{
        printf("Your input wrong choice! Please, try again.");
    }
    return 0;
    }
