#include <stdio.h>

int main()
{
	long long i, n;
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
		printf("%lld*%lld=%lld\n",i,i,i*i);
	}
	return 0;
}
