//Fuxxed judge system
//Fuxx damn primary C
#include<stdio.h>
int istri(double a,double b,double c);
int main(void)
{
	double a,b,c,s,area,perimeter;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("Enter 3 sides of the triangle: ");
	if(istri(a,b,c))
	{
		s=(a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter = a+b+c;
		printf("area=%.2f;perimeter=%.2f",area,perimeter);
		
	}
	else
	{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}
int istri(double a,double b,double c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		return 1;
	}
	return 0;
}
