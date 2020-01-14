#include <stdio.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	if(n>31) printf("Value of more than 31\n");
	else{
		printf("%lld\n",1<<n);
	}
	return 0;
}
