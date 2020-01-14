#include <stdio.h>

int main()
{
	char c[2];
	int i, n, count[26];
	scanf("%d",&n);
	for(i=0;i<26;i++){
		count[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%s",c);
		count[c[0]-97]++;
	}
	for(i=0;i<26;i++){
		if(count[i]==0) continue;
		else{
			printf("%c %d\n",i+97,count[i]);
		}
	}
	return 0;
}
