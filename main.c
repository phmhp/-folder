#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i =10;
	char c ='a';
	
	int *iptr;
	char *cptr;
	int *iptr2;
	
	iptr=&i;
	cptr=&c;
	
	
	iptr2=iptr; //iptr2는 iptr이 가리키는 곳을 동일하게 가리키도록. 
	
	
	
	
	
	printf("i: %p\n%p (size:%i)\n",iptr,&i,sizeof(iptr)); //%p는 %i랑 거의 같은데 16진수로 찍음. 
	printf("c : %p\n%p (size:%i)\n",cptr,&c,sizeof(cptr));
	printf("iptr2: %p, %i\n",iptr,*iptr2);
	return 0;
}
