#include <stdio.h>
int even(int n);
int main(void)
{
	int n,y,sum;
	printf("Input integers: ");
	sum=0;
	scanf("%d",&n);
	do{
		y=even(n);
	    if(y==0)
		  sum=sum+n;	
		scanf("%d",&n);
	}while(n>0);
	printf("The sum of the odd numbers is %d",sum);
	return 0;
}
int even(int n)
{
	int flag;
	if(n%2==0)
		flag=1;
	else
		flag=0;
	return flag;
}

