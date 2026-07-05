#include <stdio.h>

void lab1()
{//1. Input some numbers and display all prime numbers.
    int n, a[100];
    int i, j, count;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
    {
        count = 0;
        
        if(a[i] >= 2)
        {
            for(j = 1; j <= a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                printf("%d ", a[i]);
            }
        }
    }
}


void lab2() 
{//2. Input some numbers and display all perfect numbers.
    int a[100], n;
    int i, j, sum;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Perfect numbers are:\n");

    for(i = 0; i < n; i++)
    {
        sum = 0;

        for(j = 1; j < a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                sum += j;
            }
        }

        if(sum == a[i])
        {
            printf("%d ", a[i]);
        }
    }
}


void lab3()
{//3. Input some numbers and display all numbers which can be divisible by at least 5 factors.
    int n, m, i, j, count;

    printf("Enter start and end: ");
    scanf("%d %d", &n, &m);

    for(i = n; i <= m; i++) {
        count = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count >= 5)
            printf("%d ", i);
    }
}


void lab4()
{//4. Input some numbers and display which can be divisible by two consecutive factors.
    int n, m, i, j, found;

    printf("Enter start and end: ");
    scanf("%d%d", &n, &m);

    for(i = n; i <= m; i++) {

        found = 0;

        for(j = 2; j < i; j++) {
            if(i % j == 0 && i % (j + 1) == 0)
                found = 1;
        }

        if(found == 1)
            printf("%d ", i);
    }
}


void lab5()
{//5. Input some numbers and display GCD of each pair of the numbers.
    int n, a, b, i, j, gcd;

    printf("How many pairs: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);

        gcd = 1;

        for(j = 1; j <= a && j <= b; j++) {
            if(a % j == 0 && b % j == 0)
                gcd = j;
        }

        printf("GCD = %d\n", gcd);
    }
}


void lab6()
{//6. Input some numbers and display LCM of each pair of the numbers.
    int n, a, b, i, lcm;

    printf("How many pairs: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);

        lcm = 1;

        while(lcm % a != 0 || lcm % b != 0)
            lcm++;

        printf("LCM = %d\n", lcm);
    }
}


void lab7()
{//Input some numbers and display all pairs of twin prime numbers within the given range.

    int n, m, i, j, c1, c2;

    printf("Enter start and end: ");
    scanf("%d%d", &n, &m);

    for(i = n; i <= m - 2; i++) {

        c1 = 0;
        c2 = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                c1++;
        }

        for(j = 1; j <= i + 2; j++) {
            if((i + 2) % j == 0)
                c2++;
        }

        if(c1 == 2 && c2 == 2)
            printf("(%d,%d)\n", i, i + 2);
    }

}

int main() {
    int choice;

    do {
        printf("\n===== PRACTICE MENU =====\n");
        printf("1. Prime Number\n");
        printf("2. Perfect Number\n");
        printf("3. Divisible by 5\n");
        printf("4. Divisible by 2 consecutive\n");
        printf("5. GCD of pair\n");
        printf("6. LCD of pair\n");
        printf("7. Twin Prime in range\n");
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
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 0);
}