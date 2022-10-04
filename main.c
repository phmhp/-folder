#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;
	
	printf("input a string : ");

	while ((c=getchar())!='\n') //입력문자가 개행문자가 나올때까지 반복 	{ printf ("the number of digits is %i",num); 
	{
	
		if (c>='0' && c <='9') //입력된 글자 ( c ) 가 숫자인가?
		 num=num+1; //그렇다면 하나를 센다. 반복  
	}
	
	printf("숫자의 개수는 %i개입니다. \n ",num);
	return 0;
	
}


//숫자면 ascii 코드 안에서 '0'~'9'에 해당될 것. 
 

