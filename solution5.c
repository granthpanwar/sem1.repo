//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float cel,far;
    printf("enter the temparature in celcius \n");
    scanf("%f",&cel);
    far=(cel*59)+32;
    printf("the entered temparature in fahrenheit is : %.2f \n",far);
}