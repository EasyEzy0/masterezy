#include <stdio.h>
#include <math.h>

int main() {
    int n, og, temp, digit;
    int count = 0;
    int sum = 0;

    printf("Enter your number: ");
    scanf("%d", &n);

    og = n;

    temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == og) {
        printf("%d is an Armstrong number", og);
    }
    else {
        printf("%d is not an Armstrong number", og);
    }

    return 0;
}