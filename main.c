#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	FILE *fp;
	char str[30];
	
	
	fp =fopen("sample.txt","w");//fopen
	
	
	printf("input a word: "); 
	scanf("%s",str);//scanf //Ű����� �Է¹޾Ƽ�
	fprintf(fp,"%s\n",str); //fprintf//��� 
	
	printf("input a word: "); 
	scanf("%s",str);//scanf //Ű����� �Է¹޾Ƽ�
	fprintf(fp,"%s\n",str); //fprintf//��� 
	
	printf("input a word: "); 
	scanf("%s",str);//scanf //Ű����� �Է¹޾Ƽ�
	fprintf(fp,"%s\n",str); //fprintf//��� 
	
	fclose(fp);
	
		}
	

