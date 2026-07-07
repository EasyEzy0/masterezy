#include <stdio.h>

void hTriangle(){
    int rows;
    char sym;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter symbol: ");
    scanf(" %c", &sym);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            if(i == rows || j == 1 || j == i){
                printf("%c ", sym);
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


void hSquare(){
  int n, m;
  char sym;

  printf("Enter your row and columns: ");
  scanf("%d %d", &n, &m);
 
  printf("Enter your symbol: ");
  scanf(" %c", &sym);

  for(int i = 1; i <= n; i ++){
    for(int j = 1; j <= m; j++){
      if(i == 1 || i == n || j == 1 || j == m){
        printf("%c ", sym);
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
}


void diamond(){
  int n;
  char sym;

  printf("Enter a number: ");
  scanf("%d", &n);
 
  printf("Enter your symbol: ");
  scanf(" %c", &sym);

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++){
      printf("  ");
    }
    for(int a = 1; a <= 2 * i - 1; a++){
      printf("%c ", sym);
    }
      printf("\n");
  }

  for(int i = n - 1; i >= 1; i--){
    for(int j = 1; j <= n - i; j++){
      printf("  ");
    }
    for(int a = 1; a <= 2 * i - 1; a++){
      printf("%c ", sym);
    }
      printf("\n");
  }
}

int main(){
    int choice;

     do{
        printf("1.Hollow Triangle\n");
        printf("2.Hollow Square\n");
        printf("3.Diamond shape\n");
        printf("0.Exit choice\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: hTriangle(); break;
            case 2: hSquare(); break;
            case 3: diamond(); break;            
            case 0: printf("Exiting ......\n"); break;
            default: printf("invalid choice\n");
        }
    }
    while (choice != 0);
}

