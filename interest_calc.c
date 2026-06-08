#include <stdio.h>
#include <math.h>
int main() {
    const char currency[] = "$";
    double p, r, total;
    int t, timescompound;
    printf("Compound interest calculator\n");
    printf("Enter the principal amount (p): ");
    scanf("%lf", &p);
    printf("Enter the annual interest rate (r): ");
    scanf("%lf", &r);
    r = r / 100;
    printf("Enter the time in years (t): ");
    scanf("%d", &t);
    printf("Enter the number of times the interest is compounded per year (n): ");
    scanf("%d", &timescompound);

    total = p * pow((1 + r / timescompound), timescompound * t);
    printf("The total amount after %d years is: %s%.2lf\n", t, currency, total);
}