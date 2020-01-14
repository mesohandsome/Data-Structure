#include <stdio.h>
#include <string.h>

int main()
{
	int i, len, flag;
	char line[1024];
	while(fgets(line,1024,stdin)!=NULL){
		flag=0;
		
		/* remove new line symbol */
		len=strlen(line);
		if(line[len-1]=='\n') line[len-1]='\0';
		
		len=strlen(line);
		for(i=0;i<(len/2);i++){
			
			/* determine the output will be YES or NO */
			if(line[i]!=line[len-1-i]){
				printf("NO\n");
				flag=1;
				break;
			}
		}	
		if(flag==0) printf("YES\n");
	}
}
