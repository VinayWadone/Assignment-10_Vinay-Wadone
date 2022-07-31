#include<stdio.h>
void naturalnumbers(int);
int main()
{
    int x;
    printf("\n\nEnter a number till you want to print\n\n");
    scanf("%d",&x);
    naturalnumbers(x);
    return 0;
}

void naturalnumbers(int a)
{
    int i;
    for(i=1;i<=a;i++)
    printf("%d\n",i);
    return 0;
}
