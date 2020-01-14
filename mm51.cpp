#include <stdio.h>

int isprime(int n)
{
	int i;
	
	/* if n % i(2 to n-1) ==0 then return 0 */
	/* I used to range i from 2 to sqrt(n) */
	/* but the compiler seems not include sqrt() function */
	for(i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int i, n, sum=0, flag=0;
	scanf("%d",&n);
	
	/* using flag to determine whether the number is enough */
	for(i=2;i<=500,flag<n;i++){
		
		/* if the condition sets, then flag+=1 and sum+=the number */
		if(isprime(i)){
			printf("%d,",i);
			flag++;
			sum+=i;
		}
	}
	printf("\n%d\n",sum);
	return 0;
}
