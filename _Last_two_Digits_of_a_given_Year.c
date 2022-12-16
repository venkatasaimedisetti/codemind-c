#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%100;
    if(b<10)
    {
        printf("0%d",b);
    }
    else
    {
        printf("%d",b);
    }}