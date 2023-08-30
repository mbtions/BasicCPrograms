/*
  Program to Generate tables from number N to M
*/
#include <stdio.h>

int main()
{
    int n, m, j, i, sum;
    printf("ENTER FIRST NO.: ");
    scanf("%d", &n);
    
    printf("ENTER FIRST NO.: ");
    scanf("%d", &m);
    
    if (n<=m){
        for (j=n; j<=m; j++) 
        {   printf("\n\nTable for %d\n", j);
            for (i=1; i<=10; i++) 
            {
                printf("%d ", j*i);
            }
        }
    }
    else 
        printf("\nInvalid Range! first number should be smaller than last!!");
    
    return 0;
}
