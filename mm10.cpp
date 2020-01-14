#include <stdio.h>

int main()
{
	double n, ans;
	scanf("%lf",&n);
	
	/* Because directly using 9/5 its value will be 1 , so I store the value 9 and 5 in double type a and b */
	double a=9, b=5;
	
	/* calculate */
	ans=((n*(a/b))+32);
	printf("%.1lf\n",ans);
	return 0;
}
