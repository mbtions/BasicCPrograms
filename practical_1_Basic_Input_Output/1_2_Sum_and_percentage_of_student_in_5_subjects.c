/*
  Program 1.2: To accept the marks of student in 5 subjects and 
  find the sum and percentage marks obtained by the student.
  Created By: Meenakshi Bharadwaj, MCA-Ist, Semester I
  Date: 16-10-2023
*/
#include<stdio.h>
#include<conio.h>
void main() {
    // marks in five different subjects
    int m1, m2, m3, m4, m5, sum=0;
    double percentage;
    printf("Enter Marks in Subject 1 : ");
    scanf("%d", &m1);
    printf("\n");
    printf("Enter Marks in Subject 2 : ");
    scanf("%d", &m2);
    printf("\n");
    printf("Enter Marks in Subject 3 : ");
    scanf("%d", &m3);
    printf("Enter Marks in Subject 4 : ");
    scanf("%d", &m4);
    printf("\n");   
    printf("Enter Marks in Subject 5 : ");
    scanf("%d", &m5);
    
    // calculating total marks
    sum = m1 + m2 + m3 + m4 + m5;
    
    // finding average or percentage marks
    if(sum != 0) {
        percentage = (double)(m1+m2+m3+m4+m5)/sum*100;
    } else{
        percentage = 0;
    }    
    printf("Total Marks is %d\n", sum);
    printf("Percentage Marks is %.2lf%% \n", percentage);
    getch();
}