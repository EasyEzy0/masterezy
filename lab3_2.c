#include <stdio.h>

// Function Prototypes
void primeCheck();
void perfectCheck();
void displayFactors();
void oddFactorsCount();
void consecutiveFactors();
void totalFactors();
void gcdDisplay();
void lcmDisplay();
void largestFactorOdd();
void commonFactors();
void uniqueFactors();
void multiplyWithoutOperator();

int main()
{
    int choice;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Check Prime Number\n");
        printf("2. Check Perfect Number\n");
        printf("3. Display All Factors\n");
        printf("4. Count Odd Factors\n");
        printf("5. Display Consecutive Factors\n");
        printf("6. Total Number of Factors\n");
        printf("7. Find GCD\n");
        printf("8. Find LCM\n");
        printf("9. Largest Factor (Except Itself) is Odd or Not\n");
        printf("10. Display Common Factors\n");
        printf("11. Display Factors Dividing Exactly One Number\n");
        printf("12. Multiplication Without '*' Operator\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: primeCheck(); break;
            case 2: perfectCheck(); break;
            case 3: displayFactors(); break;
            case 4: oddFactorsCount(); break;
            case 5: consecutiveFactors(); break;
            case 6: totalFactors(); break;
            case 7: gcdDisplay(); break;
            case 8: lcmDisplay(); break;
            case 9: largestFactorOdd(); break;
            case 10: commonFactors(); break;
            case 11: uniqueFactors(); break;
            case 12: multiplyWithoutOperator(); break;
            case 0: printf("Program Ended.\n"); break;
            default: printf("Invalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}

// 1. Prime Number
void primeCheck()
{
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        prime = 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);
}

// 2. Perfect Number
void perfectCheck()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is NOT a Perfect Number.\n", n);
}

// 3. Display Factors
void displayFactors()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors:\n");

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d\n", i);
    }
}

// 4. Count Odd Factors
void oddFactorsCount()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0 && i % 2 != 0)
            count++;
    }

    printf("Number of Odd Factors = %d\n", count);
}

// 5. Consecutive Factors
void consecutiveFactors()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Consecutive Factors:\n");

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }

    printf("\n");
}

// 6. Total Factors
void totalFactors()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    printf("Total Factors = %d\n", count);
}

// 7. GCD
void gcdDisplay()
{
    int a, b, i, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d\n", gcd);
}

// 8. LCM
void lcmDisplay()
{
    int a, b, i, gcd = 1, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);
}

// 9. Largest Factor Except Itself is Odd?
void largestFactorOdd()
{
    int n, i, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n / 2; i >= 1; i--)
    {
        if(n % i == 0)
        {
            largest = i;
            break;
        }
    }

    printf("Largest Factor (Except Itself) = %d\n", largest);

    if(largest % 2 != 0)
        printf("It is Odd.\n");
    else
        printf("It is Even.\n");
}

// 10. Common Factors
void commonFactors()
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Common Factors:\n");

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            printf("%d ", i);
    }

    printf("\n");
}

// 11. Factors Dividing Exactly One Number
void uniqueFactors()
{
    int a, b, i, max;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;

    printf("Factors dividing exactly one number:\n");

    for(i = 1; i <= max; i++)
    {
        if((a % i == 0 && b % i != 0) || (a % i != 0 && b % i == 0))
            printf("%d ", i);
    }

    printf("\n");
}

// 12. Multiplication Without '*' Operator
void multiplyWithoutOperator()
{
    int a, b, result = 0, i, sign = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a < 0)
    {
        a = -a;
        sign = -sign;
    }

    if(b < 0)
    {
        b = -b;
        sign = -sign;
    }

    for(i = 1; i <= b; i++)
    {
        result += a;
    }

    if(sign < 0)
        result = -result;

    printf("Multiplication = %d\n", result);
}