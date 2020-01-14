#include <stdio.h>

int isprime(int n)
{
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int i, n, sum=0, flag=0;
	scanf("%d",&n);
	for(i=2;i<=500,flag<n;i++){
		if(isprime(i)){
			printf("%d,",i);
			flag++;
			sum+=i;
		}
	}
	printf("\n%d\n",sum);
	return 0;
}
