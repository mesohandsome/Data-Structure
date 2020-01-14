#include <stdio.h>

int main()
{
	long long a, b, c, flag=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	if(a+b>c) flag++;
	if(a+c>b) flag++;
	if(b+c>a) flag++;
	
	/* if all the condition sets, flag will be 3  */
	if(flag==3) printf("fit\n");
	else printf("unfit\n");
	return 0;
}
