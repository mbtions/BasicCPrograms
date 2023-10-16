/******************************************************************************
Program to print the following series 
1 
1 2
1 2 3 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter number for series: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
    return 0;
}
