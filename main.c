#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y; //두개의 입력정수 
	char op;//연산자문자 
	int result;//연산결과 저장 
	
	

	printf("enter the calculation : ");
	scanf("%d %c %d",&x,&op,&y);
	
	
	
	switch(op)//op에 따라 케이스가 나뉨
	
	{
		case '+':
			result =x+y;
			break;
			
		case '-':
			result =x-y;
			break;
			
		case '*':
			result =x*y;
			break;
			
		case '/':
			result =x/y;
			break;
			
			
	 } 
	

	/*if (op =='+') 
	{
		result = x+y;
	} 
	
	else if (op =='-')
	{
		result = x-y;
	} 
	
	else if (op =='*')
	{
		result = x*y;
	} 
	
	else if (op =='/')
	{
		result = x/y;
	} 
	*/
	
	printf("=%d", result);
	return 0;
	
}


//for 문을 활용해서 1부터 x까지 sum에 더하는 ㅗ드
//for ()//반복(초기식;조건식;증감식)
    	//더하기;
	
//printf(""); //결과 출력) 

