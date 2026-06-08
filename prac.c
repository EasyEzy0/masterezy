#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void practice1() {
      int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are an adult.\n");
    }
    else if (age < 18 && age > 13) {
        printf("You are a minor.\n");
    }
    else if (age == 0) {
        printf("You are a newborn.\n");
    } 
    else if(age >0 && age <= 13) {
        printf("You are a child.\n");
    }
    else {
        printf("You haven't been born yet.\n");
    }
}
void practice2() {
    bool isRaining;
    printf("Is it raining? (1 for yes, 0 for no): ");
    scanf("%d", &isRaining);
    if(isRaining) {
        printf("It's raining. Don't forget to take an umbrella!\n");
    } else {
        printf("It's not raining. Enjoy your day!\n");
    }
}
void practice3() {
   getchar();  // remove leftover '\n'
   char name[100] = "";
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';

   if(strlen(name) == 0) {
        printf("You didn't enter a name.\n"); 
   }
   else {
        printf("Hello, %s!\n", name);
   }
}
int main() {
    practice1();
    practice2();  
    practice3();  
  
    return 0;

}