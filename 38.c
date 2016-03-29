//z 38
#include<stdio.h>
int main(void)
{
	int input,i;
	double p;
	printf("[1] Select apples\n[2] Select pears\n[3] Select oranges\n[4] Select grapes\n[0] exit\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter choice:");
		scanf("%d",&input);
		if(input==0) return 0;
		else if(input==1) p=3;
		else if(input==2) p=2.5;
		else if(input==3) p=4.1;
		else if(input==4) p=10.2;
		else p=0;
		printf(" price=%.1f\n",p);
	}
	return 0;
} 
