#include<stdio.h>
int fn(int a,int n);
int main(void)
{
	int aa,nn;
	int sum;
	printf("Input a: Input n: ");
	scanf("%d%d",&aa,&nn);
	sum = fn(aa,nn);
	printf("sum=%d",sum);
}
int fn(int a,int n)
{
	if(n==1)
	{
		return a;
	}
	else
	{
		return fn(a,n-1)*10+n*a;
	}
}
