//zuoye 3.1.6
#include<stdio.h>
int main(void)
{
	int grade,i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&grade);
		if(grade<60) printf("Enter grade: Fail\n");
		else printf("Enter grade: Pass\n");
		
	}
}
