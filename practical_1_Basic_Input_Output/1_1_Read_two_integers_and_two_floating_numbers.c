/* 
  Program 1.1: To read two integers and two float variables.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main() {
    // integer variables
    int a, b;
    //float variables
    float c, d;
    // Take input for the variables
    printf("Enter the first integer:\n");
    scanf("%d", &a);
    printf("\nEnter the second integer:\n");
    scanf("%d", &b);
    printf("\nEnter the first float variable:\n");
    scanf("%f",&c);
    printf("\nEnter the second float variable:\n");
    scanf("%f",&d);
    getch();
    return 0;
}
