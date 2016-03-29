#include<stdio.h>
int main(void)
{
	int num1,num2;
	printf("Enter num1:Enter num2:");
	scanf("%d%d",&num1,&num2);
	printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d\n%d%%%d=%d",num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,num1/num2,num1,num2,num1%num2);
	return 0;
}
