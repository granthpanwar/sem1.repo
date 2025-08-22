//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float l,b;
    float per;
    printf("enter length and breadth of rectangle\n");
    scanf("%f %f ",&l,&b);
    per=l*b;
    printf("the perimeter is: %.2f\n",per);
}