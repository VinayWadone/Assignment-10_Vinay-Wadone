#include<stdio.h>
int DigitFind(int, int);
int main()
{
    int a, b, c,d;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nEnter a digit you want to search in the above number\n\n");
    scanf("%d",&b);
    d=DigitFind(a,b);
    if (d==0)printf("\n\nYes its part of the number you gave\n\n");
    else printf("\n\nNo! its not a part of the number you gave\n\n");
    return 0;
}
int DigitFind (int x,int y)
{
    int m, n,i,count;
    m=1; count = 1;
    for(i=1; m>0; i++)
    {
        if(x==y)
        {count = 100;
        break;
        }
        n=x%10;
        if(n==y)
        {count = 100;
        break;
        }
        m=x/10;
        x=m;
    }
    if (count==100) return 0;
    else return 1;
}
