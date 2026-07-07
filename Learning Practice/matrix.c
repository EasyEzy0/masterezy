#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j, largest;

    printf("Enter elements of Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix A is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements of Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMatrix B is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Transpose of A is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", a[j][i]);
        }
        printf("\n");
    }

    printf("\nSum of Matrix A and Matrix B is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%3d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nEven: ");
    for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
        if(a[i][j] % 2 == 0) 
            {
            printf("%d ", a[i][j]);
        }
    }
}

    printf("\nOdd: ");
    for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
        if(a[i][j] % 2 != 0) 
            {
            printf("%d ", a[i][j]);
        }
    }
}
 
    printf("\n");
    
    largest = sum[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
          if(sum[i][j] > largest){
            largest = sum[i][j];
          }
        }
      }
    printf("\nLargest element = %d\n", largest);

    return 0;
}