#include <stdio.h>
#include <math.h>

long  double circle(int r)
{
	return 3.1416*pow(r,2);
}	
int main()
{
	int r;
	long double area=0.0;
	scanf("%d",&r);
	area=circle(r);
	printf("the area is %Lf\n",area);
	return 0;
}	
