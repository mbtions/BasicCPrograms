/******************************************************************************
Program to find greatest and smallest input value by user (DO WHILE and GOTO statement).
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
    char ans='y';
    int n, max, min;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    goto CONT;
    
    max = min = n;
    
    do {
        printf("\nEnter number: ");
        scanf("%d", &n);
        
        CONT:
        if (n > max) {
            max = n;
        } 
        else 
        {
            if (n < min)
                min = n;
        }
        
        printf("\nWant to continue? (Y/N)...");
        scanf(" %c", &ans);
        
    } while (ans == 'Y' || ans == 'y');
    
    printf("\nMaximum input value: %d", max);
    printf("\nMinimum input value: %d", min);
    
    return 0;
}
