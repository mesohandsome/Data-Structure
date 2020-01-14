#include <stdio.h>

int gcd(int a, int b)
{
	int tmp;
	
	/* 輾轉相除法 */
	while(a%b!=0){
		tmp=b;
		b=a%b;
		a=tmp;
	}
	return b;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	/* using gcd() find the answer */
	printf("%d\n",gcd(a,b));
	return 0;
}
