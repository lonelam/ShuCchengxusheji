#include<stdio.h>
int p[500]={1,1,0};
int prime(int m);
int main(void)
{
	int i,m,n,j;
	int cnt=0;
	int sum=0;
	for(i=2;i<501;i++)
	{
		if(!p[i])
		{
			for(j=i+i;j<501;j+=i)
			{
				p[j]=1;
			}
		}
	}
	scanf("%d%d",&m,&n);
	for(i=m;i<n+1;i++)
	{
		if(prime(i))
		{
			cnt++;
			sum+=i;
		}
	}
	printf("Input m: Input n: count=%d,sum=%d",cnt,sum);
}
int prime(int m)
{
	return !p[m];
}

