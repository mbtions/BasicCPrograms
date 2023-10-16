/*
  Program 3.3: User is going to enter value from 1 to 12.
  Month name should be displayed accordingly like 1 - January
  2 - February, 3 - March, etc

  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include <stdio.h>
#include <conio.h>
int main() {
    int month;
    printf("Enter a number between 1 and 12 to select the month :\n");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf("\nJanuary");
            break;
        case 2: 
            printf("\nFebruary");
            break;
        case 3:
            printf("\nMarch");
            break;
        case 4: 
            printf("\nApril");
            break;
        case 5:
            printf("\nMay");
            break;
        case 6:
            printf("\nJune");
            break;
        case 7:
            printf("\nJuly");
            break;
        case 8:
            printf("\nAugust");
            break;
        case 9: 
            printf("\nSeptember");
            break;
        case 10:
            printf("\nOctober");
            break;
        case 11:
            printf("\nNovember");
            break;
        case 12:
            printf("\nDecember");
            break;
        default:
            printf("Invalid choice!!");
    }
    getch();
    return 0;
}