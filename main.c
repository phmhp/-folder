#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i =300; 
	
	int *pi =&i;
	char *pc =&i;

	printf("%i, %i, %i\n",i,*pi,*pc); // pi는 int형->4바이트를 가지고 4바이트 가리킴.
									//pc는 4바이트 가지고 1바이트 가리킴. 
										//300은 256을 넘음. 즉, 1바이트로 표현이 안됨.   
	return 0;
}
