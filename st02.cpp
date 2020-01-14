#include <stdio.h>
#include <string.h>

int main()
{
	int i, n, j, len;
	char str[256], tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		len=strlen(str);
		if(str[len-1]=='\n') str[len-1]='\0';
		strlen(str);
		for(j=0;j<(len/2);j++){
			tmp=str[j];
			str[j]=str[len-1-j];
			str[len-1-j]=tmp;
		}
		printf("%s\n",str);
	}
	return 0;
}
