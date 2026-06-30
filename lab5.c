#include <stdio.h>

void lab1()
{
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
{
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
{
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

int main() {
    int choice;

    do {
        printf("\n===== PRACTICE MENU =====\n");
        printf("1. Prime Number\n");
        printf("2. Perfect Number\n");
        printf("3. Divisible by 5\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: lab1(); break;
            case 2: lab2(); break;
            case 3: lab3(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 0);
}