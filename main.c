#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=10;
	printf("함수 호출전 i=%d\n",i); //i=10
	inc(i); 
	printf("함수 호출후 i=%d\n",i); //i=10
	return 0; 
}

int inc(int counter)
{
	counter++;
	return counter; //counter는 inc함수의 지역변수라 값이 소멸되어버림.  
}
