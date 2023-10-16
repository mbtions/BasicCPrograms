/*
  Program 2.2: To find the greatest of three numbers.
  Created By: Meenakshi Bharadwaj, MCA-I, Semester I
*/
#include<stdio.h>
#include<conio.h>
int main() {
    // three numbers
    int a, b, c;
    printf("Enter the first number : "); 
    scanf("%d", &a);
    printf("\n");
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("\n");
    printf("Enter the third number : ");
    scanf("%d", &c);
    if (a > b) {
        if(a > c) {
            printf("The greatest number is %d", a);
        } 
        else {
            printf("The greatest number is %d", c);
        }
    } else {
        if(b > c) {
            printf("The greatest number is %d", b);
        } else {
            printf("The greatest number is %d", c);
        }
    }
    getch();
}