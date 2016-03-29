#include<stdio.h>
#include<math.h>
int main(void)
{
	double interest,money,rate,year;
	printf("Enter money,year and rate:");
	scanf("%lf%lf%lf",&money,&year,&rate);
	interest=money*pow((1+rate),year)-money;
	printf("interest=%1.2f",interest);
}
