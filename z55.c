#include<stdio.h>
int isflower(int num);
int main(void)
{
	int m,n,i;
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	for(i=m;i<n+1;i++)
	{
		if(isflower(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
int isflower(int num)
{
	int temp,sum;
	temp=num;
	sum=0;
	int x;
	for(;num!=0;num/=10)
	{
		x=num%10;
		sum+=(x*x*x);
	}
	if(sum==temp)
	{
		return 1;
	}
	return 0;
}
