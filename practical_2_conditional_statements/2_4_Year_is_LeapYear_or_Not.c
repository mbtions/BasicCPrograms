/*
  Program 2.4: To tell whether a given year is leap or not.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int year;
    printf("Enter the year to check if it's leap or not:\n");
    scanf("%d", &year);
    // Checking conditions for Leap Year
    if (year % 4 == 0 && ((year%100!= 0) ||(year%400==0)))
        printf("\nThe year %d is a leap year.", year);
    else
        printf("\nThe year %d isn't a leap year.\n", year);
    getch();
}