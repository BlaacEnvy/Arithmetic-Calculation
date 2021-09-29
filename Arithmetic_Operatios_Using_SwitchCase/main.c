#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char op;

    printf(" Arithmetic Operators: \n Addition: +, \n Subtraction: - , \n Multiplication: * , \n Modulus: %, \n Division: / , \n Choose an operator:");
    scanf("%c",&op );
    printf("Enter any two numbers:");
    scanf("%d,%d",&num1, &num2);

    switch(op){

    case '+':
        printf("Addition = %d",num1 + num2);
        break;
    case '-':
         printf("Subtraction = %d", num1 - num2);
         break;

    case '*':
        printf("Multiplication = %d", num1 * num2);
        break;
    case '/':
        printf("Division = %d", num1 / num2);
        break;
    case '%':
        printf("Modulus = %d", num1 / num2);
        break;
    default:
        printf("Invalid Operator");








    }







}
