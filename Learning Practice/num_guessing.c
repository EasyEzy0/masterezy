#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 2;
    int max = 50;
    int ans = (rand() % (max - min + 1)) + min;

    printf("*** Number Guessing Game ***\n");

    do{

        printf("guess a number between (%d - %d): ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess < ans){
            printf("TOO LOW\n");
        }
        else if(guess > ans){
            printf("TOO HIGH\n");
        }
        else{
            printf("CORRECT!!\n");
        }

    }while(guess != ans);

    printf("the ans is %d\n", ans);
    printf("it took you %d tries\n", tries);
}