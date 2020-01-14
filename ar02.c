#include <stdio.h>

int main()
{
	long long n[6];
	int i;
	for(i=0;i<6;i++){
		scanf("%lld",&n[i]);
	}
	for(i=5;i>=0;i--){
		if(i==0) printf("%lld\n",n[i]);
		else printf("%lld ",n[i]);
	}
	return 0;
} 
