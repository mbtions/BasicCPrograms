/*
  Program 1.5: To accept temperature in Centigrade and 
  converts into Fahrenheit using the formula:
  C/5 = (F-32)/9
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
*/
#include<stdio.h>
#include<conio.h>
int main() {
    float c; // variable to store centigrade value
    float f; // variable to store fahrenheit value
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &c); // reads user input for celsius
    f = ((c * 9) / 5) + 32; // calculates Fahrenheit
    printf("\nTemperature in Fahrenheit is %0.2f\n", f); // displays result on screen
    getch(); //for holding console window open unless get a character from keyboard
}