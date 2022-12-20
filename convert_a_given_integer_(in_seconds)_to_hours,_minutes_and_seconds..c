#include <stdio.h>
int main()
{
	int seconds,H,M,S;
	scanf("%d", &seconds);
	H=(seconds/3600); 
	M=(seconds -(3600*H))/60;
	S=(seconds -(3600*H)-(M*60));
	printf("H:M:S-%d:%d:%d
",H,M,S);
}
