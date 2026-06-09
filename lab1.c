#include <stdio.h>
#include <math.h>

void Prac1() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
        printf("%d is divisible by 5.\n", num);
    else
        printf("%d is not divisible by 5.\n", num);
}

void Prac2() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are an adult, thus eligible to vote.\n");
    else
        printf("You are a minor, thus not a voter.\n");
}

void Prac3() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 13 && age <= 19)
        printf("You are a teenager.\n");
    else
        printf("You are not a teenager.\n");
}

void Prac4() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int root = sqrt(num);

    if (root * root == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);
}

void Prac5() {
    float a, b, c;
    float highest, lowest, difference;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    highest = a;
    if (b > highest) highest = b;
    if (c > highest) highest = c;

    lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;

    difference = highest - lowest;

    printf("Difference between highest and lowest: %.2f\n", difference);
}

void Prac6() {
    float bs, hra, da, gs;

    printf("Enter basic salary: ");
    scanf("%f", &bs);

    if (bs <= 10000) {
        hra = bs * 0.20;
        da = bs * 0.80;
    }
    else if (bs <= 20000) {
        hra = bs * 0.25;
        da = bs * 0.90;
    }
    else {
        hra = bs * 0.30;
        da = bs * 0.95;
    }

    gs = bs + hra + da;

    printf("Your Gross Salary is: %.2f\n", gs);
}

void Prac7() {
    float x, y;

    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("The point lies in Quadrant I\n");
    else if (x < 0 && y > 0)
        printf("The point lies in Quadrant II\n");
    else if (x < 0 && y < 0)
        printf("The point lies in Quadrant III\n");
    else if (x > 0 && y < 0)
        printf("The point lies in Quadrant IV\n");
    else if (x == 0 && y == 0)
        printf("The point lies at the Origin\n");
    else if (x == 0)
        printf("The point lies on the Y-axis\n");
    else
        printf("The point lies on the X-axis\n");
}

void Prac8_9() {
    float a, b, c;

    printf("Input the sides (a, b and c): ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {

        printf("Valid triangle.\n");

        if (a == b && b == c)
            printf("This is an equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("This is an isosceles triangle.\n");
        else
            printf("This is a scalene triangle.\n");
    }
    else {
        printf("Invalid triangle.\n");
    }
}

void Prac10() {
    float a, b, c;

    printf("Input the angles (a, b and c): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        fabs((a + b + c) - 180.0) < 0.0001) {

        printf("The triangle is valid.\n");

        if (a == b && b == c)
            printf("It is an equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("It is an isosceles triangle.\n");
        else
            printf("It is a scalene triangle.\n");
    }
    else {
        printf("The triangle is NOT valid.\n");
    }
}

void Prac11() {
    float income, tax;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income <= 150000)
        tax = 0;
    else if (income <= 300000)
        tax = income * 0.10;
    else if (income <= 500000)
        tax = income * 0.20;
    else
        tax = income * 0.30;

    printf("Tax = %.2f\n", tax);
}

int main() {
    int choice;

    do {
        printf("\n===== PRACTICE MENU =====\n");
        printf("1. Divisible by 5\n");
        printf("2. Voter Check\n");
        printf("3. Teenager Check\n");
        printf("4. Perfect Square\n");
        printf("5. Highest-Lowest Difference\n");
        printf("6. Gross Salary\n");
        printf("7. Quadrant Finder\n");
        printf("8. Triangle Type & Validity (Sides)\n");
        printf("9. Triangle Validity (Angles)\n");
        printf("10. Income Tax Calculator\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Prac1(); break;
            case 2: Prac2(); break;
            case 3: Prac3(); break;
            case 4: Prac4(); break;
            case 5: Prac5(); break;
            case 6: Prac6(); break;
            case 7: Prac7(); break;
            case 8: Prac8_9(); break;
            case 9: Prac10(); break;
            case 10: Prac11(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}