#include<stdio.h>
int main()
{
    int n=0,w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    for (int i=1;i<=3;i++)
    {
        if (w==x || w==y || w==z)
        {
            n=1;
        } 
        else if (w==x+y|| w==y+z || w==z+x)
        {
            n=2;
        }
        else if (w==x+y+z)
        {
            n=3;
        }
    }
    if (n==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}