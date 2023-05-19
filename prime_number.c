#include<stdio.h>
#include<string.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}