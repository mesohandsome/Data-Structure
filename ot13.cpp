#include <stdio.h>

int main()
{
	int x1, y1, x2, y2;
	int ans;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	ans=(y2-y1)/(x2-x1);
	printf("%d\n",ans);
	return 0;
}
