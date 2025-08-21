//1. Write a program to input two numbers and display their sum

#include <stdio.h>
int main()
{
    float a,b;
    float sum=0;
    printf("enter the two numbers\n");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("the sum of entered numbers is: %.2f \n", sum);
}