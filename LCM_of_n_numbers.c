#include<stdio.h>
int main()
{
    int arr[10], n, mp, j, count;
    scanf("%d", &n);
    for(j=0; j<n; j++)
    scanf("%d", &arr[j]);
    j=0;
    mp = arr[j];
    while(j<n)
    {
        if(mp<arr[j])
            mp = arr[j];
        j++;
    }
    while(1)
    {
        j=0;
        count=0;
        while(j<n)
        {
            if(mp%arr[j]==0)
                count++;
            j++;
        }
        if(count==n)
            break;
        else
            mp++;
    }
    printf("%d",mp);
    return 0;
}

