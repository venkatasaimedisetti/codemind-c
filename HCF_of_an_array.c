#include<stdio.h>

int main()
{
    int n,i,GCF;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    GCF=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%GCF==0)
       {
           j++;
       }
       else
       {
           GCF=arr[j]%GCF;
           i++;
       }
    }
    printf("%d ",GCF);
    return 0;
}