#include <stdio.h>
#include <string.h>

int main()
{
	int len, i, flag=0;
	char str[1024];
	scanf("%s",str);
	len=strlen(str);
	if(str[len-1]=='\n') str[len-1]='\0';
	len=strlen(str);
	for(i=0;i<(len/2);i++){
		if(str[i]!=str[len-1-i]){
			printf("NO\n");
			flag=1;
			break;
		}
	}
	if(flag==0) printf("YES\n");
	return 0;
}
