/*
    Program to find factorial of a given number
*/
#include <stdio.h>

int main()
{
    int i, f=1, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    // One way 
    for (i=n; i>0; i--) {
        f = f*i;
    }
    
    printf("\n\nFactorial of %d: %d", n, f);
    
    // another way
    i=1; 
    f=1;
    while(i++<=n) {
      f = f*n;
    }
    printf("\n\nFactorial of %d: %d", n, f);
  
    return 0;
}

