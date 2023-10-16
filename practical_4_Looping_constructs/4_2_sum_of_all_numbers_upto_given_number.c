/*
  Program 4.2: To print the Sum of all numbers up to a given number.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 17-10-2023
*/
#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i=1 ;i<=n;++i)
        sum += i;
    printf("Sum of all numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}