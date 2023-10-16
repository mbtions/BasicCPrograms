/*
  Program 3.1: To read two numbers and an operator (+, -, *, /) which
  performs the specified operation and display the result
  Created By: Meenakshi Bharadwaj
  Date: 16-10-2023
*/
#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2;
    char operator;
    float result;
    //Taking input from user for first number
    printf("Enter First Number : ");
    scanf("%d", &num1);
    //Taking input from user for second number
    printf("\n Enter Second Number :");
    scanf("%d",&num2);
    //Taking input from user for operator
    printf("\n Enter Operator (+,-,*,/): ");
    scanf(" %c", &operator);
    // Performing arithmetic operations based on given inputs using switch case statement
    switch (operator){
        case '+':
            result = num1 + num2 ;
            printf("%d %c %d = %f",num1, operator, num2, result);
            break;
        case '-' :
            result= num1 - num2;
            printf("%d %c %d = %f",num1, operator, num2, result);
            break;
        case '*' :
            result = num1 * num2;
            printf("%d %c %d = %f",num1, operator, num2, result);
            break;
        case '/' :
            if(num2 != 0) {
                result = (float)num1 / num2;  
                printf("%d %c %d = %f",num1, operator, num2, result);
            }                
            else {
                printf("\n Division by Zero is not possible \n");
            }
            break;
        default: 
            printf ("\n Invalid Input! Please enter a valid operator.\n");
    }

    getch();
    return 0;
}