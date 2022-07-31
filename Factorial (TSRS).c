#include<stdio.h>
int factorial(int);
int main()
{
    int a,b;
    printf("\n\nEnter a number of your choice\n\n" );
    scanf("%d",&a);
    b=factorial (a);
    printf("\n\nThe factorial of %d is: %d\n\n",a,b);
    return 0;
}
int factorial(int n)
{
    int i,m=1;
    for (i=n;i>0;i--)m=m*i;
    return m;
}
