#include<stdio.h>
float area(float);
int main()
{
float rad, ar;
    printf("\n\nEnter the radius of your circle\n\n");
    scanf("%f",&rad);
    ar=area(rad);
    printf("\n\nArea of your circle is: %0.2f\n\n",ar);
    return 0;
}
float area(float r)
{
    float a;
    a=3.142*r*r;
    return a;
}
