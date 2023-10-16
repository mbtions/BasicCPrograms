/*
  Program 4.3: To find the factorial of a number.
  Created By: Meenakshi Bharadwaj
  Date: 17-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main() {
    // variables => number (n), f to store factotial value, and i for iteration
    long int n, i, f = 1;
    printf("Enter a positive integer to calculate its factorial : ");
    scanf("%ld",&n);
    if(n == 0 || n == 1)
        printf("\nFactorial of %ld is 1\n",n);
    else {
        for(i=1; i<=n; ++i){
           f *= i; 
        }
        printf("\nFactorial of %ld is %ld", n, f);
    }
    getch();
    return 0;
}