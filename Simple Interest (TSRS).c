#include<stdio.h>
float si(float,float,float);
int main()
{
    float principal, time, interest, simpleinterest;
    printf("\n\nEnter the principal amount\n\n");
    scanf("%f",&principal);
    printf("\n\nEnter the time in years\n\n");
    scanf("%f",&time);
    printf("\n\nEnter the interest rate per year in percentage\n\n");
    scanf("%f",&interest);
    simpleinterest=si(principal, time, interest);
    printf("\n\nSI is: %0.2f",simpleinterest);
    return 0;
}
float si(float a,float b,float c)
{
float d;
d=a*b*c/100;
return d;
}
