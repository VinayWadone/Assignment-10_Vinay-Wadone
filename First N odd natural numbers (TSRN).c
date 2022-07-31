#include<stdio.h>
void OddNaturals(int);
int main()
{
    int a;
    printf("\n\nEnter a number of your choice\n\n" );
    scanf("%d",&a);
    OddNaturals (a);
    return 0;
}
void OddNaturals(int n)
{
    int i;
    for (i=1;i<2*n;i=i+2)
        printf("%d\n",i);
    return 0;
}
