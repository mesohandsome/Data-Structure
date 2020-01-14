#include <stdio.h>

long long fibo(long long n)
{
	if(n==1 || n==0) return n;
	else return fibo(n-1)+fibo(n-2);
}
int main()
{
	long long n;
	while(scanf("%lld",&n)!=EOF){
		printf("%lld\n",fibo(n));
	}
	return 0;
}
