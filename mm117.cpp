#include <stdio.h>

int main()
{
	int i, n, tmp;
	while(scanf("%d",&n)!=EOF){
		int arr[n*2];
		for(i=0;i<n*2;i++) arr[i]=0;
		for(i=0;i<n-1;i++){
			scanf("%d",&tmp);
			arr[tmp]=1;
		}
		for(i=1;i<=n;i++){
			if(arr[i]==0){
				printf("%d\n",i);
				break;
			}
		} 
	}
	return 0;
}
