#include <stdio.h>

long long fibo(long long n)
{
	/* fibonacci N[i] = N[i-1] + N[i-2], and if n=1 or n=0, return 1 and 0 */
	if(n==1 || n==0) return n;
	else return fibo(n-1)+fibo(n-2);
}
int main()
{
	long long n;
	while(scanf("%lld",&n)!=EOF){
		
		/* using recursive function fibo() to calculate */
		printf("%lld\n",fibo(n));
	}
	return 0;
}
