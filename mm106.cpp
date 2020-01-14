#include <stdio.h>

int isprime(int n)
{
	int i;
	
	/* if n % i ==0 then return 0 because the number is not prime. */
	for(i=2;i<n;i++){
		if(n%i==0) return 0; 
	}
	return 1;
}
int main()
{
	int i, n;
	scanf("%d",&n);
	
	/* start from n to 1 */
	for(i=n;i>=1;i--){
		
		/* if the number is prime, then output */
		if(isprime(i)){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
