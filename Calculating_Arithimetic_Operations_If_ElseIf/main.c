#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char operator;

    printf("Enter an operator");
    scanf("%c", &operator);

    printf("Enter two numbers separated by a comma:");
    scanf("%d,%d", &a , &b);

    if (operator == '+')
        printf("Addition = %d", a+b);
    else if (operator == '-')
        printf("Subtraction= %d", a-b);
    else if (operator == '*')
        printf("Multiplication = %d", a*b);
    else if(operator == '/')
        printf("Division = %d", a/b);
    else if (operator == '%')
        printf("Modulus = %d", a%b);
    else
        printf("Error!");
    return 0;

}
