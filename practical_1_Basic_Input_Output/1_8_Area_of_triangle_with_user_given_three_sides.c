/*
  Program 1.8: To Calculate and print the area of triangle, 
  where the three sides of triangle are given as input.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include <stdio.h> //Preprocessor Directive
#include<conio.h>
#include<math.h>
void main() //Main Function Begins
{
    // three sides of triangles
    int a, b, c;     
    printf("Enter length of side 'a': "); 
    scanf("%d", &a);
    printf("\n");
    printf("Enter length of side 'b': "); 
    scanf("%d", &b);
    printf("\n");
    printf("Enter length of side 'c': "); 
    scanf("%d", &c);
    
    // Condition to check whether it is a valid triangle or not
    if (a + b > c && a + c > b && b + c > a) {
        // Calculation of semi perimeter
        float s = (a + b + c)/2; 
        // Formula to calculate area using Heron's formula
        float area = sqrt(s*(s-a)*(s-b)*(s-c)); 
        // Printing Area of Triangle
        printf("Area Of Triangle is %f\n",area); 
    } 
    else {
        printf("Invalid Input.\n");
    }
    getch();
} // End of Main function
