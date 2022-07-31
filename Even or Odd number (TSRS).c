#include<stdio.h>
int EvenOdd(int);
int main()
{
    int a;
    printf("\n\nEnter a non zero number of your choice\n\n");
    scanf("%d", &a);
    printf("\n\nSo the response for your number is: %d\n\n",EvenOdd(a));
    return 0;
}
int EvenOdd(int x)
{
    if(x%2==0) return 1;
    else return 0;

}
