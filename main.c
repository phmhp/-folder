#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i =300; 
	
	int *pi =&i;
	char *pc =&i;

	printf("%i, %i, %i\n",i,*pi,*pc); // pi�� int��->4����Ʈ�� ������ 4����Ʈ ����Ŵ.
									//pc�� 4����Ʈ ������ 1����Ʈ ����Ŵ. 
										//300�� 256�� ����. ��, 1����Ʈ�� ǥ���� �ȵ�.   
	return 0;
}
