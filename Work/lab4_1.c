#include <stdio.h>

void lab1() {
    int n[7];
    float sum = 0, avg;

    printf("Enter temperatures of the last 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 7; i++) {
        sum += n[i];
    }
    avg = sum / 7;
    printf("Average temperature = %.2f\n", avg);
}


void lab2() {
       int age[100];
    int n;
    float avg, sum = 0;

    printf("How many ages to enter? Input: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        printf("age %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    for(int i = 0; i < n; i ++){
        sum += age[i];
    }
    avg = sum/n;
    int c = 0;
    for(int i = 0; i < n; i ++){
        if(age[i] > avg){
        c ++;
    }
}
    printf("Average age: %.2f\n", avg);
    printf("The number of people over average age: %d\n", c);
}


void lab3() {
    int age[100];
    int n;

    printf("How many ages to enter? Input: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        printf("age %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    int c = 0;
    for(int i = 0; i < n; i ++){
        if(age[i] >= 13 && age[i] <= 19){
        c ++;
    }
  }
    printf("The number of teenager students: %d\n", c);
}


void lab4() {
    int n[7];

    printf("Enter temperatures of the last 7 days: \n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    int c = 0;
    for (int i = 1; i < 7; i++) {
        if(n[i] > n[i - 1]){
            c ++;
        }
    }
    printf("Increment of temperature in %d days\n", c);
}


void lab5() {
    int student[100];
    int n;

    printf("How many marks to enter? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        printf("Student %d: ", i + 1);
        scanf("%d", &student[i]);
    }
    int c = 0;
    for(int i = 0; i < n; i ++){
        if(student[i] == 30){
        c ++;
    }
  }
    printf("The number of students got full marks: %d\n", c);
}


void lab6() {
    int student[100];
    int n;
    
    printf("How many marks to enter? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        printf("Student %d: ", i + 1);
        scanf("%d", &student[i]);
    }
     int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < n; i ++){
        if(student[i] >= 51 && student[i] <= 60)
            d++;
        else if(student[i] >= 61 && student[i] <= 70)
            c++;
        else if(student[i] >= 71 && student[i] <= 80)
            b++;
        else if(student[i] >= 81 && student[i] <= 90)
            a++;
        
       }

    char grade = 'A';
    int max = a;

    if(b > max) {
        max = b;
        grade = 'B';
    }
    if(c > max) {
        max = c;
        grade = 'C';
    }
    if(d > max) {
        max = d;
        grade = 'D';
    }
    printf("The grade achieved among most students: %c\n", grade);
}


void lab7() {
    int x[100];
    int y[100];
    int n;

    printf("Enter how many coordinates you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++){
        printf("Points are (x & y) %d: ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    for(int i = 0; i < n; i ++){
         if(x[i] > 0 && y[i] > 0)
            q1++;
        else if(x[i] < 0 && y[i] > 0)
            q2++;
        else if(x[i] < 0 && y[i] < 0)
            q3++;
        else if(x[i] > 0 && y[i] < 0)
            q4++; 
    }
    printf("Quardent 1: %d\n", q1);
    printf("Quardent 2: %d\n", q2);
    printf("Quardent 3: %d\n", q3);
    printf("Quardent 4: %d\n", q4);
}


void lab8() {
    int temp[7];

    printf("Enter temperatures for 7 days: \n");

    for(int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    int highest = temp[0];

    for(int i = 1; i < 7; i++) {
        if(temp[i] > highest) {
            highest = temp[i];
        }
    }

    int count = 0;

    for(int i = 0; i < 7; i++) {
        if(temp[i] == highest) {
            count++;
        }
    }
    
    printf("Highest temperature: %d\n", highest);
    printf("Found on %d day(s)\n", count);
}


  int main(){
    int choice;
    
    do{
        printf("1.Temp Count\n");
        printf("2.Age Count\n");
        printf("3.Teenage Student Count\n");
        printf("4.Temp Increment Count\n");
        printf("5.Full Mark Count\n");
        printf("6.Grade Achieved\n");
        printf("7.Coordinate Displayer\n");
        printf("0.Exit choice\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: lab1(); break;
            case 2: lab2(); break;
            case 3: lab3(); break;
            case 4: lab4(); break;
            case 5: lab5(); break;
            case 6: lab6(); break;
            case 7: lab7(); break;
            case 0: printf("Exiting ......\n"); break;
            default: printf("invalid choice\n");
        }
    }
    while (choice != 0);
}