/*
  Program 2.3: To find the number is even or odd.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
// Checking whether the number is even or odd 
// using bitwise AND operator with 1
void bitwiseEvenOdd(int n) {
    if (n & 1 == 0) {
        printf("The Number %d is Even", n);
    } else{
        printf("The Number %d is Odd", n);
    }
}
int main()
{
    int num;
    printf("Enter a number to check if it's even or odd:\n");
    scanf("%d",&num);
    
    // bitwiseEvenOdd(num);

    if (num % 2 == 0) {
        printf("\n%d is an even number.", num);
    } else {
        printf("\n%d is an odd number.", num);
    }
    getch();
    return 0;
}