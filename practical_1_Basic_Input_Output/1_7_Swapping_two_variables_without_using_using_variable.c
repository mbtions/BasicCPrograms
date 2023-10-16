/*
  Program 1.7: To Swap two variables without using a third variable.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023 
*/
#include<stdio.h>
void swap(int *x, int *y) {
    // swapping the values of x and y without using a third variable
    (*x) = (*x) + (*y);
    (*y) = (*x) - (*y);
    (*x) = (*x) - (*y);
}
int main() {
    int x = 5;
    int y = 8;
    printf("Before swapping:\nx=%d\ny=%d\n", x, y);
    // swap(&x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nAfter Swapping:\nx=%d\ny=%d\n", x, y);
    getch();
    return 0;
}