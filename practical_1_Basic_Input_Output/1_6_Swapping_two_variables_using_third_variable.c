/*
  Program 1.6: To Swap two variables using a third variable.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x = 5;
    int y = 7;
    int temp;
    printf("Before swapping\nx=%d", x);
    printf("\ny=%d", y);
    //Swapping the values of x and y using a temporary variable 'temp'
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping");
    printf("\nx=%d", x);
    printf("\ny=%d", y);
    getch();
}
