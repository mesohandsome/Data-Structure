#include <stdio.h>

int main()
{
	double lo, wi;
	scanf("%lf %lf",&lo,&wi);
	
	/* using double or float to print and store */
	printf("%.1lf\n",(lo*wi)/2);
	return 0;
}
