#include <stdio.h>
#include <string.h>
int main() {

 // Shopping cart program

 char item[50] = "";
 float price = 0.0f;
 int quantity = 0;
 char currency = '$';
 float total = 0.0f;
    printf("What item do you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price for each item: ");
    item[strlen(item) - 1] = '\0';
    scanf("%f", &price);
    printf("How many items do you want to buy?: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("You have added %d %s/s to your cart.\n", quantity, item);
    printf("Total cost: %c%.2f\n", currency, total);
    return 0;
}