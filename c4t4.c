#include<stdio.h>
int main(void)
{
	int a,n,sum,i;
	scanf("%d%d",&a,&n);
	sum=0;
	for(i=n;i>0;i--)
	{
		sum+=(a*i);
		a*=10;
	}
	printf("Input a,n: s=%d",sum);
}
