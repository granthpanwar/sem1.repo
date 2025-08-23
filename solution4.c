//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float r,area,circum;
    printf("enter the radius of the circle \n");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
     printf("the area  of the circle is : %.2f \n",area);
    printf("circumference of  the circle is: %.2f\n",circum);
}