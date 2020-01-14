#include <stdio.h>

int main()
{
	double n, sum=0;
	while(scanf("%lf",&n)!=EOF){
		n=(n*n);
		sum+=n;
	}
	printf("%.6lf\n",sum);
	return 0;
}
