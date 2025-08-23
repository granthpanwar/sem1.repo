//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter two numbers \n");
    scanf("%f %f",&a,&b);
    printf("before swap: %.2f %.2f \n",a,b);
    c=a;
    a=b;
     printf("after swap: %.2f %.2f \n",a,c);   
}