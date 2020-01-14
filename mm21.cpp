#include <stdio.h>

long long func(long long n)
{
	/* n!=n*(n-1)*(n-2)*.....*1 */
	if(n==1 || n==0) return 1;
	else return n*func(n-1);
}
int main()
{
	long long n;
	scanf("%lld",&n);
	
	/* using recursive function to calculate */
	printf("%lld\n",func(n));
	return 0;
}
