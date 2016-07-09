//Fuxx C languege chap4_5
#include<stdio.h>
int main(void)
{
	int n,i;
	double d,h;
	scanf("%lf%d",&h,&n);
	d=h;
	for(i=0;i<n;i++)
	{
		h/=2;
		d=d+h+h;
	}
	printf("Input height: Input n: distance=%.1f\nheight=%.1f",d,h);
}
