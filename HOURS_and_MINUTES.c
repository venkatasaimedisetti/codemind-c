#include<stdio.h>
int main()
{
    int M,h,m;
    scanf("%d",&M);
    h=M/60;
    m=M%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    return 0;
}
