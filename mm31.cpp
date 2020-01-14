#include <stdio.h>

int main()
{
	long long i, n, sum=0;
	scanf("%lld",&n);
	for(i=0;i<=n;i++){
		if(i%2==0 && i%3==0 && i%12!=0){
			sum+=i;
		}
	}
	printf("%lld\n",sum);
	return 0;
}
