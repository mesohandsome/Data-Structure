#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n[100], i, num;
    while(scanf("%d",&num)!=EOF){
    	n[i]=num;
    	i++;
	}
	while(i>0){
		i--;
		if(i==0){
			printf("%d\n",n[i]);
		}
		else printf("%d ",n[i]);
	}
    return 0;
}
