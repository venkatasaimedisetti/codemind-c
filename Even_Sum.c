#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    int n[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        if (n[i]%2==0)
        {
            sum=sum+n[i];
        }
    }
    printf("%d",sum);
}