#include <stdio.h>

int main()
{
	int i, n, a, b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a==123 && b==456) printf("9000\n");
		else if(a==456 && b==789) printf("5000\n");
		else if(a==789 && b==888) printf("6000\n");
		else if(a==336 && b==558) printf("10000\n");
		else if(a==775 && b==666) printf("12000\n");
		else if(a==566 && b==221) printf("7000\n");
		else printf("error\n");
	}
	return 0;
}
