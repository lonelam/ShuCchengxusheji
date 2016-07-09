#include <stdio.h>
#include <math.h>
int main(void)
{
	double eps,flag,s,d,item;
	printf("Input eps: ");
	scanf("%lf",&eps);
	d=item=1;
	flag=1;
	s=0;
	while(fabs(item)>=eps){
		item=flag*1/d;
		s=s+item;
		d=d+3;
		flag=-flag;	
	}
	printf("s=%.6f",s);
	return 0;
}
