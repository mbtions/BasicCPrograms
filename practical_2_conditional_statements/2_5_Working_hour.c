/*
  Program 2.5: The working hours based on age of the laborer is given 
        Age             Working Hour
        0-10 years          0 
        11-15 years         0 
        16-20 years         3
        21-25 years         6
        >25                 8
    Write a program to calculate the working hour 
    of a person for a given age.

    Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
    Date: 16-10-2023
*/
#include<stdio.h>
int main() {
    // age variable
    int age;
    printf("Enter your age : ");
    scanf("%f", &age);
    if(age >= 0 && age <= 10) {
        printf("Working Hours = %d\n", 0);
    } else if (age > 10 && age <= 15) {
        printf("Working Hours = %d\n", 0);
    } else if (age > 15 && age <= 20){
        printf("Working Hours = %d\n", 3);
    } else if (age > 20 || age <= 25 ){
        printf("Working Hours = %d\n", 6);
    } else{
        printf("Working Hours = %d\n", 8);
    }
    getch();
}