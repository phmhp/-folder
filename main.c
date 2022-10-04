#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum =0;
	int i,x;
	
	
	printf("input a number : ");
	scanf("%d",&x);
	
	for (i=0;i<=x;i++){ //조건식을 i<x로 하면 마지막 값이 더해지지않아서 오류남. / i 초기값을 0으로하나 1로 하나 같음 
		sum+=i;	}

	printf("The result is %i. \n ",sum);
	return 0;
	
}


//for 문을 활용해서 1부터 x까지 sum에 더하는 ㅗ드
//for ()//반복(초기식;조건식;증감식)
    	//더하기;
	
//printf(""); //결과 출력) 

