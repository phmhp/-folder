#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;
	
	printf("input a string : ");

	while ((c=getchar())!='\n') //�Է¹��ڰ� ���๮�ڰ� ���ö����� �ݺ� 	{ printf ("the number of digits is %i",num); 
	{
	
		if (c>='0' && c <='9') //�Էµ� ���� ( c ) �� �����ΰ�?
		 num=num+1; //�׷��ٸ� �ϳ��� ����. �ݺ�  
	}
	
	printf("������ ������ %i���Դϴ�. \n ",num);
	return 0;
	
}


//���ڸ� ascii �ڵ� �ȿ��� '0'~'9'�� �ش�� ��. 
 

