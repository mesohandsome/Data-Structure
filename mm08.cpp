#include <stdio.h>

int main()
{
	long long a, b;
	scanf("%lld %lld",&a,&b);
	
	/* add two numbers first, and multiplies it self */
	a=a+b;
	printf("%lld\n",a*a);
	return 0;
}
