#include <stdio.h>
#include <string.h>

int main()
{
	int i=0;
	char line1[100], line2[100];
	scanf("%s",line1);
	scanf("%s",line2);
	if(strstr(line2,line1)==NULL) printf("NO\n");
	else printf("YES\n");
}
