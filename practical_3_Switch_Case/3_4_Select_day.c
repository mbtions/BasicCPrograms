/*
  Program 3.4: User is going to enter value from 1 to 7.
  Month name should be displayed accordingly like 1 - Monday
  2 - Tuesday, 3 - Wednesday, etc
*/
#include <stdio.h>
#include <conio.h>
void main() {
    int day;
    printf("Enter a number between [1-7] : ");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6: 
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid Choice!");
    }

    getch();
}
