#include <stdio.h>

int main()
{
	int i, n, star;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&star);
		
		/* determie the input is which one */
		if(star==1) printf("1 Mercury\n");
		else if(star==2) printf("2 Venus\n");
		else if(star==3) printf("3 Earth\n");
		else if(star==4) printf("4 Mars\n");
		else if(star==5) printf("5 Juputer\n");
		else if(star==6) printf("6 Saturn\n");
		else if(star==7) printf("7 Uranus\n");
		else if(star==8) printf("8 Neptunus\n");
		else if(star==9) printf("9 Pluto\n");
	}
	return 0;
}
