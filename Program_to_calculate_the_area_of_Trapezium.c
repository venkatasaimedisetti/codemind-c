#include<stdio.h>
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    float a=(b1+b2)*0.5*h;
    printf("%.4f",a);
}