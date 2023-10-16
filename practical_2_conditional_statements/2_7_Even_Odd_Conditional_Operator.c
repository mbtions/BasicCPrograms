/*
  Program 2.7: To find the number is Even or Odd using conditional operator
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 17-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main() {
    // number to check
    int number;
    printf("Enter the number to find whether it's even or not: ");
    scanf("%d", &number);
    // ternary operator (or conditional operator)
    (number % 2 == 0) ? 
        printf("\n%d is an EVEN number.", number) : 
        printf("\n%d is an ODD number.", number);

    getch();
}