#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b;
	float result;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	
	result=(float)a/b;
	
	printf("�������� ����� %f �Դϴ�.\n",result);
	
	
	return 0;
}
