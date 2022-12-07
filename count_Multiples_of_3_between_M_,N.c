#include<stdio.h>
int main()
{
    int m,n,sai=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%3==0)
        sai=sai+1;
    }
    printf("%d",sai);
}