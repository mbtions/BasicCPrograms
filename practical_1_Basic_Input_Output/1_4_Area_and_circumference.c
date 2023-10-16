/*
  Program 1.4: To calculate the area and circumference of a circle.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
//Function to calculate Area and Circumference of Circle
void calc_circle(float r) {
    //Assuming value of Pi as 3.14
    float pi = 3.14; 
    printf("Area : %.5f\n",pi*r*r);
    printf("Circumference : %.5f\n",2*pi*r);
}
int main() {
    float radius;
    
    printf("Enter Radius : ");
    scanf("%f",&radius);
    
    //Calling Function for Calculation
    calc_circle(radius); 
    getch();
}
