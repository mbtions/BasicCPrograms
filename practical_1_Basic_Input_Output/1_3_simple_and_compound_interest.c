/*
  Program 1.3: To calculate the simple interest and compound interest 
  (The Principal, Amount, Rate of Interest and Time are entered through keyboard).
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float p = 0; // principal amount
    float r = 0; // rate of interest
    int t = 0; // time in years
    float si = 0, ci = 0; // simple interest and compound interest
    printf("Enter principal amount:\n");
    scanf("%f",&p);
    printf("\nEnter rate of interest(in percentage):\n");
    scanf("%f",&r);
    printf("\nEnter time in years:\n");
    scanf("%d",&t);

    //calculating simple interest
    si = (p*r)/100 * t ;
    printf("\nSimple Interest = %.2f",si);
    
    //calculating compound interest
    ci = p*(pow((1+r/100),t));
    printf("\nCompound Interest = %.2f",ci);
    getch();
}
