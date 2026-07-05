#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define PI 3.14159

void assignments1() {
    //Write a program to input a number and calculate its square and cube.
    float number, square, cube;
    printf("Enter a number: ");
    scanf("%f", &number);
    square = pow(number, 2);
    cube = pow(number, 3);
    printf("Square: %.2f\n", square);
    printf("Cube: %.2f\n", cube);
}
void assignments2() {
    //Write a program to input the length and breadth of a rectangle and calculate its area.
    float length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area: %.2f\n", area);
}
void assignments3() {
    //Write a program to input the radius and calculate the area of the circle and circumference of a circle.
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
}
void assignments4() {
    //Write a program to input the radius and height of a cylinder and calculate the volume of the cylinder.
    float radius, height, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = PI * pow(radius, 2) * height;
    printf("Volume: %.2f\n", volume);
}
void assignments5() {
    //Write a program to input principal, rate and time and calculate Simple Interest.
    float principal, rate, time, simpleInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
}
void assignments6() {
    //Write a program to convert temperature from Celsius to Fahrenheit.
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f deg F\n", fahrenheit);
}
void assignments7() {
    //Write a program to convert temperature from Fahrenheit to Celsius.
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;    
    printf("Temperature in Celsius: %.2f deg C\n", celsius);
}
void assignments8() {
    //Write a program to Input distance (in km) and convert it into meters, feet, inches, and centimeters.
    const char *distanceUnitKm = "km";
    const char *distanceUnitM = "m";
    const char *distanceUnitFt = "ft";
    const char *distanceUnitIn = "in";
    const char *distanceUnitCm = "cm";

    float distanceKm, distanceM, distanceFt, distanceIn, distanceCm;
    printf("Enter distance in kilometers: ");
    scanf("%f", &distanceKm);
    distanceM = distanceKm * 1000;
    distanceFt = distanceKm * 3280.84;
    distanceIn = distanceKm * 39370.1;
    distanceCm = distanceKm * 100000;
    printf("Distance in meters: %.2f %s\n", distanceM, distanceUnitM);
    printf("Distance in feet: %.2f %s\n", distanceFt, distanceUnitFt);
    printf("Distance in inches: %.2f %s\n", distanceIn, distanceUnitIn);
    printf("Distance in centimeters: %.2f %s\n", distanceCm, distanceUnitCm);
}
void assignments9() {
    //Write a program to Input minutes and convert into hours and minutes.
    const char *timeUnitMin = "min";
    const char *timeUnitHr = "hr";
    int hours;
    float minutes, remainingMinutes;
    printf("Enter time in minutes: ");
    scanf("%f", &minutes);
    hours = (int)(minutes / 60);
    remainingMinutes = fmod(minutes, 60);
    printf("Time: %.0f %s and %.0f %s\n", hours, timeUnitHr, remainingMinutes, timeUnitMin);
}
void assignments10() {
    //Write a program to input total number of days and convert it into years, months, weeks, and days.
    const char *timeUnitYears = "yrs";
    const char *timeUnitMonths = "mos";
    const char *timeUnitWeeks = "wks";
    const char *timeUnitDays = "ds";

    int totalDays;
    int years, months, weeks, days;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays %365;

        months = totalDays / 30;
    totalDays = totalDays % 30;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Time: %d %s, %d %s, %d %s and %d %s\n",
       years, timeUnitYears,
       months, timeUnitMonths,
       weeks, timeUnitWeeks,
       days, timeUnitDays);
}
int main () {
    int choice;

    printf("=== C Math Practice ===\n");
    printf("1. square and cube\n");
    printf("2. rectangle\n");
    printf("3. circle\n");
    printf("4. cylinder\n");
    printf("5. interest\n");
    printf("6. fahrenheit\n");
    printf("7. celsius\n");
    printf("8. distance\n");
    printf("9. time\n");
    printf("10. date\n");
    printf("Choose a math to practice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice) {
        case 1:
            assignments1();
            break;
        case 2:
            assignments2();
            break;
        case 3:
            assignments3();
            break;
        case 4:
            assignments4();
            break;
        case 5:
            assignments5();
            break;
        case 6:
            assignments6();
            break;
        case 7:
            assignments7();
            break;
        case 8:
            assignments8();
            break;
        case 9:
            assignments9();
            break;
        case 10:
            assignments10();
            break;
        default:
            printf("Invalid choice.\n");
    }
}


