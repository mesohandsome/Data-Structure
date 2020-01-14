#include <stdio.h>

int main()
{
	double n, sum=0;
	
	/* scan the numbers until end of file */
	while(scanf("%lf",&n)!=EOF){
		
		/* multiply n itself two times and add into sum */
		n=(n*n);
		sum+=n;
	}
	printf("%.6lf\n",sum);
	return 0;
}
