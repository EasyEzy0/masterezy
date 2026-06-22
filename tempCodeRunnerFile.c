#include <stdio.h>
int main()
{
    int x, y, n, q1=0, q2=0, q3=0, q4=0;
    printf("Enter the number of points : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    if (x > 0)
    {
        if (y > 0)
        {
            
            q1++;
        }
        else if (y < 0)
        {
            q4++;
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            
            q2++;
        }
        else if (y < 0)
        {
            
            q3++;
        }
    }

    
}
printf("1st Quadrant: %d\n", q1);
printf("2nd Quadrant: %d\n", q2);  
printf("3rd Quadrant: %d\n", q3);
printf("4th Quadrant: %d\n", q4);
    return 0;
}