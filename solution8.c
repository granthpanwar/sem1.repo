//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    float a;
    float sum=0;
    printf("enter first n natural numbers whose sum is needed  \n");
    scanf("%f",&a);
    for(int i=1;i<=a;i++)
    {
        sum=sum+i;
    } 
    printf("the sum of entred natural numbers is %.2f",sum);
}