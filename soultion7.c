//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter two numbers \n");
    scanf("%f %f",&a,&b);
    printf("before swap: %.2f %.2f \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("after swap: %.2f %.2f \n",a,b);   
}