//54.c
#include<stdio.h>
int cdigit(int num,int dig);
int main(void)
{
	int a;
	printf("Enter an integer: ");
	scanf("%d",&a);
	printf("Number of digit 2:%d",cdigit(a,2));
	return 0;
}
int cdigit(int num,int dig)
{
	if(num)
	{
		if(num%10==dig)
		{	
		    num/=10;
			return 1+cdigit(num,dig);
		}
		else{
			num/=10;
				return cdigit(num,dig);
		}
	
	}
	else
	{
		return 0;
	}
}
