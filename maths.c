#include <stdio.h>
#include <math.h>

void sqrtPractice() { //square root practice; ans=sqrt(number)
    float b, ans;
    scanf("%f", &b);
    ans = sqrt(b);
    printf("%.2f\n", ans);
}
void powPractice() { //power practice; ans=pow(base, exponent)
    float b, ans2;
    scanf("%f", &b);
    ans2 = pow(b, 3);
    printf("%.2f\n", ans2);
}
void roundPractice() { //rounding practice; ans=round(number)
    float a, ans;
    scanf("%f", &a);
    ans = round(a);
    printf("%.2f\n", ans);
}
void ceilPractice() { //ceiling practice; ans=ceil(number)
    float a, ans;
    scanf("%f", &a);
    ans = ceil(a);
    printf("%.2f\n", ans);
}
void floorPractice() { //floor practice; ans=floor(number)
    float a, ans;
    scanf("%f", &a);
    ans = floor(a);
    printf("%.2f\n", ans);
}
void absPractice() { //absolute value practice; ans=abs(number)
    float b, ans2;
    scanf("%f", &b);
    ans2 = fabs(b);
    printf("%.2f\n", ans2);
}
void logPractice() { //logarithm practice; ans=log(number)
    float a, ans;
    scanf("%f", &a);
    ans = log(a);
    printf("%.2f\n", ans);   
}
void sinPractice() { //sine practice; ans=sin(angle in radians)
    float a, ans;
    scanf("%f", &a);
    ans = sin(a);
    printf("%.2f\n", ans);  
}
void cosPractice() { //cosine practice; ans=cos(angle in radians)
    float a, ans;
    scanf("%f", &a);
    ans = cos(a);
    printf("%.2f\n", ans);  
}
void tanPractice() { //tangent practice; ans=tan(angle in radians)
    float a, ans;
    scanf("%f", &a);
    ans = tan(a);
    printf("%.2f\n", ans); 
}

int main () {
    int choice;

    printf("=== C Math Functions Practice ===\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Rounding\n");
    printf("4. Ceiling\n");
    printf("5. Floor\n");
    printf("6. Absolute Value\n");
    printf("7. Logarithm\n");
    printf("8. Sine\n");
    printf("9. Cosine\n");
    printf("10. Tangent\n");
    printf("Choose a function to practice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice) {
        case 1:
            sqrtPractice();
            break;
        case 2:
            powPractice();
            break;
        case 3:
            roundPractice();
            break;
        case 4:
            ceilPractice();
            break;
        case 5:
            floorPractice();
            break;
        case 6:
            absPractice();
            break;
        case 7:
            logPractice();
            break;
        case 8:
            sinPractice();
            break;
        case 9:
            cosPractice();
            break;
        case 10:
            tanPractice();
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
    
}