#include <stdio.h>
double sign(double x);
int main(void)
{
	double x,y;
	printf("Enter x: ");
	scanf("%lf",&x);
	y=sign(x);
	printf("sign(%.0f)=%.0f",x,y);
	return 0;
}
double sign(double x)
{	
	double y;
	if(x>0)
		y=1;
	else if(x==0)
		y=0;
	else 
		y=-1;
	return y;
}
