#include <stdio.h>

void lab1() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    int age, count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &age);
        if (age >= 13 && age <= 18)
            count++;
    }
    printf("Teenagers: %d\n", count);
}

void lab2() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    int age, count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &age);
        if (age >= 18)
            count++;
    }
    printf("Voters: %d\n", count);
}

void lab3() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    int age;
    int child = 0, teen = 0, senior = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &age);
        if (age <= 12)
            child++;
        else if (age >= 13 && age <= 19)
            teen++;
        else if (age >= 65)
            senior++;
    }
    printf("Child: %d\nTeenager: %d\nSenior: %d\n", child, teen, senior);
}

void lab4() {
    int n;
    printf("Enter number of countries: ");
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        long long population;
        double area;
        printf("Enter population and area: ");
        scanf("%lld %lf", &population, &area);
        if (area > 0 && (population / area) > 500)
            count++;
    }
    printf("Countries with density > 500: %d\n", count);
}

void lab5() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    float cgpa;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%f", &cgpa);
        if (cgpa >= 3.5)
            count++;
    }
    printf("Students with CGPA >= 3.5: %d\n", count);
}

void lab6() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    float cgpa, sum = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%f", &cgpa);
        sum += cgpa;
    }
    if (n > 0)
        printf("Average CGPA: %.2f\n", sum / n);
    else
        printf("No students.\n");
}

void lab7() {
    int n;
    printf("Enter number of points: ");
    scanf("%d", &n);
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    for (int i = 0; i < n; i++) {
        float x, y;
        scanf("%f %f", &x, &y);
        if (x > 0 && y > 0)
            q1++;
        else if (x < 0 && y > 0)
            q2++;
        else if (x < 0 && y < 0)
            q3++;
        else if (x > 0 && y < 0)
            q4++;
    }

    printf("Q1 = %d\nQ2 = %d\nQ3 = %d\nQ4 = %d\n", q1, q2, q3, q4);
    int max = q1, q = 1;
    if (q2 > max) { max = q2; q = 2; }
    if (q3 > max) { max = q3; q = 3; }
    if (q4 > max) { max = q4; q = 4; }
    printf("Most points in Quadrant %d (%d points)\n", q, max);
}

void lab8() {
    int n;
    printf("Enter number of points: ");
    scanf("%d", &n);
    float x, y;
    float sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &x, &y);
        sumX += x;
        sumY += y;
    }
    if (n > 0)
        printf("Centroid = (%.2f, %.2f)\n", sumX / n, sumY / n);
    else
        printf("No points.\n");
}

void lab9() {
    int n, count = 0;
    printf("Enter number of days's temperatures: ");
    scanf("%d", &n);
    float temp, sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("Enter temperature: ");
        scanf(" %f", &temp);
        if (temp > 30) {
            sum += temp;
            count++;
        }
    }
    if (count > 0)
        printf("Average (>30 deg C): %.2f\n", sum / count);
    else
        printf("No temperature exceeded 30°C\n");
}

int main() {
    int choice;

    do {
        printf("\n===== PRACTICE MENU =====\n");
        printf("1. Teen or not\n");
        printf("2. Voter Check\n");
        printf("3. Age Check\n");
        printf("4. Country Density\n");
        printf("5. Secure CGPA\n");
        printf("6. Average CGPA\n");
        printf("7. Quadrant Finder\n");
        printf("8. Centroid\n");
        printf("9. Temperature\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: lab1(); break;
            case 2: lab2(); break;
            case 3: lab3(); break;
            case 4: lab4(); break;
            case 5: lab5(); break;
            case 6: lab6(); break;
            case 7: lab7(); break;
            case 8: lab8(); break;
            case 9: lab9(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}