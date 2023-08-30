/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
    char ans;
    int n, max, min;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    max = min = n;
    
    printf("\nWant to continue? (Y/N)...");
    // get the character from standard i-o console
    // ans = getch(); // another way to get the same input is vscanf("%c", &ans);
    scanf(" %c", &ans);
    
    while (ans == 'Y' || ans == 'y') {
        printf("\nEnter another number: ");
        scanf("%d", &n);
        
        if (n > max) {
            max = n;
        } 
        else 
        {
            if (n < min)
                min = n;
        }
        
        printf("\nWant to continue? (Y/N)...");
        // get the character from standard i-o console
        // ans = getch(); // another way to get the same input is vscanf("%c", &ans);
        scanf(" %c", &ans);
    }
    
    printf("\nMaximum input value: %d", max);
    printf("\nMinimum input value: %d", min);
    
    return 0;
}
