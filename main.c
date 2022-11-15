#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	int accum;
	
	for (i=0;i<5;i++){
		
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	} 
	
	
	for (i=0;i<5;i++){
		
		printf("%i : %i\n", i, *(grade+i));
		accum+=grade[i];	
	}
	printf("average : %i\n ", accum/5);
	return 0;
	
}
