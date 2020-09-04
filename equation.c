#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	double d,x1,x2;
	scanf("%i%i%i",&a,&b,&c);
	d=b*b - 4*a*c;
	if (d > 0.0)
	{
		x1=(-b + sqrt(d))/(2*a);
		x2=(-b - sqrt(d))/(2*a);
		printf("%f", x1);
		printf("%f", x2);
	}
	else if (d == 0.0)
	{
		x1 = (-b)/(2*a);
		printf("%f", x1);
	}
	else
	{
		printf("D < 0, корней нет!");
	}
	return 0;
}
