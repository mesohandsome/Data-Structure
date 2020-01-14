#include <stdio.h>
#include <string.h>

int main()
{
	int i=0;
	char line1[100], line2[100];
	
	/* ipnut two strings */
	scanf("%s",line1);
	scanf("%s",line2);
	
	/* using strstr() to find whether line1 is in line2 or not */
	if(strstr(line2,line1)==NULL) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}
