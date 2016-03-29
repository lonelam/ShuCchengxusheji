//zuoye 32
#include<stdio.h>
int main(void)
{
	int sig;
	float input;
	scanf("%f",&input);
	if(input>0) sig=1;
	else if (input==0) sig=0;
	else if (input<0) sig=-1;
	printf("Enter x: sign(%f)=%d",input,sig);
}
