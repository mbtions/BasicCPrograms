/*
  Program 3.2: To Display the color name according to the code entered.
  The coding scheme is as follows: 
  1: "RED
  2: "GREEN"
  3: "WHITE"
  4: "YELLOW"
  5: "ORANGE"
  
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    // code variable for the colors
    int code;
    printf("Enter a number between 1 and 5:\n");
    scanf("%d", &code);
    switch (code) {
        case 1:
            printf("\nThe color you have selected is RED.\n");
            break;
        case 2:
            printf("\nThe color you have selected is GREEN.\n");
            break;
        case 3:
            printf("\nThe color you have selected is WHITE.\n");
            break;
        case 4:
            printf("\nThe color you have selected is YELLOW.\n");
            break;
        case 5:
            printf("\nThe color you have selected is ORANGE.\n");
            break;
        default :
            printf ("\nInvalid Input!\n");
    }
    getch();
}