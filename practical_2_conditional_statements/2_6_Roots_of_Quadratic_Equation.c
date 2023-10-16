/*
  Program 2.7: To find the roots of a Quadratic Equation.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float a, b, c, root1, root2;
    printf("Enter coefficients a, b and c for quadratic equation ax^2 + bx + c = 0\n");
    scanf("%f%f%f", &a,&b,&c);
    printf("\nThe Equation you entered is: %fx^2 + %fx + %f = 0\n\n", a, b, c);
    
    //Calculate discriminant using formula sqrt(b^2 - 4ac)
    float d = (b * b) - (4 * a * c);
    
    // If Discriminant < 0 then no real solution exists 
    // else if > 0 there are two solutions otherwise one solution exist
    if((d < 0)){
        printf("\nRoots are imaginary.\n");
    }
    else
    {
        if(d == 0) {
            root1 = (-b)/(2*a);
            printf("\nRoot1=%.2f\t Root2=%.2f\n",root1,-root1 );
        } 
        else {
            root1 = ((-b)+sqrt(d))/2*a;
            root2 = ((-b)-sqrt(d))/2*a;
            printf("\nRoot1=%.2f\t Root2=%.2f\n",root1,root2);
        }
    }
    getch();
    return 0;
}