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
	int i, n;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		if(isprime(i)){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
