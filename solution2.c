// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    float a,b;
    float sum=0;
    float dif=0;
    float prdct=0;
    float div=0;
    printf("enter two numbers\n");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("the sum is%.2f\n",sum);
    if(a>b)
    {
    dif=a-b;
    }
    else
    {
    dif=b-a;
    }
    printf("the difference is%.2f\n",dif);

    prdct=a*b;
    printf("the product is %.2f\n",prdct);

    if(a>0 && b>0)
    {
        div=a/b;
    }
    printf("the difference is%.2f\n",div);
}