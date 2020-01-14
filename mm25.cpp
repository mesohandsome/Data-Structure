#include <stdio.h>

int main()
{
	long long n, i, sum=0;
	scanf("%lld",&n);
	
	/* if the number can be divide by 3, then add it to sum */
	for(i=1;i<=n;i++){
		if(i%3==0) sum+=i;
	}
	printf("%lld\n",sum);
	return 0;
}
