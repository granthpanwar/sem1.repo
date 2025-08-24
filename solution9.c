//Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>
int main()
{
    float prin,rate,time;
    float sim_int=0;
    float tot_amt=0;
    float com_int=0;
    printf("enter principal amount, rate and time\n");
    scanf("%f %f %f",&prin , &rate , &time);
    sim_int=((prin*rate*time)/100);
    printf("the simple interest is: %.2f \n",sim_int);
    tot_amt = prin * pow((1 + rate / 100), time);
    com_int=tot_amt-prin;
     printf("the compound nterest is: %.2f \n",com_int);
}