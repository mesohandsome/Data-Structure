#include <stdio.h>

int main()
{
	int i;
	long long num, sum=0;
	for(i=0;i<6;i++){
		scanf("%lld",&num);
		num=(num*num*num);
		sum+=num;
	}
	printf("%lld\n",sum);
	return 0;
}
