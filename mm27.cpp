#include <stdio.h>

int main()
{
	long long i, a, b, tmp, sum=0;
	scanf("%lld %lld",&a,&b);
	
	/* let a always be the smaller one */
	if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
	
	/* start from a to b, add all numbers into sum */
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("%lld\n",sum);
	return 0;
}
