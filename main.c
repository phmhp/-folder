#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	char str[4];
	str[0]='a';
	str[1]='b';		
	str[2]='c';
	str[3]='\0'; //NULL문자까지 넣어야함. 
	
	printf("%s\n",str); 

}
