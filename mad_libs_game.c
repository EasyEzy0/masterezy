#include <stdio.h>
#include <string.h>

int main() {

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, 50, stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, 50, stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter another adjective (description): ");
    fgets(adjective2, 50, stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, 50, stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter another adjective (description): ");
    fgets(adjective3, 50, stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("The %s %s was so %s while %s and also very %s!!!\n",
           adjective1, noun, adjective2, verb, adjective3);

    return 0;
}