//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int hrs, mins, sec, seconds;
    printf("enter time in seconds: \n");
    scanf("%d",&seconds);
    hrs=seconds/3600;
    seconds=seconds%3600;
    mins=seconds/60;
    seconds=seconds%60;
    printf("the time is: %.2d: %.2d: %.2d ",hrs,mins,seconds);
}