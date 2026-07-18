#include <stdio.h>

int main(){

    int n, drink = 0;

    scanf("%d", &n);

    while(n >= 3){

        int full = n/3;
        drink += full;
        n = (n % 3) + full;

    }

    if(n == 2){

        drink++;

        printf("%d\n", drink);
    }

}