#include<stdio.h>
int factorial(int);
int nCr(int,int,int);
int main()
{
    int n,r,a,b,c,d,e;
    printf("\n\nEnter a first number of items\n\n" );
    scanf("%d",&n);
    printf("\n\nEnter a second number of items being chosen at a time\n\n" );
    scanf("%d",&r);
    a=n-r;
    b=factorial(a);
    c=factorial(n);
    d=factorial(r);
    e=nCr(b,c,d);

    printf("\n\nThe nPr of your given numbers %d & %d is: %d\n\n",n,r,e);
    return 0;
}
int factorial(int n)
{
    int i,m=1;
    for (i=n;i>0;i--)m=m*i;
    return m;
}
int nCr(int x, int y, int z)
{
    int f;
    f=y/x;
    return f;
}
