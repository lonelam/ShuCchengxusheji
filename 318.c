//3.1.8
#include<stdio.h>
double tax(double salary);
int main(void)
{
	double s;
	scanf("%lf",&s);
	printf("Enter the salary: tax=%.2f",tax(s));
return 0;
}
double tax(double salary)
{
double tax,rate;
if(salary<=850)
rate=0;
else if(salary<=1350)
rate=5;
else if(salary<=2850)
rate=10;
else if(salary<=5850)
rate=15;
else
rate=20;
tax=rate*(salary-850)/100;
if (tax==0) tax=0;
return tax;
}
