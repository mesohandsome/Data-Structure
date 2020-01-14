#include <stdio.h>

int main()
{
	int i;
	long long num, sum=0;
	
	/* input 6 numbers */
	for(i=0;i<6;i++){
		scanf("%lld",&num);
		
		/* multiply itself three times and add to sum */
		num=(num*num*num);
		sum+=num;
	}
	printf("%lld\n",sum);
	return 0;
}
