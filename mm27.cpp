#include <stdio.h>

int main()
{
	long long i, a, b, tmp, sum=0;
	scanf("%lld %lld",&a,&b);
	if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("%lld\n",sum);
	return 0;
}
