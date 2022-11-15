#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int i=100;
	int *p =&i;
	int **q =&p;
	
	*p =200;
	printf("i =%d, *p =%d, **q =%d\n",i, *p, **q);
	//포인터 *p에 따라서 값 모두 200됨. 
	**q =300;
	printf("i =%d, *p =%d, **q =%d\n",i, *p, **q);
	
	//이중포인터인 **q에 따라 값이 모두 300으로 변함. 
	return 0;
}
