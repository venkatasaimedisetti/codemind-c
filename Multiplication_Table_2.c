#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d%d",&n,&a);
    for (int i=1;i<=a;i++) 
    printf("%d x %d = %d
",n,i,n*i);
    return 0;
}