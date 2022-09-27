#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,m,s;
	printf("input the second : ");
	scanf("%d",&a);
	
	m=a/60;
	s=a%60;

	printf("the time is %d : %d\n",m,s);
	
	return 0;
	return 0;
}
