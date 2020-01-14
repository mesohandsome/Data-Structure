#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int i, n;
	scanf("%d",&n);
	int num[n];
	
	/* input all the numbers */
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	/* using qsort() to sort the array */
	qsort(num,n,sizeof(int),cmp);
	
	/* output */
	for(i=0;i<n;i++)
		printf("%d\n",num[i]);
	}
	return 0;
}
