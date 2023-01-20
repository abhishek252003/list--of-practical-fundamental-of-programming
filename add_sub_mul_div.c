/*Write a Program to perform addition, subtraction, division and
multiplication of two numbers given as input by the user*/

#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("enter your first number\n");
    scanf("%f",&a);
    printf("enter second number\n");
    scanf("%f", &b);
    printf("\nthe sum is %f", a+b);
    printf("\nthe subtraction is %f", a-b);
    printf("\nthe multiplication is %f", a*b);
    printf("\nthe division is %f", a/b);


    return 0;

    }