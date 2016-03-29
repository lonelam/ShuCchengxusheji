#include<stdio.h>
int main(void)
{
	int time1,time2;
	int h1,m1,h2,m2;
	int i;
	printf("Enter time1:Enter time2:");
	scanf("%d%d",&time1,&time2);
	h1=time1/100;
	m1=time1%100;
	h2=time2/100;
	m2=time2%100;
	if(m2<m1)
	{
		m1=m2+60-m1;
		h2-=1;
		h1=h2-h1;
	}
	else
	{
		m1=m2-m1;
		h1=h2-h1;
	}
	printf("The train journey time is %d hours %d minutes",h1,m1);
	return 0;
}
