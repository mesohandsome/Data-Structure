#include <stdio.h>

int main()
{
	char c[2];
	int i, n, count[26];
	scanf("%d",&n);
	
	/* initail count[] to 0 */
	for(i=0;i<26;i++){
		count[i]=0;
	}
	
	/* input all the characters */
	for(i=0;i<n;i++){
		scanf("%s",c);
		
		/* character a's ascii is 97, so substract 97 */
		count[c[0]-97]++;
	}
	for(i=0;i<26;i++){
		
		/* if the character's count is 0, it won't output */
		if(count[i]==0) continue;
		else{
			printf("%c %d\n",i+97,count[i]);
		}
	}
	return 0;
}
