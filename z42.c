#include<stdio.h>
#include<string.h>
int main(void)
{
	int p[502]={0};
	int i,j;
	int f=0;
	p[1]=1;
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
	printf("Input m: Input n: ");
	scanf("%d%d",&i,&j);
	for(;i<=j;i++)
	{
		if(!p[i])
		{
			f++;
			printf("%4d",i);
			if(f==6)
			{
				f=0;
				printf("\n");
			}
		}
	}
	return 0;
	 
}
