#include <stdio.h>

int main()
{
	long long i, n, sum=0;
	scanf("%lld",&n);
	for(i=0;i<=n;i++){
		/* using if to determine whether the number is suitable or not */
		if(i%2==0 && i%3==0 && i%12!=0){
			/* add the suitable number into sum */
			sum+=i;
		}
	}
	printf("%lld\n",sum);
	return 0;
}
