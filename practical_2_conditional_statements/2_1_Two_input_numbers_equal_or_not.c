/*
  Program 2.1: To check whether the two numbers entered 
  by the user are equal or not.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main() 
{
    // two integer numbers
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a, &b);
    if (a == b) {
        printf("Both are equal.");
    } else {
        printf("Numbers are not equal.");
    }
    getch();
    return 0;
}