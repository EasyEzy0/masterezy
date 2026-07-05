#include <stdio.h>

// Function Prototypes
void sumDigits();
void largestDigit();
void countDigits();
void orchidBouquet();
void chocolateShare();
void reverseNumber();
void armstrongCheck();
void sumEvenDigits();
void oddEvenDigits();
void digitsDivisibleBy3();
void firstLastDigit();
void productDigits();
void digitsGreaterThan5();
void harshadCheck();

int main()
{
    int choice;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Sum of Digits\n");
        printf("2. Largest Digit\n");
        printf("3. Count Digits\n");
        printf("4. Orchid Bouquet Problem\n");
        printf("5. Chocolate Sharing\n");
        printf("6. Reverse Number\n");
        printf("7. Armstrong Number Check\n");
        printf("8. Sum of Even Digits\n");
        printf("9. Count Odd and Even Digits\n");
        printf("10. Count Digits Divisible by 3\n");
        printf("11. First and Last Digit\n");
        printf("12. Product of Digits\n");
        printf("13. Count Digits Greater than 5\n");
        printf("14. Harshad Number Check\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: sumDigits(); break;
            case 2: largestDigit(); break;
            case 3: countDigits(); break;
            case 4: orchidBouquet(); break;
            case 5: chocolateShare(); break;
            case 6: reverseNumber(); break;
            case 7: armstrongCheck(); break;
            case 8: sumEvenDigits(); break;
            case 9: oddEvenDigits(); break;
            case 10: digitsDivisibleBy3(); break;
            case 11: firstLastDigit(); break;
            case 12: productDigits(); break;
            case 13: digitsGreaterThan5(); break;
            case 14: harshadCheck(); break;
            case 0: printf("Program Ended.\n"); break;
            default: printf("Invalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}

// 1. Sum of Digits
void sumDigits()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
}

// 2. Largest Digit
void largestDigit()
{
    int n, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        if(digit > largest)
            largest = digit;
        n /= 10;
    }

    printf("Largest digit = %d\n", largest);
}

// 3. Count Digits
void countDigits()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
        count = 1;

    while(n != 0)
    {
        count++;
        n /= 10;
    }

    printf("Total digits = %d\n", count);
}

// 4. Orchid Bouquet Problem
void orchidBouquet()
{
    int purple, pink, i, gcd = 1;

    printf("Enter number of purple orchids: ");
    scanf("%d", &purple);

    printf("Enter number of pink orchids: ");
    scanf("%d", &pink);

    for(i = 1; i <= purple && i <= pink; i++)
    {
        if(purple % i == 0 && pink % i == 0)
            gcd = i;
    }

    if(gcd == 1)
        printf("The bouquets cannot be formed with given constraints.\n");
    else
        printf("Each bouquet should contain %d orchids.\n", gcd);
}

// 5. Chocolate Sharing
void chocolateShare()
{
    int n, i;

    printf("Enter total chocolates: ");
    scanf("%d", &n);

    printf("Possible number of cousins:\n");

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }

    printf("\n");
}

// 6. Reverse Number
void reverseNumber()
{
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("Reverse = %d\n", rev);
}

// 7. Armstrong Number
void armstrongCheck()
{
    int n, temp, digits = 0, digit;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong Number.\n", n);
    else
        printf("%d is NOT an Armstrong Number.\n", n);
}

// 8. Sum of Even Digits
void sumEvenDigits()
{
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit % 2 == 0)
            sum += digit;

        n /= 10;
    }

    printf("Sum of even digits = %d\n", sum);
}

// 9. Count Odd and Even Digits
void oddEvenDigits()
{
    int n, digit, odd = 0, even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit % 2 == 0)
            even++;
        else
            odd++;

        n /= 10;
    }

    printf("Odd digits = %d\n", odd);
    printf("Even digits = %d\n", even);
}

// 10. Digits Divisible by 3
void digitsDivisibleBy3()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit % 3 == 0)
            count++;

        n /= 10;
    }

    printf("Digits divisible by 3 = %d\n", count);
}

// 11. First and Last Digit
void firstLastDigit()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
        n /= 10;

    first = n;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
}

// 12. Product of Digits
void productDigits()
{
    int n, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }

    printf("Product of digits = %d\n", product);
}

// 13. Digits Greater than 5
void digitsGreaterThan5()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit > 5)
            count++;

        n /= 10;
    }

    printf("Digits greater than 5 = %d\n", count);
}

// 14. Harshad Number
void harshadCheck()
{
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if(sum != 0 && n % sum == 0)
        printf("%d is a Harshad Number.\n", n);
    else
        printf("%d is NOT a Harshad Number.\n", n);
}