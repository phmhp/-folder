#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,h,m,s;
	
	
	printf("input the second : ");
	scanf("%i",&x);
	h=x/3600;
	m=(x-h*3600)/60;
	s=(x-h*3600)%60;
	
	printf("The time for %i second is %i : %i : %i \n", x, h, m ,s);
	return 0;
}

