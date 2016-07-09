#include<stdio.h>
int main(void)
{
	double e=1;
	double temp;
	int i,j,n;
	printf("Input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=1;
		for(j=1;j<=i;j++)
		{
			temp/=j;
		}
		e+=temp;
	}
	printf(" e=%.4f",e);
	return 0;
}
