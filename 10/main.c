#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	FILE *fp=NULL;
	char c;
	char str[30];
	fp =fopen("sample.txt","r");
	
	
/*	while ( (c=fgetc(fp)) != EOF) //문자변수 = fgetc(파일포인터) 
		putchar(c);//화면출력 
*/
	while ( fgets(str, 30, fp) !=NULL )
		printf("%s",str);
	 
	 
	fclose(fp);
	
	return 0;
	
		}
	

