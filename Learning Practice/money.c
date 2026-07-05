#include <stdio.h>
int main() {
    int amount;
    int n[] = {500, 100, 50, 20, 10, 5, 1};
    printf("Enter amount (taka): ");
    scanf("%d", &amount);
    for(int i = 0; i < 7; i++){
        printf("%d taka notes = %d\n", n[i], amount/n[i]);
        amount %= n[i]; 
    }
}